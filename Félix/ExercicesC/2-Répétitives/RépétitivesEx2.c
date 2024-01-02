#include <stdio.h>

void main(void){
	int entier;
	printf("Veuillez entrer un entier : ");
	scanf_s("%d", &entier);
	printf("Nombre: %d\n", entier);
	for (int i = 1; i < 11; i++)
	{
		printf("%2d x %2d = %3d\n", i, entier, (i*entier));
	}
}