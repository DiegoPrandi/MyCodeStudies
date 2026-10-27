#include <stdio.h>
#include <stdlib.h>

typedef struct NoLista {
    int valor;
    struct NoLista* prox;
} NoLista;

typedef struct Lista {
    NoLista* inicio;
    int tamanho;
} Lista;

// Inicializar lista
void inicializarLista(Lista* lista) {
    lista->inicio = NULL;
    lista->tamanho = 0;
}

// Verificar se está vazia
int listaVazia(Lista* lista) {
    return lista->inicio == NULL;
}

// Inserir no início
void inserirInicio(Lista* lista, int valor) {
    NoLista* novo = malloc(sizeof(NoLista));

    if (novo == NULL) {
        return;
    }

    novo->valor = valor;
    novo->prox = lista->inicio;
    lista->inicio = novo;
    lista->tamanho++;
}

// Inserir no final
void inserirFinal(Lista* lista, int valor) {
    NoLista* novo = malloc(sizeof(NoLista));

    if (novo == NULL) {
        return;
    }

    novo->valor = valor;
    novo->prox = NULL;

    if (lista->inicio == NULL) {
        lista->inicio = novo;
    } else {
        NoLista* atual = lista->inicio;

        while (atual->prox != NULL) {
            atual = atual->prox;
        }

        atual->prox = novo;
    }

    lista->tamanho++;
}

// Imprimir lista
void imprimirLista(Lista* lista) {
    NoLista* atual = lista->inicio;

    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }

    printf("\n");
}

// Contar elementos
int contarElementos(Lista* lista) {
    NoLista* atual = lista->inicio;
    int cont = 0;

    while (atual != NULL) {
        cont++;
        atual = atual->prox;
    }

    return cont;
}

// Verificar se está ordenada em ordem crescente
int estaOrdenada(Lista* lista) {
    NoLista* atual = lista->inicio;

    while (atual != NULL && atual->prox != NULL) {
        if (atual->valor > atual->prox->valor) {
            return 0;
        }

        atual = atual->prox;
    }

    return 1;
}

// Inverter lista
void inverterLista(Lista* lista) {
    NoLista* anterior = NULL;
    NoLista* atual = lista->inicio;
    NoLista* proximo;

    while (atual != NULL) {
        proximo = atual->prox;
        atual->prox = anterior;
        anterior = atual;
        atual = proximo;
    }

    lista->inicio = anterior;
}

// Mover o maior nó para o final
void encontrarMaiorNo(Lista* lista) {
    if (lista->inicio == NULL) {
        return;
    }

    NoLista* atual = lista->inicio;
    NoLista* maior = atual;
    NoLista* anterior = NULL;
    NoLista* anteriorMaior = NULL;

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