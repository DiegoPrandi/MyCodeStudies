// Desafio: Uma empresa deseja controlar o estoque de 10 produtos. Utilize dois vetores:
// • um vetor inteiro para armazenar o c ´odigo de cada produto;
// • outro vetor inteiro para armazenar a quantidade dispon´ıvel em estoque de cada produto.
// Depois do cadastro inicial, o programa dever ´a processar uma quantidade indeterminada de
// pedidos. Para cada pedido, leia:
// • o c ´odigo do cliente;
// 5
// • o c ´odigo do produto desejado;
// • a quantidade solicitada.
// O processamento dos pedidos termina quando for informado c ´odigo de cliente igual a 0. Para
// os demais pedidos, o programa dever ´a:
// • procurar o c ´odigo do produto no vetor. Caso n ˜ao exista, mostrar C´odigo inexistente;
// • caso o produto exista, verificar se h ´a quantidade suficiente para atender integralmente ao
// pedido;
// • se n ˜ao houver estoque suficiente, mostrar N~ao temos estoque suficiente desta
// mercadoria;
// • se houver estoque suficiente, retirar a quantidade solicitada do estoque e mostrar Pedido
// atendido. Obrigado e volte sempre.
// O estoque s ´o deve ser alterado quando o pedido puder ser atendido integralmente.
// Ao final do programa, mostre os c ´odigos dos 10 produtos e seus respectivos estoques atualiza-
// dos.

#include <stdio.h>

int main(){
    int vetorCodigoProduto[10] = {1,2,3,4,5,6,7,8,9,10},
    vetorQtdeEstoque[10] = {10,20,30,40,50,60,70,80,90,100},
    codigoCliente, codigoProduto, qtdeSolicitada, encontrado=0;

    while(1){
        printf("CODIGO CLIENTE | CODIGO PRODUTO | QTDE Q QUER:  ");
        scanf("%d %d %d", &codigoCliente, &codigoProduto, &qtdeSolicitada);

        if (codigoCliente==0){
            break;
        }

        encontrado = 0;

        for (int i=0;i<10;i++){
            if (vetorCodigoProduto[i]==codigoProduto){

                encontrado = 1; 

                if (qtdeSolicitada > vetorQtdeEstoque[i]){
                    printf("Naao temos estoque suficiente desta mercadoria;");
                }
                else{
                    vetorQtdeEstoque[i] -= qtdeSolicitada;
                }
            }
        }

        if (encontrado == 0){
            printf("Codigo inexistente");
        }
    }
    return 0;
}