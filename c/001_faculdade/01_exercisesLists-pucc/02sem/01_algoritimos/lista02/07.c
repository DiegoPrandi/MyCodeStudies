// Leia:
// • o n ´umero de lados n (inteiro);
// • a medida do lado l (em cm, float).
// Calcule e imprima:
// • se n = 3, escrever TRIANGULO e a ´area;
// • se n = 4, escrever QUADRADO e a ´area;
// • se n = 5, escrever PENTAGONO.
// Use as f ´ormulas:
// ´Area do quadrado = l2
// ´Area do tri ˆangulo equil ´atero =
// √3
// 4 l2
// Observac¸ ˜ao: se n for diferente de 3, 4 ou 5, mostre mensagem de erro.

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float l, area;

    printf("Digite o numero de lados: ");
    scanf("%d", &n);

    if (n !=3 && n!=4 && n!=5){
        printf("Digita certo seu paiaço");
        return 0;
    }

    printf("Digite a medida dos lados (EM CM): ");
    scanf("%f", &l);

    switch(n){
        case 3:
            printf("TRIANGULO\n");
            area = (sqrt(3)/4)*pow(l,2);
            printf("AREA: %.2f", area);
            break;
        case 4:
            printf("QUADRADO\n");
            area = pow(l,2);
            printf("AREA: %.2f", area);
            break;
        case 5:
            printf("PENTAGONO");
            break;
    }
    return 0;
    
}