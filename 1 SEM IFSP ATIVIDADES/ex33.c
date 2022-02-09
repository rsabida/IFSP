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

//Faça um programa que permita calcular uma progressão aritmética. Para isso, crie um vetor de 100 posições e inicialize cada uma delas com o valor 0. Na sequência, solicite ao usuário os valores elememtoinicial (a1), numeroelementos (n) e razao (r). Por fim, construa um vetor com esta progressão. A regra de formação de cada elemento é ai = a(i-1) + r. Ao final, imprima o vetor.

#include <stdio.h>

int main(void){

  int vet[100];
  int a1=0, n=0, r=0, ai=0;
    
  for(int cont =0; cont<100; cont++){

    vet[cont] = 0;

  }

  printf("Valor elemento inicial: ");
  scanf("%d", &a1);
  printf("Numero de elementos: ");
  scanf("%d", &n);
  printf("Razao: ");
  scanf("%d", &r);


  for(int cont =1; cont <=n;cont++){

    ai = a1 + (cont - 1)*r;
    vet[cont-1] = ai;
  }

  printf("(");
  for(int cont = 0; cont <n; cont++){

    printf(" %d ", vet[cont]);

  }
  printf(")");


  return 0;

}