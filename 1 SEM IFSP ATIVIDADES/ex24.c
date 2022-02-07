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
//Modifique o exemplo da tabuada apresentado na aula para exibir as tabuadas do 1 ao 10.

#include <stdio.h>

int main(void){

    int fatorUM = 1;
    int fatorDois = 1;

    for(fatorUM = 1; fatorUM <= 10; fatorUM++){

        for(fatorDois = 1; fatorDois <= 10; fatorDois++){

            printf("\t%d x %2d = %2d\n", fatorUM, fatorDois, fatorDois*fatorUM);

        }

        printf("\n");

    }

    return 0;

}