#include <stdio.h>

int main (void){

int nbr1, nbr2, nbr3;

printf("Nombre 1 : ");
scanf_s("%d",&nbr1);

printf("Nombre 2 : ");
scanf_s("%d",&nbr2);

printf("Somme : ");
scanf_s("%d",&nbr3);

if(nbr3==(nbr1+nbr2))
    printf("Correct !");
else
    printf("Incorrect, vous auriez du repondre %d", nbr1+nbr2);

}