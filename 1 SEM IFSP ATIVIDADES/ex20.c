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

//Ingressos para o cinema: Um cinema cobra preços diferentes para os ingressos de acordo com a idade de uma pessoa. Se uma pessoa tiver menos de 3 anos de idade, o ingresso será gratuito; se tiver entre 3 e 12 anos, o ingresso custará 10 reais; se tiver 13 anos ou mais, o ingresso custará 15 reais. Escreva um laço em que você pergunte a idade aos usuários, calcule e imprima o preço de cada ingresso em formato "%g". Encerre a entrada de dados quando for digitada uma idade negativa. Então imprima o total arrecadado (%g) e o número de ingressos vendidos de cada tipo. Siga os exemplos.

#include <stdio.h>

int main(void){

    int idade = 0, gratuito=0, meia=0, inteira=0;
    float totalArrecadado=0;

    while(idade>=0){

        printf("\nIdade: ");
        scanf("%d", &idade);
        if(idade < 0){
            break;
        }
        if(idade < 3){
            gratuito++;
        } else if( idade <= 12){
            totalArrecadado = totalArrecadado + 10;
            meia++;
        } else{
            totalArrecadado = totalArrecadado + 15;
            inteira++;
        }

    }

    printf("*****************************\nValor total das vendas: %.2f\nQuantidade de ingressos vendidos do tipo gratuito: %d\nQuantidade de ingressos vendidos do tipo meia: %d\nQuantidade de ingressos vendidos do tipo inteira: %d", totalArrecadado, gratuito,meia, inteira);

    return 0;
}