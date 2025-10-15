#include <stdio.h>

int main (){
    
    int numero1;
    int numero2;

    scanf("%i %i", &numero1, &numero2);
    printf("%i eh igual %i? %i\n", numero1, numero2, numero1 == numero2);
    printf("%i eh diferente %i? %i\n", numero1, numero2, numero1 != numero2);
    printf("%i eh menor que %i? %i\n", numero1, numero2, numero1 < numero2);
    printf("%i eh menor ou igual a %i? %i\n", numero1, numero2, numero1 <= numero2);
    printf("%i eh maior que %i? %i\n", numero1, numero2, numero1 > numero2);
    printf("%i eh maior ou igual a %i? %i\n", numero1, numero2, numero1 >= numero2);






    return 0;
}