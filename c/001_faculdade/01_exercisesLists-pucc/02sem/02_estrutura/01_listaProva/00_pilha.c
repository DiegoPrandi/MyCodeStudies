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

// Inicializar pilha
void inicializarPilha(Pilha* pilha) {
    pilha->topo = NULL;
    pilha->tamanho = 0;
}

// Verificar se está vazia
int pilhaVazia(Pilha* pilha) {
    return pilha->topo == NULL;
}

// Empilhar
void empilhar(Pilha* pilha, int valor) {
    NoPilha* novo = malloc(sizeof(NoPilha));

    if (novo == NULL) {
        return;
    }

    novo->valor = valor;
    novo->prox = pilha->topo;
    pilha->topo = novo;
    pilha->tamanho++;
}

// Desempilhar e retornar o valor
int desempilhar(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        return -1;
    }

    NoPilha* aux = pilha->topo;
    int valor = aux->valor;

    pilha->topo = aux->prox;
    free(aux);
    pilha->tamanho--;

    return valor;
}

// Consultar o topo sem remover
int consultarTopo(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        return -1;
    }

    return pilha->topo->valor;
}

// Contar elementos pares sem alterar a pilha
int contarPares(Pilha* pilha) {
    NoPilha* aux = pilha->topo;
    int cont = 0;

    while (aux != NULL) {
        if (aux->valor % 2 == 0) {
            cont++;
        }

        aux = aux->prox;
    }

    return cont;
}

// Copiar uma pilha sem alterar a original
void copiarPilha(Pilha* p1, Pilha* copia) {
    Pilha novaPilha;
    inicializarPilha(&novaPilha);

    while (!pilhaVazia(p1)) {
        int valor = desempilhar(p1);
        empilhar(&novaPilha, valor);
    }

    while (!pilhaVazia(&novaPilha)) {
        int valor = desempilhar(&novaPilha);

        empilhar(p1, valor);
        empilhar(copia, valor);
    }
}