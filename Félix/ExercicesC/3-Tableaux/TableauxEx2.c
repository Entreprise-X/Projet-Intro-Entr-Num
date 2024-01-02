#include <stdio.h>
#define SIZE 10

int main(void)//cotes
{
    int cotes[SIZE];
    double mean = 0;
    for (int iCotes = 0; iCotes < SIZE; iCotes++)
    {
        printf("Entrez la note (entiere) %d : ", iCotes+1);
        scanf_s("%d", &cotes[iCotes]);
        getchar();
        printf("\n");
    }
    for (int iCotes = 0; iCotes < SIZE; iCotes++)
    {
        printf("Note %d : %d", iCotes+1, cotes[iCotes]);
        printf("\n");
        mean += (double)cotes[iCotes];
    }
    mean /= SIZE;
    printf("La moyenne des notes est : %4.2lf", mean);
}