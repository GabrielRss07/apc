#include <stdio.h>

int main (){

    int p;
    int q;
    scanf ("%i %i", &p, &q);

    printf("%i && %i = %i\n", p, q, p && q);
    printf("%i && %i = %i\n", p, q, p && q);
    printf("!%i = %i\n", p, !p);
    printf("!%i = %i\n", q, !q);


    return 0;
}