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

//Crie um programa que receba um único caractere e imprima o caracterenseguinte (some um ao char)

#include <stdio.h>

int main(void){

    char letra;
    printf("\tInforme uma letra: ");
    scanf("%c", &letra);

    printf("\t%c", letra+1);

    return 0;

}