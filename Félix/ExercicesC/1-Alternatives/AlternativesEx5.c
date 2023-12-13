#include<stdio.h>

void main(void){
    int entier;
    printf("Nombre : ");
    scanf_s("%d", &entier);
    if(entier > 0)
        printf("Correct !");
    else
        printf("Erreur...");
}