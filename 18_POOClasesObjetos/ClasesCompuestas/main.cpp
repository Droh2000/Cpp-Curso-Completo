/*
    Una clase compuesta es aquella que entre sus atributos tienen objetos de otra clase

*/
#include<iostream>
#include<stdlib.h>
#include "Estudiante.h"

using namespace std;

int main(){
    Estudiante *e1 = new Estudiante("34FFG",8.5,899,"Calle 5 de abril");

    e1->mostrarDatos();

    delete e1;

    system("pause");
    return 0;
}