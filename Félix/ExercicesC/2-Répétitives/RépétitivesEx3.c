#include<stdio.h>
#define FACTEUR_MAX 10  //jusqu'ou va la table
#define entierDebut 5   //compris
#define entierFin 7 //compris et >entierDebut

void main(void){
    for (int entierCourant = entierDebut; entierCourant <= entierFin; entierCourant++)
	{
        for (int iTable = 1; iTable <= FACTEUR_MAX; iTable++)
        {
            printf("%2d x %d = %d\n", iTable, entierCourant, (iTable*entierCourant));
        }
        printf("----------------------- \n");
	}
}