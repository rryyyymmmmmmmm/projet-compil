%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"
#include "quad.h"
//#include "val.h"

void yyerror(char *s);
int yylex(void);

extern FILE* yyin;

int nb_ligne = 1;
int nb_colonnes = 1;

typedef struct {
    char NomEntite[20];
    char CodeEntite[20];
    char TypeEntite[20];
    char Constant[4];
    char Val[10];
} TypeTS;

char* k;

double d;
TypeTS ts[100];
int CpTabSym = 0;

%}

%code requires {
    
    #include <stdbool.h>

    typedef enum {
        INT_TYPE,
        FLOAT_TYPE,
        BOOL_TYPE
    } TypeTag;
    
    typedef union Valeur{
        double entier;
        int boolean;
        char charactere;
        char* string;
    } Valeur;

    typedef struct Variable {
        TypeTag typeVariable;
        Valeur valeurVariable;
    }Variable;

}

%union {
    Valeur valeur;
}

%token ERROR
%token <valeur>IDF
%token BEGIN_ END_ RETURN_
%token CONST <valeur>BOOL <valeur>INTEGER <valeur>FLOAT 
%token IF ELIF ELSE FOR DO WHILE 
%token AFFECTATION SEPERATOR 
%token LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET END_OP 
%token <valeur>PLUS <valeur>MINUS <valeur>MULT <valeur>DIV 
%token UMINUS
%token LESS_THAN LESS_OR_EQUAL GREATER_THAN GREATER_OR_EQUAL DIFFERENT EQUAL 
%token AND OR <valeur> BOOL_TRUE <valeur> BOOL_FALSE
%token <valeur>NBR_INT <valeur>NBR_REEL 

%type Code function function_declaration <valeur> var <valeur> type <valeur> expression  <valeur> term <valeur> factor <valeur> int_expr <valeur> int_term <valeur> int_factor <valeur> float_expr <valeur> float_term <valeur> float_factor <valeur> bool_expr <valeur> bool_term <valeur> bool_factor <valeur> boolean

%start Code

%left PLUS MINUS
%left MULT DIV
%left UMINUS  



%%
Code: function program { printf("noice program\n");}
    | program { printf("noice program\n");}
    ;

function: type IDF LEFT_PARANTHESIS function_declaration RIGHT_PARANTHESIS LEFT_CURLY_BRACKET program  RIGHT_CURLY_BRACKET function
        |
        ;

function_declaration: type IDF SEPERATOR function_declaration {setCode($2.string, "variable_lcl");}
                    |
                    ;

// return_: NBR_INT 
//        | NBR_REEL
//        | IDF
//        | expression
//        ;

program: declarations BEGIN_ instructions END_ { printf("noice program\n"); }
       ;

declarations: type {k = $1.string;} var  declarations { printf("noice declaration\n"); }
            | CONST INTEGER IDF AFFECTATION NBR_INT END_OP  declarations {setType($3.string, $2.string);setConstant($3.string, "oui");setVal($3.string,$5.entier);}
            | CONST FLOAT IDF AFFECTATION NBR_REEL END_OP declarations {setType($3.string, $2.string);setConstant($3.string, "oui");setVal($3.string,$5.entier);}
            | CONST BOOL IDF AFFECTATION boolean END_OP  declarations {setType($3.string, $2.string);setConstant($3.string, "oui");setVal($3.string,$5.entier);}
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

assign: IDF AFFECTATION expression END_OP {if(isConstant($1.string)==1){ fprintf(stderr, "Error: %s is CONSTANT\n",$1.string);}
                                            if(strcmp(getType($1.string),"+")==0){ fprintf(stderr, "Error : %s is  NOT defined\n",$1.string);}
                                            setVal($1.string,$3.entier);printf("noice assign\n"); }
    ;

expression: int_expr { $$.entier = $1.entier; }
          | bool_expr { $$.boolean = $1.boolean; }
          ;

int_expr: int_expr PLUS int_term { $$.entier = $1.entier + $3.entier; }
        | int_expr MINUS int_term { $$.entier = $1.entier - $3.entier; }
        | int_term { $$.entier = $1.entier; }
        ;

int_term: int_term MULT int_factor { $$.entier = $1.entier * $3.entier; }
        | int_term DIV int_factor { if ($3.entier == 0) { fprintf(stderr, "Error : division by zero\n"); exit(EXIT_FAILURE); } $$.entier = $1.entier / $3.entier; }
        | int_factor { $$.entier = $1.entier; }
        ;

int_factor: NBR_INT { $$.entier = $1.entier; }
          | LEFT_PARANTHESIS int_expr RIGHT_PARANTHESIS { $$.entier = $2.entier; }
          | MINUS int_factor %prec UMINUS { $$.entier = -$2.entier; }
          | IDF { $$.entier = getVal($1.string);if(strcmp(getType($1.string),"+")==0){ fprintf(stderr, "Error : %s is  NOT defined\n",$1.string);}}
          ;

