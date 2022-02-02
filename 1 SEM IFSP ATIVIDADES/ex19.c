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

/*Faça uma pesquisa entre os habitantes de uma região. Pergunte "Idade: ", "Sexo 1=F 2=M: " e "Salario:\n" (Note o "\n" só após o salário). Faça um programa que pergunte os dados ao usuário na ordem acima e informe:

    a média salarial do grupo, em formato "%.2f";
    a maior e a menor idade do grupo;
    a quantidade de mulheres com salário até R$ 1000,00.

Encerre a entrada de dados quando for digitada uma idade negativa. Use as mensagens e o formato dos exemplos.

Obs: M significa "Masculino" e não "Mulher"*/

#include <stdio.h>

int main(void){

    int idade =0, maiorIdade=0, menorIdade=0, quantidadePessoas=0, genero=0, mulheresSalario=0;
    float salario = 0, somaSal=0;
    
    while(idade >= 0){

        printf("\nIdade: ");
        scanf("%d", &idade);
        if(idade < 0){
            break;
        }
        printf("\nGenero 1=F 2=M: ");
        scanf("%d", &genero);
        printf("\nSala'rio: ");
        scanf("%f", &salario);

        if(quantidadePessoas == 0){
            menorIdade = idade;
            maiorIdade = idade;
        } else{
            if(menorIdade < idade){
                menorIdade = idade;
            }
            if(maiorIdade > idade){
                maiorIdade = idade;
            }
        }

        somaSal += salario;

        if(genero == 1 && salario <= 1000){
            mulheresSalario++;
        }

        quantidadePessoas++;
    }

    printf("a media salarial do grupo: %.2f\n", somaSal/quantidadePessoas);
    printf("a maior idade do grupo %d; a menor idade do grupo %d\n", menorIdade, maiorIdade);
    printf("a quantidade de mulheres com salario ate R$ 1000,00 e %d\n", mulheresSalario);

    return 0;

}