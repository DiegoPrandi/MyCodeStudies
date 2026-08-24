// Um cinema deseja analisar a durac¸ ˜ao, em minutos, de 15 filmes, utilizando uma tabela de faixas
// de durac¸ ˜ao.
// Faixa Durac¸ ˜ao
// A At ´e 90 min
// B De 91 a 120 min
// C De 121 a 150 min
// D Acima de 150 min
// Fac¸a um programa que receba essas durac¸ ˜oes e calcule e mostre:
// • a quantidade de filmes em cada faixa;
// • a porcentagem de filmes da primeira e da ´ultima faixa, em relac¸ ˜ao ao total.

#include <stdio.h>

int main(){
    int duracao, faixaA=0, faixaB=0, faixaC=0, faixaD=0;
    float porcentagemA, porcentagemD;

    for (int i=0;i<15;i++){
        printf("\nDURACAO FILME %d: ", i+1);
        scanf("%d", &duracao);
        if (duracao<=90){
            faixaA++;
        } 
        else if (duracao<=120){
            faixaB++;
        }
        else if (duracao<=150){
            faixaC++;
        }
        else{
            faixaD++;
        }
    }
    porcentagemA = (faixaA/15.0)*100;
    porcentagemD = (faixaD/15.0)*100;

    printf("\nQTDE FILMES FAIXA A: %d", faixaA);
    printf("\nQTDE FILMES FAIXA B: %d", faixaB);
    printf("\nQTDE FILMES FAIXA C: %d", faixaC);
    printf("\nQTDE FILMES FAIXA D: %d", faixaD);
    printf("\nPorcentagem faixa A: %.2f%%\n", porcentagemA);
    printf("Porcentagem faixa D: %.2f%%\n", porcentagemD);


    return 0;
}