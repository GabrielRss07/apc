#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");

    printf("O tipo 'char' ocupa %lu byte(s) na mem�ria.\n", sizeof(char));
    printf("O tipo 'int' ocupa %lu byte(s) na mem�ria.\n", sizeof(int));
    printf("O tipo 'float' ocupa %lu byte(s) na mem�ria.\n" , sizeof (float));
    printf("O tipo 'double' ocupa %lu byte(s) na mem�ria.\n", sizeof (double));
    printf("O tipo 'void' ocupa %lu byte(s) na mem�ria.\n", sizeof (void));

    return 0;
}