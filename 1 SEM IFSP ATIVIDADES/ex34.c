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

/*3) Dados dois vetores x e y, ambos com 5 elementos inteiros, determinar o produto escalar desses vetores. Crie um terceiro vetor resp para armazenar as multiplicações e na sequência realize a soma desse vetor e escreva o resultado.

vx[1][2][2][4][5]

vy[3][2][1][5][6]

Cálculo realizado:

[1*3]+[2*2]+[2*1]+[4*5]+[5*6] = 

[3]+[4]+[2]+[20]+[30] = 59

Conteúdo do vetor resp após os cálculos = [3][4][2][20][30] */

#include <stdio.h>
#define TAM 5

int main(void){

    int x[TAM], y[TAM], resp[TAM],soma=0;

    for(int cont =0; cont < 5; cont++){

    printf("Insira o valor da posicao %d do vetor x: ", cont+1);
    scanf("%d", &x[cont]);

    }

    printf("\n");

    for(int cont =0; cont < TAM; cont++){

    printf("Insira o valor da posicao %d do vetor y: ", cont+1);
    scanf("%d", &y[cont]);

    }

    for(int cont =0; cont < TAM; cont++){

        resp[cont] = x[cont]*y[cont];
        soma += resp[cont];

    }

    printf("Resultado: %d", soma);

    return 0;

}