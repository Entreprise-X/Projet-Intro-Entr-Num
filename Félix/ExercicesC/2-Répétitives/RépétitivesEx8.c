#include <stdio.h>

int main(void){
    int id, place;
    int nbTees = 0;
    do
    {
        printf("Veuillez entrer le code du coureur : ");
        scanf_s("%d", &id);
        getchar();
        if (id == -1)
        {
        }
        else
        {
            printf("Pour le coureur ci-dessus, veuillez entrer sa place : ");
            scanf_s("%d", &place);
            getchar();
            if (place <= 2)
            {
                printf("Le coureur numero %d a gagne %d euros.\n", id, 400 - 100*(place-1));
            }
            else if (place <= 10)
            {
                printf("Le coureur numero %d a gagne %d euros.\n", id, 300 - 20*(place-2));
            }
            else
            {
                printf("Le coureur numero %d a gagne un T-shirt.\n", id);
                nbTees++;
            }
        }
    } while (id != -1);
    printf("Le nombre total de T-shirts est %d.\n", nbTees);
}