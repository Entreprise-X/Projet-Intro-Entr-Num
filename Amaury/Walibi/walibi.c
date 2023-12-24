#include <stdio.h>

int main (void){

int taille, tailleMin, tailleMax;

tailleMin=100;
tailleMax=200;

printf("Inserez votre taille en cm\n");
scanf_s("%d",&taille);

if(taille<tailleMin)
    printf("Acces refuse : taille trop petite");
else
    if (taille>tailleMax)
        printf("Accès refuse : taille trop grande");
    else
        printf("Accès autorise");
    
}