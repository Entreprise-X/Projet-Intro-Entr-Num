#include <stdio.h>

int main (void){

double operande1, operande2;

printf("Inserez operande1\n");
scanf_s("%lf",&operande1);
printf("Inserez operande2\n");
scanf_s("%lf",&operande2);

if (operande1==0 || operande2==0)
    printf("Produit nul");
else
    if (operande1<0 && operande2<0 || operande1>0 && operande2>0)
        printf("Produit positif");
    else
        printf("Produit negatif");
    
}