// Uma loja vende caixas de bombons por R$ 12.00 cada no varejo. Para compras de 10 caixas
// ou mais, ´e aplicado o prec¸ o de atacado de R$ 9.50 por caixa. Leia a quantidade de caixas
// compradas e imprima o valor total da compra.

#include <stdio.h>;

int main(){
    float preco=12.0, precoFinal;
    int qtde;

    printf("Digite a quantidade: ");
    scanf("%d", &qtde);

    if (qtde >= 10){
        preco = 9.50;
    }
    precoFinal = preco * qtde;
    printf("PRECO FINAL: %f", &precoFinal);
    return 0;
}