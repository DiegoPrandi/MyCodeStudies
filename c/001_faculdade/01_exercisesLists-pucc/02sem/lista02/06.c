// Leia dois n ´umeros reais x e y e, em seguida, leia um inteiro op.
// • Se op == 1, some: x + y;
// • Se op == 2, subtraia: x − y;
// • Se op == 3, multiplique: x · y;
// • Se op == 4, divida: x/y.
// Mostre mensagem de erro se op n ˜ao estiver entre 1 e 4 e caso a divis ˜ao n ˜ao seja poss´ıvel
// (denominador igual a zero).

#include <stdio.h>;

int main(){
    int op;
    float x, y, resultado;

    printf("digita o primeiro numero: ");
    scanf("%f", &x);
    printf("digita o segundo numero: ");
    scanf("%f", &y);
    printf("digita a operacao\n: ");
    printf("1 - ADICAO\n2 - SUBTRACAO\n3 - MULTIPLICAÇÃO\n4 - DIVISÃO");
    scanf("%d", &op);

    switch(op) {
        case 1:
            resultado = x + y;
            printf("resultado: %.2f", resultado);
            break;
        case 2:
            resultado = x - y;
            printf("resultado: %.2f", resultado);
            break;
        case 3:
            resultado = x * y;
            printf("resultado: %.2f", resultado);
            break;
        case 4:
            if(y != 0) {
                resultado = x / y;
                printf("resultado: %.2f", resultado);
            } else {
                printf("divisao por zero pode nao fi");
            }
            break;
        default:
            printf("digita a uma opercao certa");
    }

    return 0;
}