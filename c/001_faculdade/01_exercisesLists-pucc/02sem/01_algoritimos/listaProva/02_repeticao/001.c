// m servic¸ o de streaming deseja analisar as avaliac¸ ˜oes dadas por um usu ´ario a uma s ´erie. Fa c¸ a
// um programa que leia a nota de 10 epis ´odios, variando de 0 a 10.
// Caso seja digitada uma nota fora desse intervalo, ela deve ser ignorada utilizando continue.
// Ao final, mostre:
// • a m ´edia das notas v ´alidas;
// • quantos epis ´odios receberam nota maior ou igual a 8.

#include <stdio.h>

int main(){
    int nota, notaValidas=0, notasMaiorQ8=0;
    float somaNotas=0, mediaNotas;
    for (int i=0; i<10;i++){

        printf("\nEPISODIO %d", i+1);
        printf("\nNOTA: ");
        scanf("%d", &nota);

        if (nota < 0 || nota > 10){
            continue;
        }

        notaValidas++;
        somaNotas += nota;

        if (nota >= 8){
            notasMaiorQ8++;
        }

    }
    mediaNotas = somaNotas/notaValidas;
    printf("\nMEDIA: %.2f", mediaNotas);
    printf("\nQTDE MAIOR QUE 8: %d", notasMaiorQ8);
    return 0;
}