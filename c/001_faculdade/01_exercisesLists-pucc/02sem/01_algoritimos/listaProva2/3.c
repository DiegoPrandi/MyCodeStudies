#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void atualizarBateria(int *bateria, int *consumo){
    *consumo = rand() % 26 + 10;
    *bateria -= *consumo;
    if (*bateria<0){
        *bateria=0;
    }
}

int main() {
    int bateria = 100;
    int consumo;

    printf("Bateria inicial: %d%%\n", bateria);
    srand(time(NULL));

    while (bateria > 0) {
        atualizarBateria(&bateria, &consumo);
        printf("Consumo no trecho: %d%%\n", consumo);
        printf("Bateria: %d%%\n", bateria);
    }

    return 0;
}