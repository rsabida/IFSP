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

/**Leia 3 valores inteiros (%d) (considere que não serão informados valores iguais) e escreva o maior valor entre eles.
*/

#include <stdio.h>

int main(void){

    int x[3];
    int maior = 0;

    for(int z = 0; z < 3; z++){
        printf("Digite o valor da posicao %d \n", z+1);
        scanf("%d", &x[z]);
    }

    if(x[0] > x[1] && x[0] > x[2]){
        maior = x[0];
    }else if(x[1] > x[0] && x[1] > x[2]){
        maior = x[1];
    } else if(x[2] > x[0] && x[2] > x[1]){
        maior = x[2];
    }    

    printf("O maior valor inserido: %d", maior);

    return 0;
}
