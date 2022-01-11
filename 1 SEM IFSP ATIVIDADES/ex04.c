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

/**Escreva um programa em C que faça duas perguntas ao usuário: "Base do retangulo: " e "Altura do retângulo: ". Depois calcule e imprima a área do retângulo, formatada como %g, sem qualquer mensagem.*/

#include <stdio.h>

int main(void){

    float baseRetangulo = 0;
    float alturaRetangulo = 0;

    printf("Base do retangulo: \n");
    scanf("%f", &baseRetangulo);
    printf("Altura do retângulo: \n");
    scanf("%f", &alturaRetangulo);

    printf("%g", baseRetangulo*alturaRetangulo);

    return 0;

}