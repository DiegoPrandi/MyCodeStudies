// Fac¸a um programa que leia uma frase. Determine:
// • a quantidade de vogais da frase;
// • a quantidade de espac¸os;
// • o tamanho da string;

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char frase[100];
    int qtdeVogais=0, qtdeEspacos=0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    for (int i=0;frase[i]!='\0';i++){
        frase[i]= tolower(frase[i]);
    }

    for (int i=0;frase[i]!='\0';i++){
        if (frase[i]==' '){
            qtdeEspacos++;
        }
        if (frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u'){
            qtdeVogais++;
        }
    }

    printf("\nQTDE VOGAIS: %d", qtdeVogais);
    printf("\nQTDE ESPACOS: %d", qtdeEspacos);
    printf("\nTAMANHO: %d", strlen(frase));
    return 0;
}