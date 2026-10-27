// Fac¸ a um programa que leia tr ˆes valores, A, B e C, representando os lados de um poss´ıvel
// tri ˆangulo.
// Para que os tr ˆes valores formem um tri ˆangulo, as seguintes condic¸ ˜oes devem ser satisfeitas:
// A < B + C, B < A + C, C < A + B
// Verifique se os valores formam um tri ˆangulo. Caso formem, classifique-o como:
// • Equil ´atero: os tr ˆes lados s ˜ao iguais;
// • Is ´osceles: apenas dois lados s ˜ao iguais;
// • Escaleno: os tr ˆes lados s ˜ao diferentes.
// Caso os valores n ˜ao formem um tri ˆangulo, imprima NAO FORMA TRIANGULO.

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digite o valor de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a<b+c) && (b<a+c) && (c<a+b)){
        if ((a==b) && (b==c)){
            printf("Equilatero");
        }
        else if ((a==b) || (b==c) || (c==a)){
            printf("Isosceles");
        } 
        else {
            printf("Escaleno");
        }
    } else{
        printf("NAO FORMA TRIANGULO.");
    }
    return 0;
}