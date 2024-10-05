#ifndef ALUMNO_H
#define ALUMNO_H
#include<iostream>
using namespace std;

class Alumno{
    private:
        string nombreCarrera;

    public:
        Alumno(string nomCar){
            nombreCarrera = nomCar;
        }

        void setNombreCarrera(string nom){
            nombreCarrera = nom;
        }

        string getNombreCarrera(){
            return nombreCarrera;
        }

        void mostrarDatos(){
            cout<<"Nombre Carrera: "<<nombreCarrera<<endl;
        }
};
#endif