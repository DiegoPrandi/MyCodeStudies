#include <stdio.h>

int main(){
    float notaProva[3];
    int faltas[3], qtdeEliminados=0;

    for (int i=0; i<3;i++){
        printf("\nALUNO %d NOTA: ", i+1);
        scanf("%f", &notaProva[i]);

        printf("ALUNO %d FALTAS: ", i+1);
        scanf("%d", &faltas[i]);

        notaProva[i] -=faltas[i];
        if (faltas[i] < 0){
            notaProva[i] = 0;
        }
        if (notaProva[i] < 6 || faltas[i] > 3){
            qtdeEliminados++;
        } 
        
    }

    for (int i=0;i<3;i++){
        printf("\n\nCANDIDATO %d",i+1);
        printf("\nNota final: %.2f", notaProva[i]);
    }
    printf("\n\nQTDE ELIMIDADOS: %d", qtdeEliminados);

}