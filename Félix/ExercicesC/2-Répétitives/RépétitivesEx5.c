#include<stdio.h>

void main(void){
    double prix = 0.;
    int age;
    do
    {
        printf("Age du membre de la famille : ");
        scanf_s("%d", &age);
        getchar();
        if (age >= 65)  //senior
        {
            prix += 6.5;
        }
        else if (age >= 18) //adulte
        {
            prix += 7.5;
        }
        else if (age >= 12) //adolescent
        {
            prix += 4;
        }
    } while (age != 0);
    printf("Le prix total est : %.2lf euros", prix);
}