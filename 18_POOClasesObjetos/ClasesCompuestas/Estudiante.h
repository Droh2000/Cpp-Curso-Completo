#include<iostream>
#include<string>
#include "Expendiente.h" // Esta clase va a usar la clase Expendiente
#include "Direccion.h"
using namespace std;

// Esta clase Estudiante es una clase compuesta
// Los objetos de las otras clases que usa pueden estar entre sus atributos o entre sus metodos
class Estudiante{
    private:
        string codigo;
        float promedio;
        Expediente exp; // Objeto del tipo de clase
        Direccion dir;

    public:
        /*
            En el constructor tambien debemos de inicializar los atributos que puedan venir de los objetos
            de las otra clases que tenemos aqui, porque cuando creemos un objeto dentro del metodo main,
            de ese objeto al unico constructor que vamos a llamar sera el de Estudiante porque
            dentro de este ya tenemos los otros objetos incluidos.

            Dentro debemos inicializar el constructor de los objetos
            Entonces en los argumentos que recibe el constructor le especificamos los argumentos que reciben 
            el contructor de los objetos de las otras clases

            Pero para inicializar los objetos de las otras clases ponemos despues de los parenteisis los dos puntos
            y le indicamos que los objetos que tienen en los argumentos lo vamos a rellenar con el artributo indicado
            Con esto C++ ya sabe que se tiene que ir a la clase y llamar al constructor correspondiente de esa clase

        */
        Estudiante(string codigo, float promedio, int numExpe, string direccion) : exp(numExpe), dir(direccion){
            this->codigo=codigo;
            this->promedio=promedio;

        }

        void mostrarDatos(){
            cout<<"Codigo: "<<codigo<<endl;
            cout<<"Promedio: "<<promedio<<endl;
            // Asi accedemos a los valores de los objetos tipo clase que es accediendo a sus metodos no a sus atributos porque son privados
            cout<<"Numero de Expendiente: "<<exp.getNumExpe()<<endl;
            cout<<"Direccion: "<<dir.getDireccio();
        }

};