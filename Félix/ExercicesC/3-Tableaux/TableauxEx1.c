#include <stdio.h>
#define SIZE1 20
#define SIZE2 20
#define SIZE3 100
#define SIZE4 100
#define SIZE5 20

int main(void)//drill
{
    printf("premier point de l'exercice: \n");
    {
        int tab[SIZE1];
        for (int iTab = 0; iTab < SIZE1; iTab++)
        {
            tab[iTab] = iTab+1; 
        }
        for (int iTab = 0; iTab < SIZE1; iTab++)
        {
            printf("%d ", tab[iTab]);
        }
    }     
    printf("\n\ndeuxieme point de l'exercice: \n");
    {
        int tab[SIZE2];
        for (int iTab = 0, j = 9; iTab < SIZE2; iTab++)
        {
            if(iTab < 10)
                tab[iTab] = iTab+1;
            else
            {
                tab[iTab] = j;
                j--;
            }
        }
        for (int iTab = 0; iTab < SIZE2; iTab++)
        {
            if (iTab != 19){
                printf("%d,", tab[iTab]); 
            } 
            else{
                printf("%d", tab[iTab]);
            }
        }
    }
    printf("\n\ntroisieme point de l'exercice: \n");
    {
        int tab[SIZE3];
        for (int iTab = 0; iTab < SIZE3; iTab++)
        {
            tab[iTab] = rand()%100 + 1;
        }
        for (int iTab = 0; iTab < SIZE3; iTab++)
        {
            if (tab[iTab]%2==0){
                printf("%d ", tab[iTab]);
            }   
        }
    }
    printf("\n\nquatrieme point de l'exercice: \n");
    {
        int tab[SIZE4] = {5};
        for (int iTab = 1; iTab < SIZE4; iTab++)
        {
            tab[iTab] = 2*tab[iTab-1];
        }
        for (int iTab = 0; iTab < SIZE4; iTab++)
        {
            printf("%d ", tab[iTab]);
        }
    }
    printf("\n\ncinquieme point de l'exercice: \n");
    {
        int tab[SIZE5];
        int entier;
        for (int iTab = 0; iTab < SIZE5; iTab++)
        {
            tab[iTab] = rand()%20 + 1;
        }
        printf("Entrez un entier : ");
        scanf_s("%d", &entier);
        int iTab;
        for (iTab = 0; iTab < SIZE5; iTab++)
        {
            if(tab[iTab] == entier){
                printf("Le premier entier %d dans le tableau est situe a l'indice %d.", entier, iTab);
                iTab=21;
            }
        }
        if (iTab == SIZE5)
        {
            printf("-1 ");
        }
    }
    printf("\n\nFini !");
}