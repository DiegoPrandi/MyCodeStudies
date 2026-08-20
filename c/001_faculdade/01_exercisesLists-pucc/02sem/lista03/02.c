#include <stdio.h>

int main(){
    float anguloA, anguloB, anguloC;

    printf("Digite o angulo A: ");
    scanf("%f", &anguloA);
    
    printf("Digite o angulo B: ");
    scanf("%f", &anguloB);

    printf("Digite o angulo C: ");
    scanf("%f", &anguloC);

    if (anguloA > 0 && anguloB > 0 && anguloC > 0 && anguloA+anguloA+anguloC==180){
        printf("Pode ser trinagulo");
    } else{
        printf("Nao pode");
    }
    return 0;
}