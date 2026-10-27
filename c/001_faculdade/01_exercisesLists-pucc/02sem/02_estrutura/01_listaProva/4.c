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


void encontrarMaiorNo(Lista *lista) {
    if (lista->inicio == NULL) {
        return;
    }

    NoLista *atual = lista->inicio;
    NoLista *maior = atual;
    NoLista *anterior = NULL;
    NoLista *anteriorMaior = NULL;

    while (atual != NULL) {
        if (atual->valor > maior->valor) {
            maior = atual;
            anteriorMaior = anterior;
        }

        anterior = atual;
        atual = atual->prox;
    }

    if (maior->prox == NULL) {
        return;
    }

    if (anteriorMaior == NULL) {
        lista->inicio = maior->prox;
    } else {
        anteriorMaior->prox = maior->prox;
    }

    anterior->prox = maior;
    maior->prox = NULL;
}