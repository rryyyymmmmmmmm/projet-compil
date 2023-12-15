#ifndef QUADRUPLES_H
#define QUADRUPLES_H


typedef struct {
    char op[10];
    char arg1[10];
    char arg2[10];
    char result[10];
} Quad;

typedef struct ListeQuad {
    Quad quad;
    struct ListeQuad* suiv;
} ListeQuad;



// Function to create a new quadruple
Quad creerQuad(const char* op, const char* arg1, const char* arg2, const char* result);

// Function to add a quadruple to the linked list
void ajouterQuadAListe(ListeQuad** list, const char* op, const char* arg1, const char* arg2, const char* result);

// Function to print all quadruples in the linked list
void afficherListeQuad(const ListeQuad* list);

// Function to free memory allocated for the linked list
void libererListeQuad(ListeQuad** list);

#endif /* QUADRUPLES_H */
