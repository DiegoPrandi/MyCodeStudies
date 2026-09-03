// Diego Prandi Silva - 25002584
// Guilherme Henrique Lopes Zambuzi - 26003006
// Joao Victor Grisolia Luis - 26005781

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// EX 001
double calcularSerieHarmonica(int n) {
    double soma = 0.0;

    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    return soma;
}

// int main() {
//     int n;

//     printf("Digite o valor de 'n': ");
//     scanf("%d", &n);

//     while (n <= 0) {
//         printf("Digite um valor valido para 'n': ");
//         scanf("%d", &n);
//     }

//     double resultado = calcularSerieHarmonica(n);

//     printf("Valor da soma: %.2f\n", resultado);

//     return 0;
// }

// ---
// EX 002

int calcularMeses(float saldoInicial, float aporte, float meta) {
    float meses = 0.0;
    
    while (saldoInicial <= meta) {
        meses++;
        saldoInicial += aporte;
        
    }
    
    return meses - 1;
}

// int main() {
    
//     float saldoInicial; 
//     float aporte; 
//     float meta;
    
//     printf("Digite o valor do saldo inicial: ");
//     scanf("%f", &saldoInicial);
    
//     printf("Digite o valor do aporte: ");
//     scanf("%f", &aporte);
    
//     printf("Digite o valor da meta: ");
//     scanf("%f", &meta);
    
//     int resultado = calcularMeses(saldoInicial, aporte, meta);
    
//     printf("Meses necessarios para atingir a meta: %d", resultado);
    
// }

//EX 003
int classificarDesempenho(int pontos) {
    if (pontos < 25) {
        return 1;
    }
    
    else if (pontos < 40) {
        return 2;
    }
    
    else {
        return 3;
    }
}

// int main() {
    
//     int pontos;
//     int soma = 0;
    
//     int count1 = 0, count2 = 0, count3 = 0;
    
//     for (int i = 0; i < 4; i++) {
//         printf("Digite o %d pontuacao: ", i + 1);
//         scanf("%d", &pontos);
        
//         if ((pontos < 0) || (pontos > 50)) {
//             printf("Digite certo ai fiu\n");
//             i--;
//             continue;
//         }
        
//         int resultado = classificarDesempenho(pontos);
        
//         if (resultado == 1) {
//             count1++;
//         }
        
//         else if (resultado == 2) {
//             count2++;
//         }
        
//         else {
//             count3++;
//         }
        
//         soma += pontos;
//     }
    
//     printf("Quantidade de partidas classificadas como FRACO: %d\n", count1);
//     printf("Quantidade de partidas classificadas como BOM: %d\n", count2);
//     printf("Quantidade de partidas classificadas como EXCELENTE: %d\n", count3);
//     printf("Media de pontos da equipe: %d\n", (soma / 4));
    
//     return 0;
// }

//---
// EX 004
int lancarDado() {
    return rand() % 6 + 1;
}

// int main() {
//     int dado1, dado2, soma;
//     int iguais = 0;
//     int somaMaiorOuIgual10 = 0;

//     srand(time(NULL));

//     for (int i = 1; i <= 20; i++) {
//         dado1 = lancarDado();
//         dado2 = lancarDado();

//         soma = dado1 + dado2;

//         printf("Rodada %d: Dado 1 = %d | Dado 2 = %d | Soma = %d\n", i, dado1, dado2, soma);

//         if (dado1 == dado2) {
//             iguais++;
//         }

//         if (soma >= 10) {
//             somaMaiorOuIgual10++;
//         }
//     }

//     printf("\nResultados finais:\n");
//     printf("Rodadas com dados iguais: %d\n", iguais);
//     printf("Rodadas com soma maior ou igual a 10: %d\n", somaMaiorOuIgual10);

//     return 0;
// }

//---
// EX 005
int validarSenha(char senha[100]) {
    int maiuscula = 0;
    int minuscula = 0;
    int numero = 0;

    if (strlen(senha) < 8) {
        return 0;
    }

    for (int i = 0; senha[i] != '\0'; i++) {

        if (senha[i] >= 'A' && senha[i] <= 'Z') {
            maiuscula = 1;
        }

        if (senha[i] >= 'a' && senha[i] <= 'z') {
            minuscula = 1;
        }

        if (senha[i] >= '0' && senha[i] <= '9') {
            numero = 1;
        }
    }

    if (maiuscula == 1 && minuscula == 1 && numero == 1) {
        return 1;
    }

    return 0;
}

// int main() {
//     char senha[100];
//     int sucesso = 0;

//     for (int tentativa = 1; tentativa <= 4; tentativa++) {

//         printf("Digite uma senha: ");
//         scanf("%99s", senha);

//         if (validarSenha(senha) == 1) {
//             printf("senha cadastrada certin\n");
//             sucesso = 1;
//             break;
//         } else {
//             printf("senha invalida\n");
//         }
//     }

//     if (sucesso == 0) {
//         printf("banidoooooooo\n");
//     }

//     return 0;
// }