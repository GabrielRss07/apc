#include <stdio.h>

int main (){
    float valor_bruto;
    float valor_desconto;
    scanf("%f", &valor_bruto);

    if(valor_bruto <= 100.0f){
        valor_desconto = valor_bruto * 0.01f;

    }else {
          if(valor_bruto <= 500.0f){
            valor_desconto = valor_bruto * 0.05f;
          }
          else {
            valor_desconto = valor_bruto * 0.1f;
          }

    }

      printf(" O valor bruto eh %.2f logo o valor do desconto sera %.2f", valor_bruto, valor_desconto);
    
    



    return 0;
}