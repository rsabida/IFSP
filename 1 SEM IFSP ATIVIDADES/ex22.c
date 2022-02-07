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

/*Crie um laço que receba números inteiros e os imprima com três diferentes tamanhos de campo: 2, 5 e 10. Encerre quando o número for 999.Testar com números positivos e negativos*/

#include <stdio.h>

int main(void){

    int numero = 0;

    while(numero != 999){
        
        printf("\n\tDigite um nu'mero inteiro: ");
        scanf("%d", &numero);
        if(numero == 999)
            break;

        printf("\tTamanho de campo 2: %2d\n\tTamanho de campo 5: %5d\n\tTamanho de campo 10: %10d\n", numero, numero,numero);
    }
    

    return 0;

}