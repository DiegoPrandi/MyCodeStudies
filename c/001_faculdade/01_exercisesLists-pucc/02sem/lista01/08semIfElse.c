// Leia duas vari ´aveis inteiras:
// • valor pago pelo cliente;
// • valor do produto.
// Calcule o troco e determine a quantidade de:
// • notas de 50;
// • notas de 20;
// • notas de 10;
// • notas de 5;
// • notas de 2;
// • moedas de 1.
// Restric¸ ˜ao: utilize apenas operac¸ ˜oes aritm ´eticas (/ e %), sem estruturas condicionais(if, else).
// Dica: ap ´os calcular cada quantidade de notas, atualize o valor restante do troco

#include <stdio.h>
int main(){
    int valorPago, valorProduto;

    printf("valor pago: ");
    scanf("%d", &valorPago);

    printf("valor produto: ");
    scanf("%d", &valorProduto);

    int troco = valorPago - valorProduto;

    int notas50 = troco / 50;
    troco %= 50;
    int notas20 = troco / 20;
    troco %= 20;
    int notas10 = troco / 10;
    troco %= 10;
    int notas5 = troco / 5;
    troco %= 5;
    int notas2 = troco / 2;
    troco %= 2;
    int moedas1 = troco;

    printf("Troco: %d\n", valorPago - valorProduto);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Moedas de 1: %d\n", moedas1);
    
    return 0;

}