#include <stdio.h>

int main(void){
    int n;
    printf("Veuiller entrer un entier positif : ");
    scanf_s("%d", &n);
    printf("Nombre : %d\n", n);
    printf("Nombres pairs	 Carres\n");
    for (int i = 2; i <= n; i+=2)
    {
        printf("%-18d %-36d\n", i, i*i);
    }
}