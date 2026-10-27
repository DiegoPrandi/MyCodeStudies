#include <stdio.h>
#include <stdlib.h>

typedef struct NoPilha {
    int valor;
    struct NoPilha* prox;
} NoPilha;

typedef struct Pilha {
    NoPilha* topo;
    int tamanho;
} Pilha;


int contarPares(Pilha* pilha) {
    NoPilha* aux = pilha->topo;
    int cont = 0;
    while (aux) {
        if (aux->valor % 2 == 0) {
            cont++;
        }
        aux = aux->prox;
    }
    return cont;
}