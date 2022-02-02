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

//Faça um programa que pergunte 3 números ao usuário, "a: ", "b: " e "c: ", e depois imprima-os em ordem crescente, na mesma linha e separados por espaços. Considere que não serão digitados valores iguais.

#include <stdio.h>

int main(void){

    int a = 0, b = 0, c=0;
    int maior=0, menor=0, meio=0;
    
    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    printf("c");
    scanf("%d", &c);

    if (a > b && a > c){
        maior = a;
        if(b > c){
            meio = b;
            menor = c;
        } else {
            meio = c;
            menor=b;
        }
    } else if(b > a && b > c){
        maior = b;
        if(a > c){
            meio = a;
            menor = c;
        } else{
            meio = c;
            menor = a;
        }
    } else if (c > a && c>b){
        maior = c;
        if(b > a){
            meio = b;
            menor =a;
        }else{
            meio = a;
            menor = b;
        }
    }

    printf("%d - %d - %d ", menor, meio,maior);

    return 0;
}