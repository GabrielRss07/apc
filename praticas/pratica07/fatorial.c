#include <stdio.h>

int main (){
    int numero;
    int fatorial;
    fatorial = 1;
    scanf("%i", &numero);

    for(int i=numero; i>0; i--) {
        fatorial = fatorial * i;

}

printf("Numero eh %i e fatorial %i", numero, fatorial);


    return 0;
}