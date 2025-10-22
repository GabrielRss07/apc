#include <stdio.h>

int main () {
    int numero = 0;

    printf("Entre com um numero inteiro de 1 a 10: ");
    scanf("%i", &numero);

    while (numero < 1 || numero > 10) {
        printf("Numero deve estar entre 1 e 10!\n");
        printf("Tente novamente: ");
        scanf("%i, &numero");
    }

    printf("Voce digitou um numero valido!\n");



    return 0;
}