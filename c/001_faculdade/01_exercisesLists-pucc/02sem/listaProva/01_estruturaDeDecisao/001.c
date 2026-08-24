// 1. Uma empresa concede um b ˆonus anual aos funcion ´arios de acordo com o valor do sal ´ario:
// • sal ´ario de at ´e R$ 2000, 00: b ˆonus de 20%;
// • sal ´ario maior que R$ 2000, 00 e at ´e R$ 5000, 00: b ˆonus de 10%;
// • sal ´ario acima de R$ 5000, 00: b ˆonus de 5%.
// Fac¸a um programa que leia o sal ´ario de um funcion ´ario e calcule o valor do b ˆonus.
// Ao final, imprima:
// • o valor do b ˆonus recebido;
// • o sal ´ario final, considerando o b ˆonus.

#include <stdio.h>

int main(){
    float salario, bonus, salarioFinal;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    if (salario <= 2000.0){
        bonus = salario * 0.20;
    } 
    else if (salario<=5000.0){
        bonus = salario * 0.10;
    }
    else{
        bonus = salario * 0.05;
    }

    salarioFinal = salario + bonus;

    printf("\nBONUS RECEBIDO: %.2f", bonus );
    printf("\nSALARIO FINAL:  %.2f", salarioFinal);
    return 0;
}