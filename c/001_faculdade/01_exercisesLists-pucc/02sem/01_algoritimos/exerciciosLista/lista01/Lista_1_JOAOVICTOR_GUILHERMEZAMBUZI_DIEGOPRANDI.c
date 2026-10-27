// João Victor Grisolia Luis - RA: 26005781
// Guilherme Henrique Lopes Zambuzi - 26003006:
// Diego Prandi Silva - RA: 25002584

#include <stdio.h>
#include <math.h>

void exercicio01();
void exercicio02();
void exercicio03();
void exercicio04();
void exercicio05();
void exercicio06(); 
void exercicio07();

void exercicio08();
void exercicio09();
void exercicio10();
void exercicio11();
void exercicio12();
void exercicio13();
void exercicio14();

void exercicio15();
void exercicio16();
void exercicio17();
void exercicio18();
void exercicio19();
void exercicio20();

int main() {

    int op;

    do {
        printf("\nLista 01\n");
        printf("\nEscolha o número do exercício: ");
        scanf("%d", &op);

        switch (op) {
            case 1: exercicio01(); break;
            case 2: exercicio02(); break;
            case 3: exercicio03(); break;
            case 4: exercicio04(); break;
            case 5: exercicio05(); break;
            case 6: exercicio06(); break;
            case 7: exercicio07(); break;
            case 8: exercicio08(); break;
            case 9: exercicio09(); break;
            case 10: exercicio10(); break;
            case 11: exercicio11(); break;
            case 12: exercicio12(); break;
            case 13: exercicio13(); break;
            case 14: exercicio14(); break;
            case 15: exercicio15(); break;
            case 16: exercicio16(); break;
            case 17: exercicio17(); break;
            case 18: exercicio18(); break;
            case 19: exercicio19(); break;
            case 20: exercicio20(); break;
        }
    } while (op != 0);

    return 0;

}

void exercicio01() {

    float n1, n2, mediaPond;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    mediaPond = ((n1 * 2) + (n2 * 3)) / 5;

    printf("Media ponderada: %.2f", mediaPond);

}

void exercicio02() {

    float salarioFixo, vendas, comissao, salarioFinal;

    printf("Digite o salario fixo atual: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor da venda: ");
    scanf("%f", &vendas);

    comissao = (vendas * 0.04);
    salarioFinal = (salarioFixo + comissao);

    printf("Salario final: %.2f", salarioFinal);

}

void exercicio03() {

    float peso, pesoEngordar, pesoEmagrecer;

    printf("Digite seu peso atual (kg): ");
    scanf("%f", &peso);

    pesoEngordar = peso + (peso * 0.15);
    pesoEmagrecer = peso - (peso * 0.20);

    printf("\nPeso caso engorde 15%%: %.2f\n", pesoEngordar);
    printf("Peso caso emagreca 20%%: %.2f", pesoEmagrecer);

}

void exercicio04() {

    float baseMaior, baseMenor, altura, areaTrap;

    printf("Digite o valor da base maior: ");
    scanf("%f", &baseMaior);

    printf("Digite o valor da base menor: ");
    scanf("%f", &baseMenor);

    printf("Digite o valor da area: ");
    scanf("%f", &altura);

    areaTrap = ((baseMaior + baseMenor) * altura) / 2;

    printf("Dado os valores, a area do trapezio eh igual a: %.2f", areaTrap);

}

void exercicio05() {

    int anoNascimento, mesNascimento, anoAtual, mesAtual;
    int anos, meses, dias, semanas;

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o seu mes de nascimento: ");
    scanf("%d", &mesNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Digite o mes atual: ");
    scanf("%d", &mesAtual);

    anos = anoAtual - anoNascimento;
    meses = anos * 12;
    dias = anos * 365;
    semanas = dias / 7;

    printf("Voce tem %d anos, %d meses, %d dias e %d semanas de vida aproximadamente.", anos, meses, dias, semanas);

}

void exercicio06() {

    int fatiasPizza, pizzasCompletas, fatiasRestantes, faltam;

    printf("Digite quantas fatias foram consumidas: ");
    scanf("%d", &fatiasPizza);

    pizzasCompletas = (fatiasPizza / 8);
    fatiasRestantes = (fatiasPizza % 8);

    if (fatiasRestantes == 0)
        faltam = 0;
    else
        faltam = 8 - fatiasRestantes;

    printf("\nForam consumidas %d pizza(s) completa(s).\n", pizzasCompletas);
    printf("Faltam %d fatia(s) para completar a proxima pizza.\n", faltam);

}

void exercicio07() {

    float tempFahrenheit, conversaoCelsius;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &tempFahrenheit);

    conversaoCelsius = (tempFahrenheit - 32.0) / 1.8;

    printf("\nA temperatura convertida eh igual a: %.2f", conversaoCelsius);

}

void exercicio08() {

    float r, a, c;

    printf("Digite o raio: ");
    scanf("%f", &r);

    a = 3,14159 * (r*r);
    c = 2 * 3,14159 * r;
    
    printf("\nA area eh igual: %.2f", a);
    printf("\nO comprimento eh igual: %.2f", c);

}

