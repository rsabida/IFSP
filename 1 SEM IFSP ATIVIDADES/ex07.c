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

/**Escreva um programa que pergunte ao usuário: "Graus F: ", receba uma temperatura em graus Fahrenheit, calcule o equivalente em graus Celsius e o imprima em formato %g, sem outra palavra ou abreviatura.

A temperatura em graus Celsius é calculada assim:

C = (F - 32) * 5.0/9.0*/

#include <stdio.h>

int main(void){

    float grausF = 0;

    printf("Graus F: \n");
    scanf("%f", &grausF);


    printf("%g", (grausF-32)*5/9);

    return 0;

}