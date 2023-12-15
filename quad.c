#include<string.h>
#include<stdio.h>
#include<quad.h>


Quad creerQuad(const char* op, const char* arg1, const char* arg2, const char* result) {
    Quad newQuad;
    strcpy(newQuad.op, op);
    strcpy(newQuad.arg1, arg1);
    strcpy(newQuad.arg2, arg2);
    strcpy(newQuad.result, result);

    return newQuad;
}

// Function to add a quadruple to the linked list
void ajouterQuadAListe(ListeQuad** list, const char* op, const char* arg1, const char* arg2, const char* result) {
    ListeQuad* newElement = (ListeQuad*)malloc(sizeof(ListeQuad));
    if (newElement == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(-1);
    }

    newElement->quad = creerQuad(op, arg1, arg2, result);
    newElement->suiv = NULL;

    // If the list is empty, set the new element as the head
    if (*list == NULL) {
        *list = newElement;
    } else {
        // Traverse the list to find the last element
        ListeQuad* current = *list;
        while (current->suiv != NULL) {
            current = current->suiv;
        }

        // Add the new element to the end of the list
        current->suiv = newElement;
    }
}

// Function to print all quadruples in the linked list
void afficherListeQuad(const ListeQuad* list) {
    const ListeQuad* current = list;

    while (current != NULL) {
        printf("(%s, %s, %s, %s)\n", current->quad.op, current->quad.arg1, current->quad.arg2, current->quad.result);
        current = current->suiv;
    }
}

// Function to free memory allocated for the linked list
void libererListeQuad(ListeQuad** list) {
    ListeQuad* current = *list;
    while (current != NULL) {
        ListeQuad* next = current->suiv;
        free(current);
        current = next;
    }
    *list = NULL;
}


// Function to create a new quadruple

