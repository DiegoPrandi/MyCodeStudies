// Leia uma vari ´avel inteira representando um tempo total em segundos. Calcule e imprima,
// considerando 2 casas decimais:
// • a quantidade de minutos;
// • os segundos restantes

#include <stdio.h>

int main(){
    int tempo, minutos, segundos;

    printf("Digite o tempo total em segundos: ");
    scanf("%d", &tempo);

    minutos = tempo / 60;
    segundos = tempo % 60;

    printf("Minutos: %d\n", minutos);
    printf("Segundos restantes: %d", segundos);

    return 0;

}