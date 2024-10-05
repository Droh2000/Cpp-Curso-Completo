#include "Cuadrilatero.h"

int Cuadrilatero::area(){
    return lado1 * lado2;
}

int Cuadrilatero::perimetro(){
    return (lado1 + lado2)*2;
}