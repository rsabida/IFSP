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

/**O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um programa em C para ler o custo de fábrica de um carro, calcular e imprimir o custo final ao consumidor. Perguntar "Custo de fabrica: " e imprimir "Custo final: ", seguido do custo final ao consumidor com formato %g.
*/

#include <stdio.h>

int main(void){

    float custoFabrica = 0;

    printf("Informe o valor do custo de fabrica: \n");
    scanf("%f", &custoFabrica);

    printf("Custo final: %g", (custoFabrica*0.28)+(custoFabrica*0.45)+custoFabrica);

    return 0;

}