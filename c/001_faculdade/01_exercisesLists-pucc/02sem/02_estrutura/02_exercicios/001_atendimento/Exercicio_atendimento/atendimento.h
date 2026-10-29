#ifndef ATENDIMENTO_H
#define ATENDIMENTO_H

/* Estruturas fornecidas: nao alterar. */
typedef struct Paciente {
    int senha;       /* senha do paciente */
    char nome[40];   /* nome do paciente */
    int idade;       /* idade em anos */
} Paciente;

typedef struct Atendimento {
    Paciente *pacientes; /* vetor alocado dinamicamente */
    int quantidade;      /* quantidade de pacientes aguardando = próxima posição disponível para preencher */
    int capacidade;      /* capacidade maxima do vetor */
    int proximaSenha;    /* proxima senha a ser gerada */
} Atendimento;

/* Implementar no arquivo atendimento.c */
Atendimento *criarAtendimento(int capacidade);
void cadastrarPaciente(Atendimento *atendimento, const char nome[], int idade);
void imprimirEspera(const Atendimento *atendimento);
int consultarProximo(const Atendimento *atendimento, Paciente *proximo);
int buscarPaciente(const Atendimento *atendimento, int senha);
void liberarAtendimento(Atendimento **atendimento);
int chamarProximo(Atendimento *atendimento, Paciente *chamado);

#endif
