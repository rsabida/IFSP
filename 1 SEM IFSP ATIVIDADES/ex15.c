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
//Faça um programa que pergunte: "Digite N: ", calcule o fatorial de N e imprima: "O fatorial de {n} e' {fatorial}". Veja os exemplos. Use números inteiros. Dica: você pode calcular o fatorial tanto na ordem crescente, 1 * 2 * 3 * 4, quanto na ordem decrescente, 4 * 3 * 2 * 1. Multiplicar por 1 é opcional, mas tem que funcionar também para o fatorial de zero, que é igual a 1.

#include <stdio.h> //inclusão de biblioteca

int main(void){ //definindo como main

    int n = 0, fatorial =1; // criando variáveis
    

    printf("Digite N "); // escrevendo 
    scanf("%d", &n); //recebendo um valor

    for(int cont = 1; cont <= n; cont++){
        fatorial *= cont; //multiplica valor de fatorial por cont e guarda o resultado em fatorial
    }
    printf("O fatorial de {%d} e' %d", n, fatorial);

    return 0; // retorna 0

}