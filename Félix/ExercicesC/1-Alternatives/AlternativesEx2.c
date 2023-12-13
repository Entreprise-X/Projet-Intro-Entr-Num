#include <stdio.h>

void main (void){

double real1, real2;

printf("Operande 1: ");
scanf_s("%lf", &real1);
printf("Operande 1: ");
scanf_s("%lf", &real2);

if ((real1 > 0 && real2 > 0) || (real1 < 0 && real2 < 0)) {
	printf("signe du produit: positif");
}
else{
	printf("signe du produit: négatif");
}
}