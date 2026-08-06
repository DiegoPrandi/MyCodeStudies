// Leia a base e a altura de um ret ˆangulo. Calcule e imprima, considerando 2 casas decimais:
// 1
// • a ´area;
// • o per´ımetro.
// ´area = base × altura
// per´ımetro = 2 × (base + altura)

#include <stdio.h>
int main(){

    float base, altura, area, perimetro;

    printf("Digite a base do retangulo: ");
    scanf("%f", base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", altura);

    area = base*altura;
    perimetro = 2 * (base + altura);

    printf("Area: %2.f", area);
    printf("Perimetro: %2.f", perimetro);

    return 0;
}