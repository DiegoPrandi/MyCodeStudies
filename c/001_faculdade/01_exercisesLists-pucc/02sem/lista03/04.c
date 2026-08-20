#include <stdio.h>
int main(){
    float a, b, c;

    while(1){
        printf("\nDigite o valor A: ");
        scanf("%f", &a);
        if (a==0){
            break;
        }
        
        printf("Digite o valor B: ");
        scanf("%f", &b);
    
        printf("Digite o valor C: ");
        scanf("%f", &c);

        if(a>0 && b>0 && c>0 && a+b+c==180){
            if(a==b && b==c){
                printf("\nTRIANGULO EQUILATERO");
            } else if ((a==b) || (a==c) || (b==c)){
                printf("\nTRIANGULO ISOSCELES");
            } else{
                printf("\nTRIANGULO ESCALENO");
            }
        } else{
            printf("\nNao e um triagulo");
            continue;
        }
    }

    
    return 0;
}