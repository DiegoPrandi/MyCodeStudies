#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NoBanda {
    char nomeBanda[80];
    char estiloMusical[30];
    struct NoBanda* prox;
} NoBanda;

typedef struct Lista {
    NoBanda* inicio;
    int tamanho;
} Lista;

void inserirAposPrimeiroEstilo(Lista *lista, char nomeBanda[], char estiloMusical[]){
    NoBanda* atual = lista->inicio;

    if (lista->inicio == NULL){
        NoBanda* novo = criarNo(nomeBanda, estiloMusical);
        lista->inicio = novo;
        lista->tamanho++;
        return;
    }

    while(atual != NULL){
        if (strcmp(atual->estiloMusical, estiloMusical) == 0){
            NoBanda *novo = criarNo(nomeBanda, estiloMusical);

            novo->prox = atual->prox;
            atual->prox = novo;

            lista->tamanho++;
            return;
        }

        if (atual->prox == NULL) {
            NoBanda* novo = criarNo(nomeBanda, estiloMusical);

            atual->prox = novo;
            lista->tamanho++;
            return;
        }

        atual = atual->prox;
    }

}