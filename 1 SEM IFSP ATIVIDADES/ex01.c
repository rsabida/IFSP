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

/*Faça um programa em C que pergunte duas notas ao usuário e imprima a sua média, usando o formato "%g". Siga exatamente o modelo do exemplo. Declare seu main como:int main(void)e coloque um return 0; no final.*/
#include <stdio.h>

int main(void){

    float numb1 = 0;
    float numb2 = 0;

    printf("Informe a primeira nota: ");
    scanf("%f", &numb1);
    printf("\nInforme a segunda nota: ");
    scanf("%f", &numb2);

    printf("\nA media final e: %g", (numb1+numb2)/2);

    return 0;

}