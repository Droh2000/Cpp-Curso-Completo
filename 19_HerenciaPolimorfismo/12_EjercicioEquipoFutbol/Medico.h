#include<iostream>
#include "Persona.h"
using namespace std;

class Medico : public Persona{
    private:
        string titulacion;
        int aniosExperiencia;

    public:
        Medico(string nombre, string apellido, int edad, int aniosExperiencia, string titulacion) : Persona(nombre, apellido, edad){
            this->titulacion = titulacion;
            this->aniosExperiencia = aniosExperiencia;
        }

        ~Medico(){}

        void partidoFutbol(){
            cout<<"Medico Curando"<<endl;
        }

        void entrenamiento(){
            cout<<"Medico Vigilando"<<endl;
        }

        void curarLesion(){
            cout<<"Curando Lesion"<<endl;
        }

        string getTitulacion(){
            return titulacion;
        }

        int getAniosExperiencia(){
            return aniosExperiencia;
        }
};