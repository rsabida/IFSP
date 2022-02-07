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

//Leia um vetor de 12 posições e em seguida ler também dois valores x e y correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições x e y.

#include <stdio.h>
#define TAM 12

int main(void){

    int vet[TAM], x=0, y=0;

    for(int cont =0; cont <= 11; cont++){
        printf("Infome o valor da posicao [%d]: ", cont+1);
        scanf("%d", &vet[cont]);
    }

    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y: ");
    scanf("%d", &y);

    printf("%d + %d = %d", vet[x], vet[y], vet[x]+vet[y]);

    return 0;

}