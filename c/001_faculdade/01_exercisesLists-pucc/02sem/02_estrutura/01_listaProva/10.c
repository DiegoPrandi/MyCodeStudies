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

void inverterLista(Lista* lista){
    NoLista* anterior = NULL; 
    NoLista* atual = lista->inicio; 
    NoLista* proximo;
    while (atual != NULL){
        proximo = atual->prox; 
        atual->prox = anterior;
        anterior = atual; 
        atual = proximo;
    } 
    lista->inicio = anterior;


}