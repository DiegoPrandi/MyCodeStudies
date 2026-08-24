// Fac¸a um programa que leia um valor n, inteiro e positivo, calcule e mostre a seguinte soma:
// S = 1 + 1
// 2 + 1
// 3 + 1
// 4 + · · · + 1
// n

#include <stdio.h>

int main(){
    int n, soma=0;

    scanf("%d", &n);
    if (n<0){
        printf("Digite um num positivo.");
        return 0;
    }
    for (int i=1;i<=n;i++){
        soma+=i;
    }
    printf("%d", soma);
    return 0;
}