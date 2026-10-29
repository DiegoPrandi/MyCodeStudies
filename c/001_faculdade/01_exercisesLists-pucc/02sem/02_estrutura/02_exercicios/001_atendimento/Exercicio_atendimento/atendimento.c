#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "atendimento.h"


/* 1) Aloque a estrutura Atendimento e um vetor de Paciente com malloc.
   Inicialize quantidade=0, capacidade e proximaSenha=1.
   Considere que as alocacoes sao bem-sucedidas. */
Atendimento *criarAtendimento(int capacidade) {
   Atendimento *novoAtendimento = malloc(sizeof(Atendimento));
   novoAtendimento->quantidade = 0;
   novoAtendimento->capacidade = capacidade;
   novoAtendimento->proximaSenha = 1;
   novoAtendimento->pacientes = malloc(capacidade * sizeof(Paciente));
   return novoAtendimento;
}

/* 2) Se nao houver vaga, imprima uma mensagem e encerre a função. 
   Se houver vaga, cadastre um Paciente no final do vetor.
   Copie o nome, atribua a idade, gere uma senha sequencial e aumente quantidade. */
void cadastrarPaciente(Atendimento *atendimento, const char nome[], int idade) {
   if(atendimento->quantidade >= atendimento->capacidade) {
      printf("\n\nSem vaga.");
      return;
   }

   strcpy(atendimento->pacientes[atendimento->quantidade].nome, nome);

   atendimento->pacientes[atendimento->quantidade].idade = idade;

   atendimento->pacientes[atendimento->quantidade].senha = atendimento->proximaSenha;
   atendimento->quantidade++;
   atendimento->proximaSenha++;
   return;

}

/* 3) Imprima todos os pacientes aguardando, na ordem do vetor,
   mostrando senha, nome e idade. */
void imprimirEspera(const Atendimento *atendimento) {
   for(int i = 0; i < atendimento->quantidade; i++){
      printf("\n-- %d. Paciente --\n", i + 1);
      printf("Senha do paciente: %d\n", atendimento->pacientes[i].senha);
      printf("Nome do paciente: %s\n", atendimento->pacientes[i].nome);
      printf("Idade do paciente: %d\n", atendimento->pacientes[i].idade);
   }
}

/* 4) Consulte o primeiro paciente sem remove-lo.
   Copie seus dados para *proximo.
   Retorne 1 se houver paciente ou 0 caso contrario. */
int consultarProximo(const Atendimento *atendimento, Paciente *proximo) {
   if(atendimento->quantidade > 0){
      proximo->senha = atendimento->pacientes[0].senha;
      strcpy(proximo->nome, atendimento->pacientes[0].nome);
      proximo->idade = atendimento->pacientes[0].idade;
      return 1;
   }

   return 0;
}

/* 5) Busque um paciente pela senha e retorne seu indice no vetor.
   Retorne -1 quando a senha nao for encontrada. */
int buscarPaciente(const Atendimento *atendimento, int senha) {
   for(int i = 0; i < atendimento->quantidade; i++){
      if(senha == atendimento->pacientes[i].senha){
         printf("Paciente encontrado no indice: %d", i);
         return i;
      }
   }

   return -1;
}

/* 6) Libere o vetor e a estrutura Atendimento.
   Ao final, *atendimento deve ser NULL. */
void liberarAtendimento(Atendimento **atendimento) {
   free((*atendimento)->pacientes);
   free(*atendimento);
   *atendimento = NULL;
}

int chamarProximo(Atendimento *atendimento, Paciente *chamado) {
    if (atendimento->quantidade == 0) {
        return 0;
    }

    *chamado = atendimento->pacientes[0];

    for (int i = 0; i < atendimento->quantidade - 1; i++) {
        atendimento->pacientes[i] = atendimento->pacientes[i + 1];
    }

    atendimento->quantidade--;

    return 1;
}