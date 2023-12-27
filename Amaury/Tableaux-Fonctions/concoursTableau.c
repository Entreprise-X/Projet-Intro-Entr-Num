#include <stdio.h>
#define TAILLE 10

void afficherTableau(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", tab[i]);
    }
}

int main(void)
{
    int scores[TAILLE], i, scoreCent = 0, meilleurScore = 0, iTabCinqCent = 0, cinqCent[TAILLE];

    for (int iTabScores = 0; iTabScores < TAILLE; iTabScores++)
    {
        scores[iTabScores] = rand() % 1000;
    }

    afficherTableau(scores, TAILLE);

    for (i = 0; i < TAILLE; i++)
    {
        if (scores[i] == 100)
            scoreCent++;

        if (scores[i] > 500)
        {
            cinqCent[iTabCinqCent] = i + 1;
            iTabCinqCent++;
        }

        if (scores[i] > scores[meilleurScore])
            meilleurScore = i;
    }

    printf("Score 100 : %d\n", scoreCent);

    printf("Plus de 500\n");
    for (i = 0; i < iTabCinqCent; i++)
    {
        printf("%d\n", cinqCent[i]);
    }

    printf("Le meilleur : %d", meilleurScore + 1);
}