// Fa c¸ a um programa que verifique e mostre os n ´umeros entre 500 e 1500 (inclusive) que, quando
// divididos por 9, produzem resto igual a 4.

#include <stdio.h>

int main(){
    for (int i=500;i<=1500;i++){
        if (i%9==4){
            printf("\n%d", i);
        }
    }
    return 0;
}