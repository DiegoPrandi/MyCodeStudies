// Leia tr ˆes vari ´aveis do tipo float representando notas de um aluno, considerando peso 1, 2 e
// 3, respectivamente. Calcule a m ´edia ponderada e imprima o resultado considerando 2 casas
// decimais.

#include <stdio.h>

int main(){
    float a, b, c, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &a);

    printf("Digite a segunda nota: ");
    scanf("%f", &b);

    printf("Digite a terceria nota: ");
    scanf("%f", &c);

    media = (a*1 + b*2 + c*3) / 6;
    printf("A media final é: %.2f", media);

    return 0;
}