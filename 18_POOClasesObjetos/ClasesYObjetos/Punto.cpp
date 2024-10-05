// Aqui definimos la logica de los metodos

// Primero importamos la clase .h
#include<Punto.h>

// Solo los metodo porque los constructores ya los definimos en la clase
// Hay que indicarle a que clase corresponde el metodo
void Punto::setX(int valorX){
    // Asingamos valor al atributo
    x = valorX;
}

void Punto::setY(int valorY){
    y = valorY;
}

int Punto::getX(){
    return x;
}

int Punto::getY(){
    return y;
}
