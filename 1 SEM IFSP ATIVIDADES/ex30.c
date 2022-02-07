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

//Leia um vetor de 15 posições. Contar e escrever quantos valores pares ele possui.

#include <stdio.h>
#define MAX 14

int main(void){

    int vetor[MAX], pares =0;

    for(int cont = 0; cont <=14; cont++){
        printf("Informe o valor da posicao %d: ", cont+1);
        scanf("%d", &vetor[cont]);
        if(vetor[cont]%2==0)
            pares++;
    }

    printf("Quantidade de valores pares digitados: %d", pares);

    return 0;

}