// Leia a altura h (em metros) e o sexo (H para homem, M para mulher). Calcule e imprima o peso
// ideal usando:
// Homem: P = 72.7 · h − 58.0
// Mulher: P = 62.1 · h − 44.7
// Se o sexo informado n ˜ao for H ou M, imprima uma mensagem de erro. O c ´odigo deve ser
// case-insensitive (aceitar tamb ´em h para homem e m para mulher)

#include <stdio.h>

int main(){
    float h, pesoIdeal;
    char sexo;

    printf("Digite a altura: ");
    scanf("%f", &h);

    printf("Digite o sexo (H ou M): ");
    scanf(" %c", &sexo);

    if (sexo == 'H' || sexo == 'h') {
        pesoIdeal = 72.7 * h - 58.0;
        printf("O peso ideal HOMEM: %.2f kg", &pesoIdeal);
    } else if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = 62.1 * h - 44.7;
        printf("O peso ideal MULHER: %.2f kg", &pesoIdeal);
    } else {
        printf("digita certo fi");
    }

    return 0;
}