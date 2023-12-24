#include <stdio.h>

int main (void){

int age;

printf("Inserez votre age\n");
scanf_s("%d",&age);

if(age<6)
    printf("Trop jeune\n");
else{
    if (age<12)
        printf("Tarif : 100 euros");
    else{
        if (age<=18)
            printf("Tarif : 120 euros");
        else
            printf("Tarif : 160 euros");
    }
}

}