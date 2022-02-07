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

//Declare um vetor de 10 posições e o preencha com os 10 primeiros números impares e imprima.

#include <stdio.h>
#define TAM 10

int main(void){

    int vet[TAM], impar=1;

    for(int cont =0; cont < 10; cont++){
        vet[cont] = impar;
        impar += 2;
    }

    for(int cont = 0; cont < 10; cont++){
        printf("[%d] - ", vet[cont]);
    }

    return 0;

}
