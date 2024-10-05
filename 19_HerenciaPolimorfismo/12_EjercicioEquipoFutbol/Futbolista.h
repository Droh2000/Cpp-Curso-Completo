#include<iostream>
#include "Persona.h"
using namespace std;

class Futbolista : public Persona{
    private:
        int dorsal;
        string posicion;

    public:
        Futbolista(string nombre, string apellido, int edad, int dorsal, string posicion) : Persona(nombre, apellido, edad){
            this->dorsal = dorsal;
            this->posicion = posicion;
        }

        ~Futbolista(){}

        void partidoFutbol(){
            cout<<"Jugadores Jugando"<<endl;
        }

        void entrenamiento(){
            cout<<"Jugadores Entrenando"<<endl;
        }

        void entrevista(){
            cout<<"Jugadores dando entrevistas"<<endl;            
        }

        int getDorsal(){
            return dorsal;
        }

        string getPosicion(){
            return posicion;
        }
};