/*
            CLASES Y OBJETOS

    Objeto:
        En programacion los  objetos deben de tener propiedades especificas, como posicion, tamano
        color, forma, textura, etc, estos definen su estado, tambien tienen ciertos comportamientos
        que los hacen diferentes a otros objetos

        Dos cosas Importantes que tienen:
            - Atributos (Caracteristicas) -> Lo que describe al objeto
            - Metodos -> Acciones o comportamientos que puede realizar el objeto
    Clase:
        Es un conjunto de objetos que comparten una estructura y comportamiento comunes
        Los objetos que se creen de la misma clase tendran los mismos atributos y metodos

        Se crea el nombre con mayuscula y en singular
            - Se le definen los atributos
            - Se le crean los metodos
        A partir de esa clase se pueden crear los objetos o instanciar objetos
    
    Se creo el archivo de cabezera "Punto.h" para crear la clase, sus constructores y solo la definicion 
    de los metodos, porque los metodos los definimos en el archivo "Punto.cpp" donde importamos el archivo 
    de la clase y definimos las acciones de los metodos
    
*/

#include<iostream>
// CREACION DE OBJETOS
// Le decimos de donde vamos a tomar los datos entre comillas (Asi le decimos que tome en cuenta esa clase)
#include"Punto.h"

using namespace std;

int main(int argc, char** argv){
    // Creacion de Objeto Estatico
    // Dentro de los () le pasamos los datos de los atributos
    Punto p1(2,1);

    // Acceder a todo los public (Metodos)
    cout<<"El valor de X: "<<p1.getX()<<endl;
    cout<<"El valor de Y: "<<p1.getY()<<endl;

    // Creacion de Objeto de Forma Dinamica
    // Usamos cualquiera de los dos constructores
    Punto* p2  = new Punto();

    // Cambiamos los atributos inicializados en 0 por ese contructor
    // Para lo dinamico se usa en todo la flecha
    p2->setX(5);
    p2->setY(6);

    cout<<"El valor de X es: "<<p2->getX()<<endl;
    cout<<"El valor de Y es: "<<p2->getY()<<endl;

    return 0;
}