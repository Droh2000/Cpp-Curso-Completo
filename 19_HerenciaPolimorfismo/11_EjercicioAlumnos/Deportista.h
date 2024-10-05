#ifndef DEPORTISTA_H
#define DEPORTISTA_H
#include<iostream>
using namespace std;

class Deportista{
    private:
        string nombreEntrenador;

    public:
        Deportista(string nomEntre){
            nombreEntrenador = nomEntre;
        }

        void setNombreEntrenador(string nom){
            nombreEntrenador = nom;
        }

        string getNombreEntrenador(){
            return nombreEntrenador;
        }

        void mostrarDatos(){
            cout<<"Nombre Entrenador: "<<nombreEntrenador<<endl;
        }
};
#endif