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

//Crie um programa que leia a altura e o peso de 5 pessoas e apresente qual a pessoa mais pesada e a altura dela. As perguntas devem ser: "Altura da pessoa {n}: " e "Peso da pessoa {n}:\n", onde {n} é o número de ordem da pessoa. Note o '\n' no final, somente do peso. A resposta deve ser: "A pessoa mais pesada e' a de numero {n}, com altura {altura}". Use altura e peso em ponto flutuante e formatação "%g". Se forem digitadas pessoas com o mesmo peso, e maior do que o das restantes, qualquer delas poderá ser impressa.

#include <stdio.h>

int main(void){

    float altura = 0, peso = 0, maisPesada=0, maisAltura=0; 
    int numero =0;

    for(int cont = 0; cont < 5; cont++){
        printf("Altura da pessoa {%d}: ", cont+1);
        scanf("%g", &altura);
        printf("Peso da pessoa {%d}: ", cont+1);
        scanf("%g", &peso);
        if(cont == 0){
            maisPesada = peso;
            maisAltura = altura;
            numero = cont+1;
        } else if (maisPesada < peso){
            maisPesada = peso;
            maisAltura = altura;
            numero = cont+1;
        }
    }
    printf("A pessoa mais pesada e' a de numero %d, com altura %g", numero, maisAltura);

    return 0;

}