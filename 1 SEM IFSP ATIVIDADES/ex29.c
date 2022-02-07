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

/*Faça um programa que seja uma calculadora. Pergunte ao usuário o número A, o número B e um número que indica qual a operação que você deseja executar. Faça uma função para cada operação:
•1: Operação somar; assinatura : double somar(double x, double y);
•2: Operaçã subtratir: assinatura : double subtrair(double x, double y);
•3: Operação multiplicar: assinatura : double multiplicar(double x, double y);
•4: Operação dividir: assinatura : double dividir(double x, double y);
•5: Operação área do círculo (A=PI*R^2): assinatura : double areacirculo (double R);
     (Neste caso considere o número A como o raio e ignore o número B).
•0: Operação sair do programa;
•6: Outro número qualquer: Operação não encontrada: assinatura : void opcaoinvalida( void);
A função opcaoinvalida() deve escrever na tela a seguinte mensagem: “OPÇÃO NÃO ENCONTRADA”.*/

#include <stdio.h>
#include <math.h>

int somar(int x, int z){
    printf("%d + %d = ", x,z);
    return x + z;
}

int subtrair(int x, int z){
    printf("%d - %d = ", x,z);
    return x - z;
}

int multiplicar(int x, int z){
    printf("%d x %d = ", x,z);
    return x * z;
}

int dividir(int x, int z){
    printf("%d / %d = ", x,z);
    return x / z;
}

int areaCirculo(int x){
    return printf("A = 3,14159 ... * x^2 = %d", 3.14159265359 * pow(x, 2));
}

int opcaoinvalida(){
    return printf("OPCAO N ENCONTRADA");
}

int main(void){

    int a=0, b=0, operacao =0, res=0;
    printf("\tInforme o valor de A: ");
    scanf("%d", &a);
    printf("\tInforme o valor de B: ");
    scanf("%d", &b);

    printf("\n------------------------------\n\tMenu de operações\n1 = Somar\n2 = Subtrair\n3 = Multiplicar\n4 = Dividir\n5 = Area do circulo");
    printf("\nDigite o numero da operacao escolhida: ");
    scanf("%d", &operacao);

    switch(operacao){
        case 1:
            res = somar(a,b);
            printf("%d", res);
            break;
        case 2: 
            res = subtrair(a,b);
            printf("%d", res);
            break;
        case 3: 
            res = multiplicar(a,b);
            printf("%d",res);
            break;
        case 4: 
            res = dividir(a,b);
            printf("%d", res);
            break;
        case 5: 
            areaCirculo(a);
            break;
    }        

    if(operacao > 5){
        opcaoinvalida();
    }

    return 0;

}