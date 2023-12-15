%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "func.h"


typedef struct {
    char NomEntite[20];
    char CodeEntite[20];
    char TypeEntite[20];
    char Constant[4];
    char Val[10];
} TypeTS;

void yyerror(const char *s);
char* afficherErreur(int typeErreur, char *idf);
int yylex(void);

extern FILE* yyin;

int nb_lignes = 1;
int nb_colonnes = 1;


char* k;
char idf[11];
char erreur[100];
bool estDansInstructions = false;


double d;
bool booleanExp;
TypeTS ts[100];
int CpTabSym = 0;
TypeTag typeVariable;


%}

%code requires {
    
    #include <stdbool.h>
    #include "func.h"
    
}

%union {
    Valeur valeur;
}

%token ERROR
%token <valeur>IDF
%token BEGIN_ END_ 
%token CONST <valeur>BOOL <valeur>INTEGER <valeur>FLOAT 
%token IF ELIF ELSE FOR DO WHILE 
%token AFFECTATION SEPERATOR 
%token LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET END_OP 
%token <valeur>PLUS <valeur>MINUS <valeur>MULT <valeur>DIV 
%token UMINUS
%token LESS_THAN LESS_OR_EQUAL GREATER_THAN GREATER_OR_EQUAL DIFFERENT EQUAL 
%token AND OR NOT <valeur> BOOL_TRUE <valeur> BOOL_FALSE
%token <valeur>NBR_INT <valeur>NBR_REEL 

%type <valeur> var <valeur> type <valeur> expression <valeur> int_expr <valeur> int_term <valeur> int_factor <valeur> bool_expr <valeur> bool_term <valeur> bool_factor <valeur> boolean <valeur> check

%start program

%left PLUS MINUS
%left MULT DIV
%left UMINUS  
%right NOT



%%

program: declarations {estDansInstructions = false;} BEGIN_ {estDansInstructions = true;} instructions  END_ { printf("noice program\n");  YYACCEPT; }
       | BEGIN_ END_ {yyerror(afficherErreur(24, ""));}
       |  {yyerror(afficherErreur(24, ""));}
       ;

declarations: type {k = $1.string;} var  declarations { printf("noice declaration\n"); }
            | CONST INTEGER IDF AFFECTATION NBR_INT END_OP  declarations {setType($3.string, $2.string);setConstant($3.string, "oui");setVal($3.string,$5, INT_TYPE);}
            | CONST FLOAT IDF AFFECTATION NBR_REEL END_OP declarations {setType($3.string, $2.string);setConstant($3.string, "oui");setVal($3.string,$5, FLOAT_TYPE);}
            | CONST BOOL IDF AFFECTATION boolean END_OP  declarations {setType($3.string, $2.string);setConstant($3.string, "oui");setVal($3.string,$5, BOOL_TYPE);}
            | ERROR { fprintf(stderr, "Syntax error: Unexpected token\n"); }
            |
            ;

type: INTEGER
    | FLOAT
    | BOOL
    ;

boolean: BOOL_TRUE
        | BOOL_FALSE
        ;

var: IDF SEPERATOR {setType($1.string, k);} var
   | IDF END_OP {setType($1.string, k);}
   ;

instructions: assign instructions 
    | loop instructions 
    | check instructions 
    | 
    ;

assign: IDF AFFECTATION expression END_OP {

    if(isConstant($1.string)==1) { 
        fprintf(stderr, "Erreur: %s est une constante.\n",$1.string);
        }                                           
    if(strcmp(getType($1.string),"+")==0) { 
        fprintf(stderr, "Erreur : %s n'a pas été déclaré.\n",$1.string);
        }
    if(strcmp(deEnumAString(typeVariable), getType($1.string)) == 0 ) {
        switch (typeVariable) {
        case BOOL_TYPE :
            setVal($1.string,$3, BOOL_TYPE);printf("noice assign\n"); 
        break;
        case INT_TYPE : 
            setVal($1.string,$3, INT_TYPE);printf("noice assign\n"); 
        break;
        case FLOAT_TYPE : 
            setVal($1.string,$3, FLOAT_TYPE);printf("noice assign\n"); 
        break;
        }
    } else {
        printf("ERROR : INCOMPATIBILITE\n");
    }
    
    }
    ;

expression: int_expr { $$.entier = $1.entier; }
          | bool_expr { $$.boolean = $1.boolean; typeVariable = BOOL_TYPE;  }
          ;

