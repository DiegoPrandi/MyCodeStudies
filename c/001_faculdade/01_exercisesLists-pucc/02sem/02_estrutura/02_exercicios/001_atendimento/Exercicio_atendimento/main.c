#include <stdio.h>
#include "atendimento.h"

int main(void) {
    /* Complete as chamadas indicadas nos comentarios. */
    Atendimento *hospital = NULL;
    Paciente chamado;
    Paciente proximo;

    /* Criar atendimento com capacidade para 6 pacientes. */

   hospital = criarAtendimento(6);

    /* Cadastrar, nesta ordem:
       Alfredo, 31 anos
       Bruno, 10 anos
       Claudio, 29 anos
       Darcy, 31 anos
       Ester, 56 anos
       Jeronimo, 62 anos
    */

   cadastrarPaciente(hospital, "Alfredo", 31);
   cadastrarPaciente(hospital, "Bruno", 10);
   cadastrarPaciente(hospital, "Claudio", 29);
   cadastrarPaciente(hospital, "Darcy", 31);
   cadastrarPaciente(hospital, "Ester", 56);
   cadastrarPaciente(hospital, "Jeronimo", 62);


    printf("\n Pacientes na espera: %d\n", hospital->quantidade);

    /* Consultar o proximo paciente, sem remove-lo,
       e imprimir sua senha e nome. */

   consultarProximo(hospital, &proximo);
   printf("\nSenha do proximo: %d", proximo.senha);
   printf("\nNome do proximo: %s", proximo.nome);


    printf("\nIndice da senha 2: %d\n", buscarPaciente(hospital, 2));
    printf("\nIndice da senha 99: %d\n", buscarPaciente(hospital, 99));
    imprimirEspera(hospital);

   /* Tentar cadastrar Gabi, 36 anos.
      O programa deve imprimir uma mensagem indicando
      que o vetor esta cheio. */

      cadastrarPaciente(hospital, "Gabi", 36);


    /* Chamar os proximos tres pacientes.
       Para cada chamada bem-
       sucedida, imprimir a senha e o nome. */
   for (int i = 0; i < 3; i++) {
      if (chamarProximo(hospital, &chamado)) {
         printf("\nPaciente chamado!");
         printf("\nSenha: %d", chamado.senha);
         printf("\nNome: %s\n", chamado.nome);
      }
}


    printf("\nPacientes restantes: %d\n", hospital->quantidade);


    imprimirEspera(hospital);

    /* Liberar atendimento. */
   liberarAtendimento(&hospital);

    printf("\n\nEstrutura liberada: %s\n", hospital == NULL ? "sim" : "nao");
    return 0;
}