#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    float comprimento;
} Viga;

/* I - Alocar dinamicamente o vetor de vigas */
Viga* alocarVigas(int n){
   Viga* vigas = (Viga*) malloc(n * sizeof(Viga));
   return vigas;
}


/* II - Alocar dinamicamente a matriz de barras*/
int** alocarMatrizBarras(int linhas, int colunas) {
   int** barras = (int**) malloc(linhas * sizeof(int*));
   for (int i = 0; i < linhas; i++) {
      barras[i] = (int*) malloc(colunas * sizeof(int));
   }

   return barras;
}


/* III - Ler os dados das vigas e das barras*/
void lerDados(Viga* vigas, int** barras, int n, int colunas) {
   for (int i = 0; i < n; i++) {

      printf("codigo da viga ");
      scanf("%d", &vigas[i].codigo);

      printf("comprimento ");
      scanf("%f", &vigas[i].comprimento);

      for (int j = 0; j < colunas; j++) {
         printf("Diametro %d: ", j + 1);
         scanf("%d", &barras[i][j]);
      }
   }
}


/* IV - Calcular a quantidade de aço de uma viga*/
float calcularAcoViga(int** barras, float diametros[], int colunas, float comprimento, int vigaID) {
   float total = 0;
   for (int j = 0; j < colunas; j++) {
      total += barras[vigaID][j] * comprimento * (diametros[j] * diametros[j]) / 162;
   }

   return total;
}


/* V - Liberar a matriz dinâmica*/
void liberarMatriz(int** barras, int linhas) {
   for (int i = 0; i < linhas; i++) {
      free(barras[i]);
   }
   free(barras);
}

int main() {
    int n; // quantidade de vigas
    float diametros[4] = {6.3, 8.0, 10.0, 12.5};

    printf("Quantidade de vigas: ");
    scanf("%d", &n);

    /* Chamar as funcoes alocarVigas e alocarMatrizBarras */
   Viga* vigas = alocarVigas(n);
   int** barras = alocarMatrizBarras(n, 4);

    /* Chamar a funcao lerDados para preencher os dados
       das vigas e das barras */
   lerDados(vigas, barras, n, 4);

   printf("\nRELATORIO DE ACO DAS VIGAS\n");

    /* Chamar a funcao calcularAcoViga para cada viga
       e exibir:
       - Codigo;
       - Comprimento;
       - Quantidade total de aco;
       - Classificacao (ver tabela no PDF). */
   for (int i = 0; i < n; i++) {

      float total = calcularAcoViga(
         barras, diametros, 4,
         vigas[i].comprimento, i
      );

      printf("\ncodigo: %d", vigas[i].codigo);
      printf("\ncomprimento: %.2f m", vigas[i].comprimento);
      printf("\nqunatidade total aco: %.2f kg", total);

      if (total < 40) {
         printf("\nclassificacao: consumo baixo");
      }
      else if (total < 80) {
         printf("\nclassificacao: consumo medio");
      }
      else {
         printf("\nclassificacao: consumo alto");
      }
      printf("\n");
   }


    /* Chamar a funcao liberarMatriz para liberar a matriz
       de barras e utilizar free para liberar o vetor
       de vigas. */
   liberarMatriz(barras, n);
   free(vigas);

    return 0;
}