// Um estudo sobre sensibilidade `a temperatura da ´agua identificou que a maioria das pessoas
// considera:
// • fria a ´agua com temperatura abaixo de 25◦C;
// • morna a ´agua entre 25◦C e 30◦C;
// • quente a ´agua acima de 30◦C.
// Leia a temperatura (float) e imprima fria, morna ou quente

#include <stdio.h>

int main(){
    float temperatura;

    prinf("Digite a temperatura em GRAUS: ");
    scanf("%f", &temperatura);


    if (temperatura < 25){
        printf("FRIA");
    } else if (temperatura <= 30){
        printf("MORNA");
    } else {
        printf("QUENTE");
    }


    return 0;
}