void exercicio09() {

    float v, r, i;

    printf("Digite a tensao: ");
    scanf("%f", &v);
    
    printf("Digite a resistencia: ");
    scanf("%f", &r);

    i = v/r;
    
    printf("\nA corrente eletrica eh igual: %.2f", i);

}

void exercicio10() {

    float a, b, h;

    printf("Digite o cateto a: ");
    scanf("%f", &a);
    
    printf("Digite o cateto b: ");
    scanf("%f", &b);

    h = sqrt((a*a)+(b*b));
    
    printf("\nA hipotenusa eh igual: %.2f", h);
}

void exercicio11() {

    float l1, l2, a,p;

    printf("Digite o lado 1 em metros: ");
    scanf("%f", &l1);
    
    printf("Digite o lado 2 em metros: ");
    scanf("%f", &l2);

    a = l1*l2;
    p = a*18;
    
    printf("\nA potencia de iluminacao necessaria eh igual: %.2f", p);
}

void exercicio12() {

    float a1, a2, a3;

    printf("Digite o angulo 1: ");
    scanf("%f", &a1);
    
    printf("Digite o angulo 2: ");
    scanf("%f", &a2);

    a3 = 180-(a1+a2);
    
    printf("\nO angulo 3 eh igual: %.2f", a3);
}

void exercicio13() {

    float n,nd;

    printf("Digite o numero de lados: ");
    scanf("%f", &n);
    
    nd = n*(n-3)/2;
    
    printf("\nO numero de diagonais eh igual: %.2f", nd);
}

void exercicio14() {

    float h,r,v;

    printf("Digite o raio: ");
    scanf("%f", &r);

    printf("Digite a altura: ");
    scanf("%f", &h);

    v = 3,14*(r*r)*h;
    
    printf("\nO volume eh igual: %.2f", v);
}

void exercicio15(){
    int horas, minutos, minutosTotal, segundosTotal;

    printf("digite as horas: ");
    scanf("%d", &horas);

    printf("digite os minutos: ");
    scanf("%d", &minutos);

    minutosTotal = (horas*60)+minutos;
    segundosTotal = minutos*60;

    printf("horas em minutos: %d\n", minutosTotal);
    printf("total em minutos: %d\n", minutosTotal);
    printf("total em segundos: %d", segundosTotal);
}

void exercicio16(){
    int alfa, beta, gama, auxiliar;

    printf("digite o valor de alfa: ");
    scanf("%d", &alfa);

    printf("digite o valor de beta: ");
    scanf("%d", &beta);

    printf("digite o valor de gama: ");
    scanf("%d", &gama);

    printf("\nANTES\n");
    printf("ALFA: %d\n", alfa);
    printf("BETA: %d\n", beta);
    printf("GAMA: %d\n\n", gama);

    auxiliar = alfa;
    alfa = beta;
    beta = gama;
    gama = auxiliar;

    printf("DEPOIS\n");
    printf("ALFA: %d\n", alfa);
    printf("BETA: %d\n", beta);
    printf("GAMA: %d\n\n", gama);
}

void exercicio17(){
    float n1, n2, n3, n4, media;

    printf("digite a primeira nota: ");
    scanf("%f", &n1);

    printf("digite a segunda nota: ");
    scanf("%f", &n2);

    printf("digite a terceira nota: ");
    scanf("%f", &n3);

    printf("digite a quarta nota: ");
    scanf("%f", &n4);

    media = (n1*1 + n2*2 + n3*3 + n4*4) / 10;
    printf("media final: %.2f\n", media);
}

void exercicio18(){
    float tempo, velocidadeMedia, distancia, litrosUsados;

    printf("digite o tempo da viagem (horas): ");
    scanf("%f", &tempo);

    printf("digite a velocidade media (km/h): ");
    scanf("%f", &velocidadeMedia);

    distancia = tempo * velocidadeMedia;
    litrosUsados = distancia / 12.0;

    printf("\ndistancia percorrida: %.2f km\n", distancia);
    printf("litros usados: %.2f", litrosUsados);
}

void exercicio19(){
    float salario, conta1, conta2, totalContas, resto;

    printf("digite o salario: ");
    scanf("%f", &salario);

    printf("digite o valor da primeira conta: ");
    scanf("%f", &conta1);

    printf("digite o valor da segunda conta: ");
    scanf("%f", &conta2);

    totalContas = (conta1 * 1.02) + (conta2 * 1.02);
    resto = salario - totalContas;

    printf("valor total contas: %.2f\n", totalContas);
    printf("restara: %.2f", resto);
}

void exercicio20(){
    float r1, r2, serie, paralelo;

    printf("digite a resistencia 1 (ohms): ");
    scanf("%f", &r1);

    printf("digite a resistencia 2 (ohms): ");
    scanf("%f", &r2);

    serie = r1 + r2;
    paralelo = (r1 * r2) / (r1 + r2);

    printf("resistencia em serie: %.2f ohms\n", serie);
    printf("resistencia em paralelo: %.2f ohms", paralelo);
}