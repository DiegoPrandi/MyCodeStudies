// Diego Prandi Silva - 25002584
// Joao Victor Grisolia Luis - 26005781
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    
    char nome[20];
    int numCamisa;
    int qtdGols;
    
} Jogador;

Jogador *criarEquipe(int qtdJogadores) {
    Jogador *ptr_jogador = malloc(qtdJogadores * sizeof(Jogador));
    
    if(ptr_jogador) {
        return ptr_jogador;
    }
    
    else {
        printf("Locacao dinamica falhou.");
        return NULL;
    }
}

void preencherJogadores(Jogador *ptr_jogador, char nome[], int numCamisa, int qtdGols) {
    strcpy(ptr_jogador->nome, nome);
    ptr_jogador->numCamisa = numCamisa;
    ptr_jogador->qtdGols = qtdGols;
}

Jogador *buscarJogador(Jogador *ptr_jogador, int n, int numCamisa) {
    for(int i = 0; i < n; i++) {
        if(ptr_jogador[i].numCamisa == numCamisa) {
            return &ptr_jogador[i];
        }
    }
}

void imprimirJogadores(Jogador *ptr_jogador, int n) {
    printf("\n- Informacoes dos Jogadores -\n");
    
    for(int i = 0; i < n; i++) {
        printf("\nJOGADOR [%d]\n\n", i + 1);
        printf("Nome: %s\n", ptr_jogador[i].nome);
        printf("Numero da camisa: %d\n", ptr_jogador[i].numCamisa);
        printf("Quantidade de Gols: %d\n", ptr_jogador[i].qtdGols);
    }
}

void incrementarGols(Jogador *ptr_jogador) {
    ptr_jogador->qtdGols++;
}

void liberarMemoria(Jogador **ptr_jogador) {
    free(*ptr_jogador);
    *ptr_jogador = NULL;
}


int main()
{
    Jogador *jogador = criarEquipe(3);
    
    preencherJogadores(&jogador[0], "Neymar Junior", 10, 457);
    preencherJogadores(&jogador[1], "Cristiano Ronaldo", 7, 979);
    preencherJogadores(&jogador[2], "Erling Halland", 9, 363);
    
    imprimirJogadores(jogador, 3);
    
    Jogador *jogadorBuscado = buscarJogador(jogador, 3, 10);
    
    incrementarGols(jogadorBuscado);
    
    printf("\n- Tabela Atualizada dos Jogadores -\n");
    
    imprimirJogadores(jogador, 3);
    
    
    liberarMemoria(&jogador);
    
}

// Questão A - Foi alocado dinamicamente na memória, pra conseguir manipular os valores e as structs dentro do vetor.

// Questão B - Porque o ponteiro é quem armazena os valores do jogador buscado. 
// Criar uma cópia não permite alterarmos seus valores

// Questão C - Porque, já que estamos usando um ponteiro para armazenar valores, possuimos o endereço dos valores reais
// do vetor original, e não apenas uma cópia. E isso permite sua alteração diretamente.

// Questão D - O valor acessado é NULL e não pertence mais ao programa (já que foi liberado e seu valor determinado como NULL). 
// Logo, em sua chamada, o valor retornado pelo programa sera NULL.