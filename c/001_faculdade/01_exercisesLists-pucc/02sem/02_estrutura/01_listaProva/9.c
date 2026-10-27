#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NoLista {
    int valor;
    struct NoLista* prox;
} NoLista;

typedef struct Lista {
    NoLista* inicio;
    int tamanho;
} Lista;

int orderCrescente(Lista *lista){
    NoLista *aux = lista->inicio;

    while(aux != NULL){
        if (aux->valor > aux->prox->valor){
            return 0;
        }
    }
    return 1;
}