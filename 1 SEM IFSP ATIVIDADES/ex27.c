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

    float altura = 0, peso = 0, maiorPeso=0, alturaMaiorPeso=0; 
    int numero = 1, cont =1;

    while (cont <= 3){

        printf("Altura da pessoa {%d}: ", cont);
        scanf("%f", &altura);
        printf("Peso da pessoa {%d}:", cont);
        scanf("%f", &peso);

        if(numero == 1){
            alturaMaiorPeso = altura;
            maiorPeso = peso;
            numero = cont;
        } else if(peso > maiorPeso){
            alturaMaiorPeso = altura;
            maiorPeso = peso;
            numero = cont;
        }
        cont++;
    }

    printf("\tPeso: %g, altura %g, numero de ordem: %d", maiorPeso, alturaMaiorPeso, numero);

    return 0;

}