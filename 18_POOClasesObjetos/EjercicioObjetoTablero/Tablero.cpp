#include "Tablero.h"


void Tablero::moverArriba(int n){
    y += n;
}

void Tablero::moverAbajo(int n){
    y-=n;
}

void Tablero::moverIzquierda(int n){
    x-=n;
}

void Tablero::moverDerecha(int n){
    x+=n;
}

int Tablero::getX(){
    return x;
}

int Tablero::getY(){
    return y;
}