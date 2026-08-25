// Fa c¸ a um programa que leia 12 n ´umeros inteiros e armazene-os em um vetor A. Em seguida,
// crie um segundo vetor B contendo apenas os n ´umeros pares encontrados em A, mantendo a
// ordem em que eles foram digitados.
// Ao final, mostre:
// • os elementos armazenados no vetor B;
// • a quantidade de elementos armazenados em B.

#include <stdio.h>

int main(){
    int vetorA[12], vetorB[12], qtdePares=0;
    for (int i=0;i<12;i++){
        scanf("%d", &vetorA[i]);
    }

    for (int i=0;i<12;i++){
        if (vetorA[i]%2 == 0){
            vetorB[qtdePares] = vetorA[i];
            qtdePares++;
        }
    }

    printf("VETOR B: ");
    for (int i=0;i<qtdePares;i++){
        printf("%d ", vetorB[i]);
    }
    printf("\nQTDE ELEMENTOS EM B: %d", qtdePares);
    return 0;
}