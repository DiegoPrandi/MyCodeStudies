// eia o dividendo e divisor de uma frac¸ ˜ao. Calcule e imprima:
// • o quociente da divis ˜ao inteira;
// • o resto da divis ˜ao

#include <stdio.h>

int main(){
    int dividendo, divisor, quociente, resto;

    printf("Digite o dividendo da divisao: ");
    scanf("%f", &dividendo);

    printf("Digite o divisor da divisao: ");
    scanf("%f", &divisor);

    if (divisor == 0){
        printf("Divisao nao por der feiro por 0");
    } else{
        quociente = dividendo/divisor;
        resto = dividendo % divisor;
    }

    printf("Quociente: %d\n", quociente);
    printf("Resto: %d", resto);

    return 0;
}