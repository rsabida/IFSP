/**
  *
  * @author rsabida  
  * 
  * 
  * não retire esse comentário, senão o código não roda
  * 
  *
  * feito com 💖 e 🍵
  * 
* */

/**Elabore um programa em C que efetue a apresentação do valor da conversão em real (R$) de um valor lido em dólar (US$). O programa deverá solicitar o valor da cotação do dólar e também a quantidade de dólares disponíveis com o usuário. Pergunte "Valor do dolar: " e "Quantidade de dolares: " e imprima "R$ " seguido do valor em reais, em formato %g.*/

#include <stdio.h>

int main(void){
    
    float dolar = 0;
    int quantidadeDolares = 0;

    printf("Valor do dolar em real: \n");
    scanf("%f", &dolar);
    printf("Quantidade de dolares: \n");
    scanf("%d", &quantidadeDolares);

    printf("reais: %g", dolar*quantidadeDolares);

    return 0;

}