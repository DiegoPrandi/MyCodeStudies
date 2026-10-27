// Fa c¸ a um programa que leia dois nomes de usu ´ario, um de cada vez. Compare os dois nomes
// e informe se s ˜ao iguais ou diferentes.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome1[30], nome2[30];

    scanf("%29s %29s", nome1, nome2);

    for (int i=0; nome1[i]!='\0';i++){
        nome1[i]= tolower(nome1[i]);
    }

    for (int i=0; nome2[i]!='\0';i++){
        nome2[i]= tolower(nome2[i]);
    }

    if (strcmp(nome1, nome2)){
        printf("nao sao iguais");
    }
    else{
        printf("sao iguais");
    }

    return 0;
}