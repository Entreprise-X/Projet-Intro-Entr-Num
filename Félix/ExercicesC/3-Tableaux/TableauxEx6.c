#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main(void)//où qu’il est l’entier ?
{
    int integerTab[SIZE];
    int indiceTab[SIZE] = {0};
    int entier;
    int iIndiceTab = 0;

    for (int iIntegerTab = 0; iIntegerTab < SIZE; iIntegerTab++)
    {
        integerTab[iIntegerTab] = rand()%SIZE + 1;
        //pour vérifier, décommenter la ligne suivante
        //printf("(verification) indice %2d contient %2d \n", iIntegerTab, integerTab[iIntegerTab]);
    }
    printf("Entrez un entier entre 1 et %d: ", SIZE);
    scanf_s("%d", &entier);
    for (int iIntegerTab = 0; iIntegerTab < SIZE; iIntegerTab++)
    {
        if (integerTab[iIntegerTab] == entier)
        {
            indiceTab[iIndiceTab] = iIntegerTab;
            iIndiceTab++;
        }  
    }
    indiceTab[iIndiceTab] = -1; // nécessaire pour preuve de bon déroulement: -1 signale fin partie utile
    // preuve du bon déroulement
    for (int iIntegerTab = 0;(iIntegerTab < SIZE) && (indiceTab[iIntegerTab] != -1); iIntegerTab++)
    {
        printf("integerTab: indice %2d contient %2d\n", iIntegerTab, indiceTab[iIntegerTab]);
    }
    printf("Fini !");
}