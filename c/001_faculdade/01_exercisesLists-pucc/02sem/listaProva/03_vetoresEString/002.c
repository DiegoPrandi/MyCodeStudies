// Fac¸a um programa que leia dois vetores inteiros, A e B, cada um com 5 posic¸ ˜oes.
// Em seguida, utilize um lac¸ o for para realizar as seguintes opera c¸ ˜oes: subtraia o primeiro
// elemento de A do ´ultimo de B e acumule o valor em uma vari ´avel. Em seguida subtraia o
// 2
// segundo elemento de A do pen ´ultimo de B, e acumule (some) com o resultado anterior, e assim
// por diante. Ao final, mostre o valor total acumulado das somas:
// (B[4] − A[0]) + (B[3] − A[1]) + (B[2] − A[2]) + (B[1] − A[3]) + (B[0] − A[4]).

#include <stdio.h>

int main(){
    int a[5], b[5], soma=0;

    for (int i = 0; i < 5; i++){
    scanf("%d %d", &a[i], &b[i]);
    }

    for (int i = 0; i < 5; i++){
        soma += b[4 - i] - a[i];
    }

    printf("TOTAL: %d", soma);
    return 0;
}