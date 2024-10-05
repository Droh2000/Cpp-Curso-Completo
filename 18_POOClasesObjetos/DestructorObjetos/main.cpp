#include<iostream>
#include<stdlib.h>
#include "Perro.h"

using namespace std;

int main(){
    // Tipo estatico
    Perro p1("Max","Pastor Aleman");

    p1.mostrarDatos();
    p1.jugar();

    // Eliminamos el Objeto (Por defecto cuando termina el programa se libera la memoria)
    p1.~Perro();

    // Tipo dinamico
    Perro *p2 = new Perro("Firulais","Chalchicha");
    p2->mostrarDatos();
    p2->jugar();

    // Aqui se cambia
    delete p2;

    system("pause");
    return 0;
}