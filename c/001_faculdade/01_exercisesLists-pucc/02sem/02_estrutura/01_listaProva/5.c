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

void copiarPilha(Pilha* p1, Pilha* copia){
    Pilha novaPilha;
    novaPilha.topo = NULL;
    novaPilha.tamanho=0;

    while(!pilhaVazia(p1)){
        int valorDesempilhado = desempilhar(p1);
        empilhar(&novaPilha, valorDesempilhado);
    }

    while(!pilhaVazia(&novaPilha)){
        int valorDesempilhado = desempilhar(&novaPilha);
        empilhar(p1, valorDesempilhado);
        empilhar(copia, valorDesempilhado);
    }
}