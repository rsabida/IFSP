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

// Escreva uma função double dist( double x, double y) que receba duas coordenadas cartesianas x e y e retorne a distância até a origem, ou módulo = √(x²+y²).

#include <stdio.h>
#include <math.h>

double dist( double x, double y){

    double rest = sqrt(pow(x,2)+pow(y,2));

    return printf("raiz(%g^2+%g^2) = %.3g", x, y, rest);
}

int main(void){

    double a = 2, b = 6;

    dist(a,b);

    return 0;
}