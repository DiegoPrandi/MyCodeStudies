#include <stdio.h>

#define pi 3.14159
#define p 1000
#define g 9.81

void calcular(float r, float h, float *Alateral, float *P){
    *Alateral = 2*pi*r*h;
    *P = p*g*h;
}



int main(){
    float r, h, Alateral, P;

    printf("Digite o raio do reservatorio em metros: ");
    scanf("%f", &r);

    printf("Digite a altura da coluna de agua: ");
    scanf("%f", &h);

    calcular(r, h, &Alateral, &P);
    printf("%.2f - %.2f", Alateral, P);

    return 0;
}