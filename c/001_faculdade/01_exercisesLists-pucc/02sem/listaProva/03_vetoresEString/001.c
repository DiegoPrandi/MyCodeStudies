// Fac¸a um programa que leia 7 n ´umeros inteiros e armazene-os em um vetor. Depois, mostre:
// • os n ´umeros que s ˜ao m ´ultiplos de 2;
// • os n ´umeros que s ˜ao m ´ultiplos de 3;
// • os n ´umeros que s ˜ao m ´ultiplos simultaneamente de 2 e de 3.
// Um mesmo n ´umero pode aparecer em mais de uma das categorias.

#include <stdio.h>

int main(){

    int v[7];

    for (int i = 0; i < 7; i++){
        scanf("%d", &v[i]);
    }

    printf("\nMultiplos de 2:");
    for (int i = 0; i < 7; i++){
        if (v[i] % 2 == 0){
            printf(" %d", v[i]);
        }
    }

    printf("\nMultiplos de 3:");
    for (int i = 0; i < 7; i++){
        if (v[i] % 3 == 0){
            printf(" %d", v[i]);
        }
    }

    printf("\nMultiplos de 2 e 3:");
    for (int i = 0; i < 7; i++){
        if (v[i] % 2 == 0 && v[i] % 3 == 0){
            printf(" %d", v[i]);
        }
    }

    return 0;
}