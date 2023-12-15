#include<stdio.h>
#include<stdlib.h>

typedef union Uni {
    int entier;
    float reel;
}Uni;

int main() {
    Uni val;
    val.entier = 1;
    printf("%d\n", val.entier);
    val.reel = 2.5;
    printf("%2f\n", val.reel);
    if(val.entier )
    printf("%d\n", val.entier);
    printf("%2f\n", val.reel);


}