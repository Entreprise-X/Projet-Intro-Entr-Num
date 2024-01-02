#include <stdio.h>
#define SIZE 5000

int main(void)//concours
{
    int tabScores[SIZE];
    int indiceMax = 0;
    int countOver100 = 0;

    for (int iTabSscores = 0; iTabSscores < SIZE; iTabSscores++)
    {
        tabScores[iTabSscores] = rand()%550; 
    }

    for (int iTabSscores = 0; iTabSscores < SIZE; iTabSscores++)
    {
        if(tabScores[indiceMax] < tabScores [iTabSscores]){
            indiceMax = iTabSscores;
        }
        if(tabScores[iTabSscores] > 100){
            countOver100++;
        }
    }
    printf("Nombre de participants avec plus de 100 points : %d\n\n", countOver100);
    for (int iTabSscores = 0; iTabSscores < SIZE; iTabSscores++){
        if (tabScores[iTabSscores] > 500)
        {
            printf("Le participant numero %d a depasse le score de 500 points.\n", iTabSscores+1);
        }
    }
    printf("\nLe participant numero %d a le score le plus eleve du concours ! \n", indiceMax+1);
    printf("Fini !");
}