int_expr: int_expr PLUS int_term { $$.entier = $1.entier + $3.entier; }
        | int_expr MINUS int_term { $$.entier = $1.entier - $3.entier; }
        | int_term { $$.entier = $1.entier; }
        ;

int_term: int_term MULT int_factor { $$.entier = $1.entier * $3.entier; }
        | int_term DIV int_factor { 
                if ($3.entier == 0) { 
                    yyerror(afficherErreur(34, ""));     
                } else 
                    $$.entier = $1.entier / $3.entier; 
                }
        | int_factor { $$.entier = $1.entier; }
        ;

int_factor: NBR_INT { $$.entier = $1.entier; }
          | LEFT_PARANTHESIS int_expr RIGHT_PARANTHESIS { $$.entier = $2.entier; }
          | MINUS int_factor %prec UMINUS { $$.entier = -$2.entier; }
          | IDF { 

                if(isDefined($1.string) != -1) {
                    $$.entier = getVal($1.string);
                } else {
                    yyerror(afficherErreur(31, $1.string));
                }
            }

bool_expr: bool_expr OR bool_term { $$.boolean = $1.boolean || $3.boolean; }
         | bool_term { $$.boolean = $1.boolean; }
         ;

bool_term: bool_term AND bool_factor { $$.boolean = $1.boolean && $3.boolean; }
         | bool_factor { $$.boolean = $1.boolean; }
         ;

bool_factor: BOOL_TRUE { $$.boolean = true; }
           | BOOL_FALSE { $$.boolean = false; }
           | LEFT_PARANTHESIS bool_expr RIGHT_PARANTHESIS { $$.boolean = $2.boolean; }
           | int_expr EQUAL int_expr { $$.boolean = $1.entier == $3.entier; }
           | int_expr DIFFERENT int_expr { $$.boolean = $1.entier != $3.entier; }
           | int_expr LESS_THAN int_expr { $$.boolean =  $1.entier < $3.entier; }
           | int_expr LESS_OR_EQUAL int_expr {$$.boolean = $1.entier <= $3.entier; }
           | int_expr GREATER_THAN int_expr { $$.boolean =  $1.entier > $3.entier; }
           | int_expr GREATER_OR_EQUAL int_expr { $$.boolean = $1.entier >= $3.entier;}                                 
           | IDF { 
                if(isDefined($1.string) != -1) {
                    $$.boolean = getVal($1.string);
                    typeVariable = BOOL_TYPE;
                } else {
                    yyerror(afficherErreur(31,$1.string));
                }
           }
           | NOT bool_factor {
                                $$.boolean = !$2.boolean;
                                };
           ;


loop: FOR LEFT_PARANTHESIS init SEPERATOR bool_expr SEPERATOR counter RIGHT_PARANTHESIS LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET
    | WHILE LEFT_PARANTHESIS bool_expr RIGHT_PARANTHESIS LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET
    | DO LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET WHILE LEFT_PARANTHESIS bool_expr RIGHT_PARANTHESIS
    ;

init: IDF AFFECTATION expression
    ;


counter: IDF AFFECTATION expression
    | inc
    | dec
    ;


check: IF LEFT_PARANTHESIS bool_expr RIGHT_PARANTHESIS LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET another {/*if ($3.boolean) {
    $$ = $6;
} else {

    $$ = $
}              */} 
    ;

another: ELIF LEFT_PARANTHESIS bool_expr RIGHT_PARANTHESIS LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET another
    | ELSE LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET
    |
    ;

inc: IDF PLUS PLUS 
    ;

dec: IDF MINUS MINUS 
    ;

%%


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        perror("Unable to open input file");
        return 1;
    }

    yyin = input_file;
    yyparse();
    afficher();
    fclose(input_file);

    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
}

char* deEnumAString(TypeTag type) {
    switch (type) {
        case INT_TYPE: return "INT";
        break;
        case FLOAT_TYPE: return "FLOAT";
        break;
        case BOOL_TYPE: return "BOOL";
        break;
        default: return "ERREUR";
    }
}


char* afficherErreur(int typeErreur, char *idf) {
    switch (typeErreur) {
        case 34 : 
            snprintf(erreur, sizeof(erreur), "Error : Division par zero à la ligne %d colonne %d\n", nb_lignes, nb_colonnes);
            return erreur;
        break;
        case 31 : 
            snprintf(erreur, sizeof(erreur), "Error: Variable %s non déclarée à la ligne %d colonne %d\n", idf, nb_lignes, nb_colonnes);
            return erreur;
        break;
        
        case 35 : 
            snprintf(erreur, sizeof(erreur), "Error: Variable %s déjà déclarée de type %s à la ligne %d colonne %d\n", idf, getType(idf), nb_lignes, nb_colonnes);
            return erreur;
        break;
        
        case 24 : 
            strcpy(erreur, "Erreur : Le programme est vide");
            return erreur;
        break;
        default:
            snprintf(erreur, sizeof(erreur), "Error : Erreur inconnue.");
        break;
    }
}

