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

//Escreva um programa que, repetidamente, pergunte ao usuário: "Graus F: ", receba uma temperatura em graus Fahrenheit, calcule o equivalente em graus Celsius e o imprima, sem outra palavra ou abreviatura. A temperatura em graus Celsius é calculada assim: C = (F - 32) * 5/9. Interrompa o programa quando for digitada uma temperatura abaixo do zero absoluto, que é -459,67°F. Neste caso, não imprima o equivalente em Celsius. Confira os exemplos antes de montar seus prints.

#include <stdio.h>

int main(void){

    float Fahrenheit = 0, Celsius =0;
    int x = 0;

    while(x == 0){
        printf("\nGraus F: ");
        scanf("%g", &Fahrenheit);
        if(Fahrenheit <= -459.67){
            break;
        }
        Celsius = (Fahrenheit - 32) * 5/9;
        printf("%gC\n", Celsius);
    }

    return 0;

}