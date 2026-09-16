#include <stdio.h>
#include <string.h>


struct tipo_instituicao {
    char nome[30];
    char tipo[20];
};

struct tipo_investimento {
    char nome[30];
    float valor_aplicado;
    float taxa_rendimento;
    struct tipo_instituicao instituicao;
    float rendimentos[3];
} Investimentos[4] = {
    {"Tesouro Selic", 1500.00, 13.25, {"Banco Federal", "Banco"},
    {14.50, 15.20, 14.80}},
    {"CDB Premium", 3200.50, 12.10, {"InvestMais", "Corretora"},
    {30.10, 31.50, 29.90}},
    {"LCI Azul", 2800.75, 10.80, {"Banco Azul", "Banco"},
    {22.40, 21.80, 23.10}},
    {"Fundo Alpha", 5000.00, 14.50, {"Alpha Invest", "Gestora"},
    {48.00, 50.25, 47.90}}
};

float media_aplicacoes(){
    int i;
    float soma=0;
    for (i=0;i<4;i++){
        soma += Investimentos[i].valor_aplicado;
    }
    return soma/4;
}

int num_tipo_instituicao(char tipo[20]){
    int cont=0;
    for (int i=0;i<4;i++){
        if (strcmp(Investimentos[i].instituicao.tipo,tipo)==0){
            cont++;
        }
    }
    return cont;
}

int conta_investimentos_letra(char letra){
    int cont=0;
    for (int i=0;i<4;i++){
        if (Investimentos[i].nome[0] == letra){
            cont++;
        }
    }
    return cont;
}

float soma_rendimentos(char nome[30]){
    float soma=0;
    for (int i=0;i<4;i++){
        if (strcmp(Investimentos[i].nome, nome)==0){
            for (int j=0;j<3;j++){
                soma += Investimentos[i].rendimentos[j];
            }
            return soma;
        }
    }
    return -1;
}