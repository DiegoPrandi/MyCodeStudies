// Diego Prandi Silva - 25002584
// Guilherme Henrique Lopes Zambuzi - 26003006
// Joao Victor Grisolia Luis - 26005781

#include <stdio.h>
#include <string.h>

// EXERCICIO 01 
int buscar_valor(int vet[6], int valor) {
    for(int i = 0; i < 6; i++) {
        if (vet[i] == valor) {
            return i;
        }
    }
    
    return -1;
}

// int main() {
//     int vet[6];
//     int valor;
    
//     for(int i = 0; i < 6; i++){
//         printf("Digite o %d valor: ", i + 1);
//         scanf("%d", &vet[i]);
//     }
    
//     printf("Digite o valor que deseja ser achado: ");
//     scanf("%d", &valor);
    
//     int resultado = buscar_valor(vet, valor);
    
//     if (resultado != -1) {
//         printf("Numero encontrado na posicao %d", resultado + 1);
//     }
    
//     else {
//         printf("Numero nao encontrado.");
//     }
//     return 0;
    
// }


// EXERCICIO 02
typedef struct {
    char titulo_filme[100];
    char genero_filme;
} Filme;

Filme ler_filme() {
    Filme filme1;

    printf("Digite o titulo do filme: ");
    fgets(filme1.titulo_filme, sizeof(filme1.titulo_filme), stdin);

    printf("Digite o genero do filme (A = Acao, C = Comedia, D = Drama, T = Terror, F = Ficcao): ");
    scanf(" %c", &filme1.genero_filme);

    return filme1;
}

void imprimir_filme(Filme f) {
    printf("\nTitulo do filme: %s", f.titulo_filme);
    printf("\nGenero: ");

    if (f.genero_filme == 'A') {
        printf("Acao");
    }
    else if (f.genero_filme == 'C') {
        printf("Comedia");
    }
    else if (f.genero_filme == 'D') {
        printf("Drama");
    }
    else if (f.genero_filme == 'T') {
        printf("Terror");
    }
    else if (f.genero_filme == 'F') {
        printf("Ficcao");
    }
    else {
        printf("Genero invalido");
    }
}

// int main() {

//     Filme filme;

//     filme = ler_filme();

//     imprimir_filme(filme);

//     return 0;
// }


// EXERCICIO 03
int total_vendas(int vendas[3][5], int idProduto) {
    int soma = 0;

    for (int j = 0; j < 5; j++) {
        soma += vendas[idProduto][j];
    }

    return soma;
}

int main() {
    int vendas[3][5];
    int codProduto;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o valor para [%d][%d]: ", i,j);
            scanf("%d", &vendas[i][j]);
        }
    }
    
    printf("\nDigite o codigo do produto: ");
    scanf("%d", &codProduto);
    
    int resultado = total_vendas(vendas, codProduto);
    
    printf("Valor total: %d", resultado);
    
    return 0;
}

// EXERCICIO 03

#include <stdio.h>
#include <string.h>

typedef struct {
    
    char nome_atleta[50];
    int idade;
    float tempo[3];
    
} Atleta;

float mediaTempos (Atleta a) {
    
    float soma = 0;
    
    for (int gui = 0; gui < 3; gui++) {
        soma += a.tempo[gui];
    }
    
    return (soma / 3);
}

// int main() {
    
//     Atleta a;
    
//     printf("Digite o nome do atleta: ");
//     scanf("%49s", a.nome_atleta);
    
//     printf("Digite a idade do atleta: ");
//     scanf("%d", &a.idade);
    
//     for (int i = 0; i < 3; i++) {
//         printf("Digite o %d tempo: ", i + 1);
//         scanf("%f", &a.tempo[i]);
//     }
    
//     float resultado = mediaTempos(a);
    
//     printf("\nNome do atleta: %s", a.nome_atleta);
//     printf("\nMedia: %.2f", resultado);
    
//     return 0;
// }