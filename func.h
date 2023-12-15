#ifndef SYMBOLES_H
#define SYMBOLES_H

#include <stdbool.h>

typedef enum {
    INT_TYPE,
    FLOAT_TYPE,
    BOOL_TYPE
} TypeTag;

typedef union {
    double entier;
    bool boolean;
    char charactere;
    char* string;
} Valeur;

void yyerror(const char *s);
int recherche(char entite[]);
void inserer(char entite[], char code[], char type[], char constant[],char Val[]);
void setType(char entite[], char newType[]);
char* getType(char entite[]);
int isDefined(char entite[]);
void setConstant(char entite[], char newConstant[]);
int isConstant(char entite[]);
void setVal(char entite[], Valeur newVal, TypeTag type);
double getVal(char entite[]);
double calculateStrings(const char* str1, const  char* str2, char op);
void afficher();
void afficherVecteur(double* vect, int length);
char* deEnumAString(TypeTag type); 

#endif 
