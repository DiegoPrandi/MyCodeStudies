// Fa c¸ a um programa que leia 10 n ´umeros inteiros e armazene-os em um vetor A. Em seguida,
// crie um segundo vetor B contendo os mesmos valores de A, por ´em em ordem inversa.
// Ao final, mostre os dois vetores.

#include <stdio.h>

int main(){
    int vetorA[10], vetorB[10];

    for (int i=0;i<10;i++){
        scanf("%d", &vetorA[i]);
    }

    for (int i=0;i<10;i++){
        vetorB[i] = vetorA[9-i];
    }

    printf("\nVETOR A: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", vetorA[i]);
    }

    printf("\nVETOR B: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", vetorB[i]);
    }
    return 0;
}