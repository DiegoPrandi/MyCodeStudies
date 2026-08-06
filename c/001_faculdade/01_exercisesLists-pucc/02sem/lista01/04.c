// Leia uma temperatura em celsius. Calcule a temperatura correspondente em Fahrenheit
// utilizando a f ´ormula:

#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = 9/5 * celsius+32;
    printf("Em Fahrenheit: %.2f", fahrenheit);

    return 0;
}