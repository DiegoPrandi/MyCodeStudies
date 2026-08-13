// Extra/Desafio: Implementar um programa em C que receba cinco n ´umeros reais
// x1, x2, x3, x4, x5 e mostre:
// • (1) a m ´edia;
// • (2) o desvio padr ˜ao do conjunto;
// • (3) a quantidade de n ´umeros (dentre os cinco) que est ˜ao acima da m ´edia.
// Restric¸ ˜ao: n ˜ao usar arranjos (vetores) e n ˜ao usar estruturas de repetic¸ ˜ao.
// Use as f ´ormulas:
// ¯x = x1 + x2 + x3 + x4 + x5
// 5
// σ =
// r (x1 − ¯x)2 + (x2 − ¯x)2 + (x3 − ¯x)2 + (x4 − ¯x)2 + (x5 − ¯x)2
// 5

#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, x3, x4, x5, media, desvioPadrao;
    int qtdeAcimaDaMedia=0;

    printf("digita o x1: ");
    scanf("%f", &x1);

    printf("digita o x2: ");
    scanf("%f", &x2);

    printf("digita o x3: ");
    scanf("%f", &x3);

    printf("digita o x4: ");
    scanf("%f", &x4);

    printf("digita o x5: ");
    scanf("%f", &x5);

    media = (x1+ x2+x3+x4+x5)/5;

    desvioPadrao= sqrt((pow(x1-media,2)+pow(x2-media,2)+pow(x3-media,2)+pow(x4-media,2)+pow(x5-media,2))/5);

    if (x1 > media){
        qtdeAcimaDaMedia++;
    }  
    if (x2 > media){
        qtdeAcimaDaMedia++;
    }  
    if (x3 > media){
        qtdeAcimaDaMedia++;
    } 
    if (x4 > media){    
        qtdeAcimaDaMedia++;
    } 
    if (x5 > media){
        qtdeAcimaDaMedia++;
    }
    printf("MEDIA: %2.f\n", media);
    printf("DESVIO PADRAO: %.2f\n", desvioPadrao);
    printf("QTDE ACIMA DE MEDIA: %d", qtdeAcimaDaMedia);

    

    return 0;
}