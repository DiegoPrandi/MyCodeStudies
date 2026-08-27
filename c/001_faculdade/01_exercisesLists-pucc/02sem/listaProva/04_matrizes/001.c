// Fa c¸ a um programa que leia n ´umeros inteiros e preencha uma matriz de ordem 4 × 6. Ao final,
// calcule e mostre a quantidade de elementos cujos valores pertencem ao intervalo de 18 a 30,
// inclusive.
// Os valores 18 e 30 tamb ´em devem ser considerados na contagem.

#include <stdio.h>

int main(){
    int matriz[4][6], qtde=0;

    for (int i=0;i<4;i++){
        for (int j=0;j<6;j++){

            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] >= 18 && matriz[i][j] <= 30){
                qtde++;
            }
        }
    }

    printf("Quantidade: %d", qtde);

    return 0;
}