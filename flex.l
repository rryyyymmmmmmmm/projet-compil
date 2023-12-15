/* part 1 : declarations 
 tokens : NBR_REEL NBR_INT BEGIN END INTEGER FLOAT BOOL CONST IF ELSE FOR IDF PLUS MINUS MULT DIV LESS_THAN LESS_OR_EQUAL GREATER_THAN GREATER_OR_EQUAL SEPARATOR AFFECTATION LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET END_OP
 */
%{

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "bison.tab.h"
#include "func.h"

extern int nb_lignes;
extern int nb_colonnes;
int yywrap();
void yyerror(const char *s);
extern YYSTYPE yylval;
extern bool estDansInstructions;


%}

commentaire "/*"([^*]|\*+[^*/])*\*+"/"

chiffre 0|[1-9][0-9]*
reel [0-9]+\.[0-9]*|\.[0-9]+
idf [A-Z]([A-Za-z0-9]*(_[A-Za-z0-9]+)*){0,9}

%%

{reel} { 
    yylval.valeur.entier = atof(strdup(yytext));
     return(NBR_REEL);  } 

{chiffre} { 
    yylval.valeur.entier = atoi(strdup(yytext));
     return(NBR_INT); 
}

"BEGIN" {  return(BEGIN_); estDansInstructions = true; }
"END" {  return(END_);  }

"INT" { yylval.valeur.string = strdup(yytext); return(INTEGER);  }
"FLOAT" { yylval.valeur.string = strdup(yytext); return(FLOAT);  }
"BOOL" { yylval.valeur.string = strdup(yytext); return(BOOL);  }
"CONST" {  return(CONST);  }

"IF" {  return(IF);  }
"ELIF" {  return(ELIF);  }
"ELSE" {  return(ELSE);  }


"AND" { return(AND);}
"NOT" { return(NOT);}
"OR" { return(OR);}


"TRUE" {  return(BOOL_TRUE); }
"FALSE" {  return(BOOL_FALSE); }


"FOR" {  return(FOR);  }

"DO" { return(DO);}
"WHILE" { return(WHILE);}



{idf} { 
    if (strlen(yytext) <= 10) {
        
        int underscoreCount = 0;
        int i;
        for (i = 0; yytext[i] != '\0'; i++) {
            if (yytext[i] == '_') {
                underscoreCount++;
                if (underscoreCount > 2 || yytext[i + 1] == '\0') {
                    fprintf(stderr, "Erreur Lexicale: Invalid identifier %sa la ligne %d a la colonne %d \n ", yytext,nb_lignes, nb_colonnes);
                      
                }
            } else {
                underscoreCount = 0;
            }
        }

        
        
        yylval.valeur.string = strdup(yytext);
       // printf("inserer flex\n");
        inserer(yytext, "idf", "+" , "non","--");
        return(IDF);
    } else {
        printf ("\n Erreur Lexicale: IDF trop longue a la ligne %d a la colonne %d \n\n ",nb_lignes, nb_colonnes);
         
    }
}






"+" {  return(PLUS);  }
"-" {  return(MINUS);  }
"*" {  return(MULT);  }
"/" {  return(DIV);  }

"<" {  return(LESS_THAN);  }
"<=" {  return(LESS_OR_EQUAL);  }
"<>" {  return(DIFFERENT);  }
"==" {  return(EQUAL);  }
">" {  return(GREATER_THAN);  }
">=" {  return(GREATER_OR_EQUAL);  }

"," {  return(SEPERATOR);  }

";" {  return(END_OP);  }
":=" {
     return(AFFECTATION); 
    }
"(" {  return(LEFT_PARANTHESIS);  }
")" {  return(RIGHT_PARANTHESIS);  }
"{" {  return(LEFT_CURLY_BRACKET);  }
"}" {  return(RIGHT_CURLY_BRACKET);  }
{commentaire} { printf("L'entite lexicale est reconnue comme commentaire \n");  }
[ \t] 	nb_colonnes= nb_colonnes + strlen(yytext);
\n   	{nb_colonnes= 1; nb_lignes++;}
. {printf ("\n Entité lexicale non reconnue a ligne %d a la colonne %d \n\n",
 nb_lignes, nb_colonnes);}

%%

int yywrap() {
    return(1);
}
