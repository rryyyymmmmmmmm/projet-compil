#ifndef VAL_H
#define VAL_H

typedef union Valeur{
    int entier;
    double reel;
    char charactere;
    char* chaine_de_characteres;
}Valeur;

#endif  // VAL_H