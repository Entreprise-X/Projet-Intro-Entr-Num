#include<stdio.h>

void main(void){
    int entier1, entier2, entier3;
    printf("Nombre 1: ");
    scanf_s("%d",&entier1);
    printf("Nombre 2: ");
    scanf_s("%d",&entier2);
    printf("Nombre 3: ");
    scanf_s("%d",&entier3);
    if(entier3 != (entier1 + entier2)){
        printf("Incorrect, vous auriez du repondre %d !", (entier1+entier2));
    }
    else{
        printf("Correct !");
    }
}