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

/**Escreva um programa em C que pergunte ao usuário: "Entre com um numero inteiro: " e escreva na tela o seu antecessor, sem qualquer mensagem. Antecessor é número que vem antes, ou seja, n - 1.*/

#include <stdio.h>

int main(void){

    int num = 0;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);

    printf("\n%d", num-1);

    return 0;

}