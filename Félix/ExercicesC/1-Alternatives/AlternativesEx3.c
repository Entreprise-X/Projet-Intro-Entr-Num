#include<stdio.h>

void main(void){
    int age;
    printf("age ?");
    scanf_s("%d", &age);

    if(age < 6)
        printf("il faut 6 ans minimum pour s'inscrire");
    else if(age < 12)
        printf("100 euros");
    else if(age < 19)
        printf("120 euros");
    else
        printf("160 euros");
}