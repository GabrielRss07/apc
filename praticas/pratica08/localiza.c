#include <stdio.h>

int main()
{
    int numeros[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &numeros);
    }
    int numero;
    scanf("%i", &numero);
    int achou = -1;

    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] == numero)
        {
            achou = i;
        }
    }

    if (achou < 0)
    {

        printf("O numero não foi encontrado!\n");
    }
    else
    {
        printf("O numero foi encontado na posicao i");
    }

    return 0;
}