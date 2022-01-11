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

/**Faça um programa em C que pergunte 2 números inteiros ao 
usuário e imprima sua soma, subtração, multiplicação e 
divisão.*/

#include <stdio.h>

int main(void){

    int n1 = 0;
    int n2 = 0;

    printf("Informe o primeiro numero: \n");
    scanf("%d", &n1);
    printf("informe o segundo numero: \n");
    scanf("%d", &n2);

    printf("Soma: %d + %d = %d\nSubtracao: %d - %d = %d\nMultiplicacao: %d * %d = %d\nDivisao: %d / %d = %d", n1,n1, n1+n2, n1, n2, n1-n2, n1, n2, n1*n2, n1, n2, n1/n2);

    return 0;
}