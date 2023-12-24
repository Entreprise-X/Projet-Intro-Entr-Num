#include <stdio.h>

int main(void)
{

    int nbr;

    printf("Nombre : ");
    scanf_s("%d", &nbr);

    if (nbr > 0)
        printf("Correct !");
    else
        printf("Erreur...");
}