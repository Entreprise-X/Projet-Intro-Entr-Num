#include <stdio.h>

int main(void){
    int entier;

    do
    {
        printf("Entrez un entier : ");
        scanf_s("%d", &entier);
        getchar();
        if (entier > 0)
        {
            printf("Correct !");
        }
        else
        {
            printf("Erreur...\n");
        }
    } while (entier < 0);
}