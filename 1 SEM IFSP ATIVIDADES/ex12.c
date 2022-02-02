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
//Escreva um programa em C que leia 20 números digitados pelo usuário e exiba quantos números são maiores do que 8.

#include <stdio.h>

int main(void){

    int x = 0;
    int maior = 0;

    for(int cont = 0; cont < 20; cont++){
        printf("Insira um valor: \n");
        scanf("%d", &x);
        if(x > 8){
            maior++;
        }
    }

    printf("A quantidade de numeros inseridos maiores que oito e de %d", maior);

    return 0;

}
