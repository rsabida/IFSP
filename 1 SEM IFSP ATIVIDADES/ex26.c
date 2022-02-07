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

//Faça um programa que pergunte "Digite N: ", calcule a soma dos quadrados dos N primeiros números inteiros, começando em 1, e imprima esta soma, precedida de "A soma dos quadrados e' ". Siga exatamente o modelo dos exemplos.

#include <stdio.h>

int main(void){

    int n = 0;
    int soma = 0;

    printf("\tDigite N: ");
    scanf("%d", &n);

    for(int cont = 1; cont <= n; cont++){

        soma += (cont*cont);

    }

    printf("\n\tA soma dos quadrados e' %d", soma);

    return 0;

}