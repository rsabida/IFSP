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
//Escreva um programa em C que leia um valor correspondente ao número de jogadores de um time de vôlei. O programa deverá ler uma altura para cada um dos jogadores e, ao final, informar a altura média do time.

#include <stdio.h>

int main(void){

    int quantJogadores = 0;
    float altura = 0, soma=0, medAltura=0;

    printf("Informe a quantidade de jogadores do time: \n");
    scanf("%d", &quantJogadores);

    for(int cont=0; cont < quantJogadores; cont++){
        printf("\nInforme a altura do jogador %d ", cont+1);
        scanf("%f", &altura);
        soma+=altura;
    }

    medAltura = soma/quantJogadores;

    printf("\nAltura media do time: %g", medAltura);

    return 0;

}