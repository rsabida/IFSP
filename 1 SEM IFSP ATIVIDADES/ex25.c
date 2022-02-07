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

// Escreva um programa em C que leia 50 valores digitados pelo usuário e mostre o maior e o menor valor informado. 

#include <stdio.h>

int main(void){

    int valor = 0;
    int maior = 0;
    int menor = 0;

    for(int cont = 0; cont < 5; cont++){

        printf("\tInforme um valor inteiro: ");
        scanf("%d", &valor);

        if(cont == 0){
            maior = valor;
            menor = valor;
        } 
        if(valor > maior){
            maior = valor;
        }
        if(valor < menor){
            menor = valor;
        }

    }

    printf("\n\tMaior valor inserido: %d\n\tMenor valor inserido: %d", maior, menor);

    return 0;

}