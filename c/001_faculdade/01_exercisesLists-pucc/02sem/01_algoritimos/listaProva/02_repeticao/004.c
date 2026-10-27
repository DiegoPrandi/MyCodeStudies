// Um objeto ´e lanc¸ ado verticalmente e sua altura, em metros, ´e calculada a cada segundo pela
// express ˜ao:
// h = 40t − 5t2
// Fac¸ a um programa que calcule e mostre a altura do objeto para valores inteiros de tempo a
// partir de t = 0.
// Quando a altura calculada for menor ou igual a zero para um valor de t maior que zero, encerre
// o programa.

#include <stdio.h>
#include <math.h>

int main(){
    int t=0;

    while (1)
    {
        int h = 40*t - 5*pow(t,2);
        printf("%d\n", h);
        if (h<=0 && t>0){
            return 0;
        }
        t++;
    }
}