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

//Faça uma função int fatorial(int n) que receba um inteiro n e retorne o fatorial de n.

#include <stdio.h>

int fatorial(int n){

    int res=1;

    for(int cont = 1; cont <= n; cont++){

        res *= cont;

    }

    return printf("o fatorial de %d e' %d",n, res);

}

int main(void){

    int inteiro=0;
    printf("Digite um valor inteiro: ");
    scanf("%d", &inteiro);

    fatorial(inteiro);

    return 0;

}