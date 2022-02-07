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

/*Em um laço percorrendo números de 1 a 9, calcule seus inversos e os imprima com 0, 2, 4 e 7, casas decimais. Omita o tamanho do campo */

#include <stdio.h>

int main(void){

    float um = 1;

    for(int cont = 1; cont <= 9; cont ++){

        printf("\n%f\n%.2f\n%.4f\n%.7f\n%d", um/cont, um/cont, um/cont, um/cont, cont );

    }

    return 0;

}