#include <stdio.h>

int main (){

    int numero;
    scanf("%i", &numero);
    int incremento = numero;
    int decremento = numero;

    printf("O pre-incremento do numero %i eh %i\n", numero, ++incremento);
    printf("O pre-decremento do numero %i eh %i\n", numero, --decremento);
    scanf("%i", &incremento);
    scanf("%i", &decremento);

    
    printf("O pos-incremento do numero %i eh %i\n", numero, incremento++);
    printf("O pos-decremento do numero %i eh %i\n", numero, decremento--);








    return 0;
}