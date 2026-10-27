// 1. Leia duas vari ´aveis do tipo float. Calcule e imprima, considerando 2 casas decimais:
// • a soma;
// • o produto entre os valores

#include <stdio.h>
int main(){
    float a, b, soma, produto;
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    
    soma = a+ b;
    produto = a*b;
    printf("Soma: %.2f\n", soma);
    printf("Produto: %.2f\n", produto);
    return 0;
}