// 1. Uma loja registra 20 vendas. Para cada venda, informe:
// • o valor total das vendas;
// • o maior valor vendido;
// • quantas vendas foram superiores a R$ 500.

#include <stdio.h>

int main(){
    float valorVenda, valorTotal=0, maiorVenda=0;
    int qtdeVendas=0;

    for (int i=0; i<2;i++){

        printf("Digite o valor da venda: ");
        scanf("%f", &valorVenda);

        valorTotal += valorVenda;
        if (valorVenda > maiorVenda){
            maiorVenda = valorVenda;
        }

        if (valorVenda > 500){
            qtdeVendas++;
        }
    }

    printf("\nVALOR TOTAL VENDAS: %.2f", valorTotal);
    printf("\nMAIOR VALOR: %.2f", maiorVenda);
    printf("\nQTDE VENDAS: %d", qtdeVendas);
}