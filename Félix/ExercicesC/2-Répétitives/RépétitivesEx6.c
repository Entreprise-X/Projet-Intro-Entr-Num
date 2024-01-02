#include<stdio.h>

void main(void){
    int age;
    int ageMin;
    int ageMax;

    do
    {
        printf("Entrez l'age d'un etudiant (0 pour arreter) : ");
        scanf_s("%d", &age);
        getchar();
        if (age < ageMin && age != 0)
        {
            ageMin = age;
        }
        else if (age > ageMax)
        {
            ageMax = age;
        }
    } while (age != 0);
    printf("L'age de l'etudiant le plus jeune : %d\n", ageMin);
    printf("L'age de l'etudiant le plus vieux : %d", ageMax);
}