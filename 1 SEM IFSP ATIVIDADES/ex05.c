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

/**Faça um programa em C que leia a idade de uma pessoa expressa em anos, meses e dias e imprima a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias. Pergunte apenas: "Anos de idade: ", "Meses: " e "Dias: " e imprima "Idade em dias: " seguida do número de dias.*/

#include <stdio.h>

int main(void){

    int idade = 0;
    int meses = 0;
    int dias = 0;

    printf("Informe sua idade: \n");
    scanf("%d", &idade);
    printf("Meses: \n");
    scanf("%d", &meses);
    printf("Dias: \n");
    scanf("%d", &dias);

    printf("Quantidade de dias que vc já viveu: %d", (idade*365)+(meses*30)+dias);

    return 0;

}