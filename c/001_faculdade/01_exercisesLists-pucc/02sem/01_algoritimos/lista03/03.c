#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, discriminate;

    printf("Digite o valor A: ");
    scanf("%f", &a);
    
    printf("Digite o valor B: ");
    scanf("%f", &b);

    printf("Digite o valor C: ");
    scanf("%f", &c);

    if(a==0){
        printf("NAO E EXPRESSAO DO SEGUNDO GRAU");
        return 0;
    } else

    (a > 0) ? printf("\nCONCAVIDADE PARA CIMA") : printf("\nCONCAVIDADE PARA BAIXO");

    discriminate = pow(b, 2) - 4*a*c;

    if (discriminate==0){
        printf("\nPOSSUI UMA RAIZ REAL");
    } else if (discriminate>0){
        printf("\nPOSSUI DUAS RAIZES REAIS");
    } else{
        printf("\nNAO POSSUI RAIZES REAIS");
    }

    printf("\nVALOR DO DISCRIMINANTE: %f", discriminate);

    return 0;
}