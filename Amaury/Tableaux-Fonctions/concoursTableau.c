#include <stdio.h>
#define TAILLE 10

void initialisation(int scores[])
{
    for (int iTabScores = 0; iTabScores < TAILLE; iTabScores++)
    {
        scores[iTabScores] = rand() % 1000;
    }
}

void afficherTableau(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", tab[i]);
    }
}

void afficherResultats(int cent, int cinq[], int i, int best)
{
    printf("Score 100 : %d\n", cent);

    printf("Plus de 500\n");
    afficherTableau(cinq, i);

    printf("Le meilleur : %d", best + 1);
}

void classement(int scores[])
{
    int i, scoreCent = 0, meilleurScore = 0, iTabCinqCent = 0, cinqCent[TAILLE];
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
    afficherResultats(scoreCent, cinqCent, iTabCinqCent, meilleurScore);
}

int main(void)
{
    int scores[TAILLE], i, scoreCent = 0, meilleurScore = 0, iTabCinqCent = 0, cinqCent[TAILLE];

    initialisation(scores);

    afficherTableau(scores, TAILLE);

    classement(scores);
}