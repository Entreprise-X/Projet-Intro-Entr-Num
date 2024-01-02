#include <stdio.h>
#define SIZE 10

int main(void)//logiciels
{
    int tabSoftware[SIZE] = {0};
    int choice;
    int indiceMax = 0;
    printf("Entrez le numero du logiciel que vous voulez (de 1 a 10, -1 pour arreter) : ");
    scanf_s("%d", &choice);
    getchar();
    while(choice != -1){    //pourrait être remplacé par un do{...}while(...)
        printf("\n");
        tabSoftware[choice-1]++;
        printf("Entrez le numero du logiciel que vous voulez (de 1 a 10, -1 pour arreter) : ");
        scanf_s("%d", &choice);
        getchar();
    }
    for (int iTabSoftware = 0; iTabSoftware < SIZE; iTabSoftware++)
    {
        printf("Le logiciel %2d a ete demande %d fois.\n", iTabSoftware+1, tabSoftware[iTabSoftware]);
        if(tabSoftware[iTabSoftware] > tabSoftware[indiceMax]){
            indiceMax = iTabSoftware;
        }
    }
    printf("Logiciel le plus demande : %2d.", indiceMax+1);
}