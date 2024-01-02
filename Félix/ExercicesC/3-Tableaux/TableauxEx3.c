#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main(void)//le plus petit
{
    double tabDouble[SIZE];
    int indiceMin = 0;
    double f = 100.;

    for (int iTab = 0; iTab < SIZE; iTab++)
    {
        tabDouble[iTab] = (double)rand()/(double)(RAND_MAX) * f;  //sert juste à générer des valeurs aléatoires
        //printf("(verification) %2d contient %6.3lf. \n", iTab, tabDouble[iTab]);  //à décommenter pour vérifier
    }
    for (int iTab = 1; iTab < SIZE; iTab++)
    {
        if (tabDouble[indiceMin] > tabDouble[iTab])
        {
            indiceMin = iTab;
        }
    }
    printf("La valeur la plus petite est %lf situe a l'indice %d du tableau.", tabDouble[indiceMin], indiceMin);
}