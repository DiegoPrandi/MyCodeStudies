// Leia duas vari ´aveis do tipo float:
// • uma representando a dist ˆancia percorrida (em km);
// • outra representando o tempo gasto (em horas).
// Calcule e imprima considerando 1 casa decimal a velocidade m ´edia do percurso em (km/h) e
// em (m/s).
// Dica: v=d/t e 1 m/s = 3,6 km/h.

#include <stdio.h>
int main(){
    float distancia, tempo, velocidadeKM, velocidadeMS;
    printf("Digite a distancia percorrida (KM/h): ");
    scanf("%f", &distancia);

    printf("Digite o tempo gasto (HROAS): ");
    scanf("%f", &tempo);

    velocidadeKM = distancia / tempo;
    velocidadeMS = velocidadeKM / 3.6;

    printf("Velocidade média em KM: %.2f\n", velocidadeKM);
    printf("Velocidade média em KM: %.2f", velocidadeMS);
    return 0;

}