int recherche(char entite[]) {
    int i = 0;
    while (i < CpTabSym) {
        if (strcmp(entite, ts[i].NomEntite) == 0) {
           // printf("found l entite dans table des symboles\n");
            return i;
        }
        i++;
    }
    //printf("DID NOTfound l entite dans table des symboles\n");
    return -1;
}

int isDefined(char entite[]) {
    int index = recherche(entite);
    if (index != -1) {
        return index; 
    } else {
        return -1;
    }
}

void inserer(char entite[], char code[], char type[], char constant[],char Val[]) {
    int index = recherche(entite);
    if ((index == -1)&&(estDansInstructions==false)) {
        strcpy(ts[CpTabSym].NomEntite, entite);
        strcpy(ts[CpTabSym].CodeEntite, code);
        strcpy(ts[CpTabSym].TypeEntite, type);
        strcpy(ts[CpTabSym].Constant, constant);
        strcpy(ts[CpTabSym].Val, Val);
        CpTabSym++;
    }
    else if ((index != -1)&&(estDansInstructions==false)) {
        printf("ERREUR if 2 : DOUBLE DECLARATION de %s\n", entite); 
    }
    else if ((index != -1)&&(estDansInstructions==true)) {
        printf("IF 3 INSERER\n");
    }
}

void setType(char entite[], char newType[]) {
    int index = recherche(entite);
    if (index != -1) {
        if(strcmp(ts[index].TypeEntite, "+") == 0) {
            strcpy(ts[index].TypeEntite, newType);

        } else {
            printf("ERROR : INCOpatibilite\n");
        }
    } else {
        
        printf("\nErreur : %s n'est pas defini.\n", entite);
    }
}

void setConstant(char entite[], char newConstant[]) {
    int index = recherche(entite);
    if (index != -1) {
        
        strcpy(ts[index].Constant, newConstant);
    } else {
        
        printf("\nErreur : %s n'est pas defini.\n", entite);
    }
}

void setVal(char entite[], Valeur newVal, TypeTag type) {
    int index = recherche(entite);
    if (index != -1) {
        
        char newValString[10];  
        if(type == BOOL_TYPE) {
            if(newVal.boolean == true) strcpy(ts[index].Val, "TRUE");
            if(newVal.boolean == false) strcpy(ts[index].Val, "FALSE");
            //printf("Value of %s has been updated to %s.\n", entite, newValString);

        } else {
            snprintf(newValString, sizeof(newValString), "%lf", newVal.entier);
            strcpy(ts[index].Val, newValString);
            //printf("Value of %s has been updated to %s.\n", entite, newValString);
        }
    } else {
        printf("Error: %s not found in the symbol table.\n", entite);
    }
}

double getVal(char entite[]) {

    int index = recherche(entite);

    if (index != -1) {
        return atof(ts[index].Val);

       } else {
        printf("Error: %s not found in the symbol table.\n", entite);
        return 0;
    }

}


char* getType(char entite[]) {
    int index = recherche(entite);
    if (index != -1) {
        return ts[index].TypeEntite;
    } else {
        fprintf(stderr, "Error: Identifier '%s' not found in the symbol table.\n", entite);
        return NULL;
    }
}


int typeCompatible(char type1[], char type2[]) {


    if (strcmp(type1, type2) == 0) {
        return 1;  
    } else {
        return 0;  
    }
}


int isConstant(char entite[]) {
    int index = recherche(entite);
    
   
    if (index != -1) {
        
        if (strcmp(ts[index].Constant, "oui") == 0) {
            return 1;  
        } else {
            return 0;  
        }
    } else {
        return -1;  
    }
}

void afficher() {
    printf("\n/***************Table des symboles ******************/\n");
    printf("_________________________________________________________________\n");
    printf("| NomEntite | CodeEntite | TypeEntite | Constant | Val |\n");
    printf("_________________________________________________________________\n");
    int i = 0;
    while (i < CpTabSym) {
        printf("| %10s | %11s | %10s | %8s | %10s|\n",
               ts[i].NomEntite, ts[i].CodeEntite, ts[i].TypeEntite, ts[i].Constant, ts[i].Val);
        i++;
    }
}
