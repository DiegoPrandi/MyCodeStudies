// Leia dois inteiros x1 e x2. Sabendo que o m ´odulo de um n ´umero x ´e definido como:
// |x| =
// (
// x, se x ≥ 0
// −x, se x < 0
// Calcule e imprima o m ´odulo da diferenc¸a entre os dois n ´umeros, ou seja, |x1 − x2|.
// Restric¸ ˜ao: fac¸a o m ´odulo sem biblioteca matem ´atica

#include <stdio.h>

int main(){
    int x1, x2, conta;
    prinf("Digite o valor de x1: ");
    scanf("%d", &x1);
    prinf("Digite o valor de x2: ");
    scanf("%d", &x2);

    if (x1 < 0){
        x1 -= x1;
    }

    if (x2 < 0){
        x2 -= x2;
    }

    conta = x1 - x2;
    if (conta <0){
        conta -= conta;
    }

    prinf("%d", &conta);

    return 0;
}