// Leia dois inteiros a e b. Imprima se s ˜ao iguais ou qual deles ´e o maio

#include <stdio.h>

int main(){
    int a,b;
    printf("Digita ai fi: ");
    scanf("%d", &a);

    printf("Digita ai fi: ");
    scanf("%d", &b);
    if (a>b){
        printf("O maior numero eh: %d", a);
    } else if (b>a){
        printf("O maior numero eh: %d", b);
    } else {
        printf("Os numeros sao iguais");
    }

    return 0;
}