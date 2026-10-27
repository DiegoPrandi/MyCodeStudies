// Diego Prandi Silva - 25002584
// Guilherme Henrique Lopes Zambuzi - 26003006
// Joao Victor Grisolia Luis - 26005781

#include <stdio.h>
#include <string.h>

/* Structs da questao 1 */
typedef struct {
    
    int cod_livro;
    char titulo[20];
    int status;
    
} Livro;

/* Funcoes da questao 1 */
void preencherLivro(Livro *ptr_livro, int cod_livro, char titulo[], int status) {
    ptr_livro->cod_livro = cod_livro;
    strcpy(ptr_livro->titulo , titulo);
    ptr_livro->status = status;
}

void emprestarLivro(Livro *ptr_livro){
    if(ptr_livro->status == 0) {
        ptr_livro->status = 1;
    }
    
    else {
        printf("Livro indisponivel.");
    }
}

void devolverLivro(Livro *ptr_livro) {
    if(ptr_livro->status == 1) {
        ptr_livro->status = 0;
    }
    
    else {
        printf("Livro disponivel.");
    }
}

Livro* buscarLivro(Livro livros[], int n, int buscarCod) {
    for(int i = 0; i < n; i++) {
        if(livros[i].cod_livro == buscarCod) {
            return &livros[i];
        }
    }
    
    return NULL;
}

/* Structs da questao 2 */
typedef struct {
    
    char nome[50];
    char genero[30];
    
} Banda;

typedef struct {
    
    char nome[50];
    int RA;
    Banda banda;
    
} Aluno;

typedef struct {
    
    char nomeEquipe[20];
    Aluno alunos[3];
    
} Equipe;

/* Funcoes da questao 2 */
void preencherBanda(Banda *banda, char nome[], char genero[]) {
    strcpy(banda->nome, nome);
    strcpy(banda->genero, genero);
}

void preencherAluno(Aluno *aluno, char nome[], int RA, Banda banda) {
    strcpy(aluno->nome, nome);
    aluno->RA = RA;
    aluno-> banda = banda;
}

void preencherEquipe(Equipe *equipe, char nomeEquipe[], Aluno alunos[3]) {
    strcpy(equipe->nomeEquipe, nomeEquipe);
    
    for(int i = 0; i<3; i++) {
        equipe->alunos[i] = alunos[i];
    }
}

void imprimirEquipe(Equipe equipe) {

    printf("\nEquipe: %s\n\n", equipe.nomeEquipe);

    for (int i = 0; i < 3; i++) {

        printf("Nome: %s\n", equipe.alunos[i].nome);
        printf("RA: %d\n", equipe.alunos[i].RA);

        printf("Banda favorita: %s\n", equipe.alunos[i].banda.nome);

        printf("Genero musical: %s\n\n", equipe.alunos[i].banda.genero);
    }
}


int main()
{
    /* Questao 1 */
    /*Chamadas da questao 1*/
    Livro livros[3];
    
    preencherLivro(&livros[0], 1001, "Os Biribinha", 0);
    preencherLivro(&livros[1], 2001, "Os Barabinha", 1);
    preencherLivro(&livros[2], 3001, "Os Burubinha", 0);
    
    emprestarLivro(&livros[2]);
    devolverLivro(&livros[1]);
    
    Livro *livroEncontrado = buscarLivro(livros, 3, 3001);
    
    if(livroEncontrado != NULL) {
        printf("\nCodigo: %d\n", livroEncontrado->cod_livro);
        printf("Titulo: %s\n", livroEncontrado->titulo);
        printf("Status: %d\n", livroEncontrado->status);
    }
    
    else {
        printf("Livro nao encontrado.");
    }
    /* Questao 2 */
    /*Chamadas da questao 2*/
    Banda banda1;
    Banda banda2;
    Banda banda3;
    
    preencherBanda(&banda1, "Twenty One Pilots", "Pop Rock");
    preencherBanda(&banda2, "BTS", "K-Pop");
    preencherBanda(&banda3, "Guns n Roses", "Rock");
    
    Aluno aluno1;
    Aluno aluno2;
    Aluno aluno3;
    
    preencherAluno(&aluno1, "Diego Prandi", 25002584, banda1);
    preencherAluno(&aluno2, "Guilherme Zambuzi", 26003006, banda2);
    preencherAluno(&aluno3, "Joao Grisolia", 26005781, banda3);
    
    Aluno alunos[3];
    
    alunos[0] = aluno1;
    alunos[1] = aluno2;
    alunos[2] = aluno3;
    
    Equipe equipe;
    
    preencherEquipe(&equipe, "Os Chupiskos", alunos);
    
    imprimirEquipe(equipe);

    return 0;
}