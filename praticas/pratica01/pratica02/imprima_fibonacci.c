#include <stdio.h>

int main () {
    printf("%20i %i\n", 1, 1 );
    printf ("%19i %i %i\n", 1, 2, 1);
    printf ( "%17i %i %i %i %i\n", 1, 2, 3, 2, 1);
    printf("%15i %i %i %i %i %i %i\n", 1, 2, 3, 5, 3, 2, 1);
    printf ("%13i %i %i %i %i %i %i %i %i\n", 1, 2, 3, 5, 8, 5, 3, 2, 1);

    return 0;
}