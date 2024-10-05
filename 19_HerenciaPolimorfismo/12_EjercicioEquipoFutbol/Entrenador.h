#include<iostream>
#include "Persona.h"
using namespace std;

class Entrenador : public Persona{
    private:
        string estrategia;

    public:
        Entrenador(string nombre, string apellido, int edad, string estrategia) : Persona(nombre, apellido, edad){
            this->estrategia = estrategia;
        }

        ~Entrenador(){}

        void partidoFutbol(){
            cout<<"Entrenador vigilando"<<endl;
        }

        void entrenamiento(){
            cout<<"Entrenador Entrenando"<<endl;
        }

        void planificarEstrategia(){
            cout<<"Cambiando de estrategia"<<endl;
        }

        string getEstrategia(){
            return estrategia;
        }
};