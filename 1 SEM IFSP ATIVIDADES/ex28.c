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

//Faça um programa que pergunte "Digite N: ", calcule e mostre os N primeiros termos da sequência de Fibonacci (0, 1, 1, 2 , 3, 5, 8, ...). Esta sequência de números inteiros inicia com 0 e 1, e cada termo seguinte é a soma dos dois anteriores. O valor lido para N sempre será maior ou igual a 2. A saída deve ser somente a sequência, na forma dos exemplos. Para que a próxima impressão continue na mesma linha, omita o '\n' ao final do printf.

#include <stdio.h> 

int main(void){

    int n = 0, soma  = 0, numero = 0 , anterior =1;
    printf("Digite N: ");
    scanf("%d", &n);

    printf(" 0   1  ");

    for(int cont = 0; cont <= n; cont++){

        soma = numero + anterior; 
        printf(" %d  ", soma);
        numero = anterior;
        anterior = soma;

    }

    return 0;

}