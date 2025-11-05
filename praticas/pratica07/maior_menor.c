#include <stdio.h>

int main(){
  int numero;
  int maior;
  int menor;
  scanf("%i", &numero);

  while(numero != 0) {
   if (numero > maior) {
   maior = numero;
}
if (numero < menor) {
   menor = numero;
}
scanf("%i", &numero);

}
printf("%i\n", maior);
printf("%i\n", menor);


    return 0;
}