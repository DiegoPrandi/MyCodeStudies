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

void retirarZerosLista(Lista *lista){
    NoLista *aux = lista->inicio;

    while(aux != NULL){
        NoLista* proximoAux = aux->prox;

        if(aux->valor == 0){
            remover(lista, 0);
        }

        aux = proximoAux;
    }
}