// Fac¸a um programa que leia uma palavra com no m ´aximo 49 caracteres. Em seguida:
// • percorra a string e verifique se a palavra cont ´em a letra ’a’.
// Dica: Inclua a biblioteca string.h, que possui a fun c¸ ˜ao strlen(string), que retorna a quantidade de
// caracteres da string, sem contar o caractere final ’\0’.

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];

    scanf("%49s", palavra);

    for (int i=0;palavra[i]!= '\0';i++){
        if (palavra[i]=='a'){
            printf("tem A");
            break;
        }
    }
    return 0;
}