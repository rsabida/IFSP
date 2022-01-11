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

/**Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total.
*/

#include <stdio.h>

int main(void){

    float salarioFixo = 0;
    float vendaEfetuadas = 0;
    float x = 150000;

    printf("Informe o salario: \n");
    scanf("%f", &salarioFixo);
    printf("Informe o valor das vendas efetuadas: \n");
    scanf("%f", &vendaEfetuadas);

    if( vendaEfetuadas < 1500.00){
        printf("Salario = R$%g", salarioFixo+(vendaEfetuadas*0.03));
    }else{
        printf("Salario = R$%g", 
        salarioFixo+(x*0.03)+(x-vendaEfetuadas*0.05));
    }


    return 0;

}