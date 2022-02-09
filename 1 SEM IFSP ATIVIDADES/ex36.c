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

//Imprima a string "algoritmos" caractere por caractere, porém na ordem inversa.

#include <stdio.h>

int main(void){

    char str[] = "algoritmos";
    int tam = sizeof(str);

    for(int cont =tam-2; cont >= 0; cont--){

        printf("%c", str[cont]);
        
    }

    return 0;

}