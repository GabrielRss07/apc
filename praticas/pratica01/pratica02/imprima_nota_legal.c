#include <stdio.h>

int main () {
    printf("======================================");
    printf("\n%28s", "N O T A  L E G A L");
    printf("\n======================================");
    printf("\n%s \t%s \t%s", "Produto", "Qtd", "Valor unit");
    printf("\n%s \t%03i \t%.2f", "Camiseta", 2, 39.99);
    printf("\n%s \t\t%03i \t%.2f", "Calca", 1, 89.90);
    printf("\n%s \t%03i \t%.2f", "Meia Social", 3, 19.99);
    printf("\n======================================");
    printf("\n%s \t\t\t%.2f", "Total:", 229.85);


    return 0;
}