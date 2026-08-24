// Fa c¸ a um programa que leia o c ´odigo de um produto, representado por um n ´umero inteiro de 1 a
// 12 e classifique quanto a sua categoria:
// • c ´odigos de 1 a 4: ALIMENTICIO;
// • c ´odigos de 5 a 8: LIMPEZA;
// • c ´odigos de 9 a 12: ELETRONICO.

#include <stdio.h>

int main(){
    int codigo;
    scanf("%d", &codigo);

    if (codigo >=1 && codigo <=4){
        printf("Alimenticio");
    } 
    else if(codigo<=8){
        printf("Limpeza");
    } 
    else if (codigo<=12){
        printf("Eletronico");
    }
    return 0;
}