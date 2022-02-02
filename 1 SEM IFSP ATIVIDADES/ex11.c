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
/*Faça um algoritmo para ler as 3 notas obtidas por um aluno. Calcular a média de aproveitamento (média aritmética) e escrever o conceito do aluno de acordo com a tabela abaixo:
•Conceito Média
•A   >= 9.0
•B   >= 7.5 e < 9.0
•C   >= 6 e < 7.5
•D   < 6.0   

Faça a indentação corretamente.*/

#include <stdio.h>

int main(void){

    float nota[3];
    float soma = 0;
    float media =0;

    for(int x = 0; x < 3; x++){
        printf("Insira o valor da %d nota\n", x+1);
        scanf("%f", &nota[x]);
        soma+=nota[x];
    }

    media = soma / 3;
    
    if(media >= 9.0){
        printf("A");
    }else if(media >= 7.5){
        printf("B");
    }else if(media >= 6 ){
        printf("C");
    }else{
        printf("D");
    }

    return 0;

}
