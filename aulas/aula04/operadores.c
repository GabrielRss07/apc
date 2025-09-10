#include <stdio.h>

int main () {

    // operadores aritmeticos
    int numero1 = 10;
    int numero2 = 20;
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = numero1 / (numero2 * 1.0);
    int resto_da_divisao = numero1 % numero2;

    printf("A soma de %i com %i eh %i\n", numero1, numero2, soma);
    printf("A subtracao de %i por %i eh %i\n", numero1, numero2, subtracao);
    printf("A multiplicao de %i com %i eh %i\n", numero1, numero2, multiplicacao);
    printf("A divisao de %i por %i eh %.1f\n", numero1, numero2, divisao);
    printf("O resto da divisao %i por %i eh %i\n", numero1, numero2, resto_da_divisao);

    //operadores incremento e decremento
    int incremento = numero1;
    int decremento = numero1;

    incremento++; //numero1 = numero1 + 1; 
    decremento--; //numero1 = numero1 - 1;
    int pre_incremento = numero1;
    int pos_incremento = numero1;

    printf("O incremento de %i eh %i\n", numero1, incremento);
    printf("O decremento de %i eh %i\n", numero1, decremento);
    printf("O pre_incremento de %i eh %i\n", numero1, ++pre_incremento);
    printf("O pos_incremento de %i eh %i\n", numero1, pos_incremento++);
    printf("O pos_incremento agora eh %i\n", pos_incremento);

    // operadores relacionais
    int menor_que = numero1 < numero2;
    int menor_ou_igual = numero1 <= numero2;
    int maior_que = numero1 > numero2;
    int maior_ou_igual = numero1 >= numero2;
    int igual = numero1 == numero2;
    int diferente = numero1 != numero2;

   // 0 - falso, 1- verdadeiro
    printf("O numero %i eh menor que %i? %i\n", numero1, numero2, menor_que);
    printf("O numero %i eh menor ou igual a %i? %i\n", numero1, numero2, menor_ou_igual);
    printf("O numero %i eh maior que %i? %i\n", numero1, numero2, maior_que);
    printf("O numero %i eh maior ou igual a %i? %i\n", numero1, numero2, maior_ou_igual);
    printf("O numero %i eh igual a %i? %i\n", numero1, numero2, igual);
    printf("O numero %i eh diferente de %i? %i\n", numero1, numero2, diferente);



    return 0;
}