bool_expr: bool_expr OR bool_term { $$.boolean = $1.boolean || $3.boolean; }
         | bool_term { $$.boolean = $1.boolean; }
         ;

bool_term: bool_term AND bool_factor { $$.boolean = $1.boolean && $3.boolean; }
         | bool_factor { $$.boolean = $1.boolean; }
         ;

bool_factor: BOOL_TRUE { $$.boolean = 1; }
           | BOOL_FALSE { $$.boolean = 0; }
           | LEFT_PARANTHESIS bool_expr RIGHT_PARANTHESIS { $$.boolean = $2.boolean; }
           | int_expr EQUAL int_expr { $$.entier = $1.entier == $3.entier; }
           | int_expr DIFFERENT int_expr { $$.entier = $1.entier != $3.entier; }
           | int_expr LESS_THAN int_expr { $$.entier = $1.entier < $3.entier; }
           | int_expr LESS_OR_EQUAL int_expr { $$.entier = $1.entier <= $3.entier; }
           | int_expr GREATER_THAN int_expr { $$.entier = $1.entier > $3.entier; }
           | int_expr GREATER_OR_EQUAL int_expr { $$.entier = $1.entier >= $3.entier; }
           | IDF { $$.boolean = getVal($1.string);if(strcmp(getType($1.string),"+")==0){ fprintf(stderr, "Error : %s is  NOT defined\n",$1.string);}}
           ;


loop: FOR LEFT_PARANTHESIS init SEPERATOR expression SEPERATOR counter RIGHT_PARANTHESIS LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET
    | WHILE LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET
    | DO LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET WHILE LEFT_PARANTHESIS expression RIGHT_PARANTHESIS
    ;

init: IDF AFFECTATION expression
    ;


counter: IDF AFFECTATION expression
    | inc
    | dec
    ;


check: IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET another
    ;

another: ELIF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET another
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

void yyerror(char *s) {
    fprintf(stderr, "Error : %s\n", s);
}

int recherche(char entite[]) {
    int i = 0;
    while (i < CpTabSym) {
        if (strcmp(entite, ts[i].NomEntite) == 0)
            return i;
        i++;
    }
    return -1;
}

int isDefined(char entite[]) {
    int index = recherche(entite);
    if (index != -1) {
     
        return 1; 
    } else {
       
        return 0;
    }
}

void inserer(char entite[], char code[], char type[], char constant[],char Val[]) {
    if (recherche(entite) == -1) {
        strcpy(ts[CpTabSym].NomEntite, entite);
        strcpy(ts[CpTabSym].CodeEntite, code);
        strcpy(ts[CpTabSym].TypeEntite, type);
        strcpy(ts[CpTabSym].Constant, constant);
        strcpy(ts[CpTabSym].Val, Val);
        CpTabSym++;
    } 
}

void setCode(char entite[], char newType[]) {
    int index = recherche(entite);
    if (index != -1) {
        // Entity found, set the new type
        strcpy(ts[index].CodeEntite, newType);
    } else {
        // Entity not found
        printf("\nErreur : %s n'est pas defini.\n", entite);
    }
}

void setType(char entite[], char newType[]) {
    int index = recherche(entite);
    if (index != -1) {
        // Entity found, set the new type
        strcpy(ts[index].TypeEntite, newType);
    } else {
        // Entity not found
        printf("\nErreur : %s n'est pas defini.\n", entite);
    }
}

void setConstant(char entite[], char newConstant[]) {
    int index = recherche(entite);
    if (index != -1) {
        // Entity found, set the new constant
        strcpy(ts[index].Constant, newConstant);
    } else {
        // Entity not found
        printf("\nErreur : %s n'est pas defini.\n", entite);
    }
}

void setVal(char entite[], double newVal) {
    int index = recherche(entite);

    if (index != -1) {
        // Convert the double newVal to a string
        char newValString[10];  // Adjust the array size based on your needs
        snprintf(newValString, sizeof(newValString), "%lf", newVal);

        // Update the value in the symbol table
        strcpy(ts[index].Val, newValString);
        printf("Value of %s has been updated to %s.\n", entite, newValString);
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

void delete(char codeToDelete[]) {
    int i, j;

    // Parcours de la table de symboles
    for (i = 0; i < CpTabSym; i++) {
        // Vérification si l'entité a le code à supprimer
        if (strcmp(ts[i].CodeEntite, codeToDelete) == 0) {
            // Supprimer l'entité en décalant les éléments restants
            for (j = i; j < CpTabSym - 1; j++) {
                strcpy(ts[j].NomEntite, ts[j + 1].NomEntite);
                strcpy(ts[j].CodeEntite, ts[j + 1].CodeEntite);
                strcpy(ts[j].TypeEntite, ts[j + 1].TypeEntite);
                strcpy(ts[j].Constant, ts[j + 1].Constant);
                strcpy(ts[j].Val, ts[j + 1].Val);
            }

            // Décrémenter le compteur de la table de symboles
            CpTabSym--;

            // Après la suppression, réduire le compteur i pour éviter de sauter une entrée
            i--;
        }
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
