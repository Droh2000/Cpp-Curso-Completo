#ifndef FELINO_H
#define FELINO_H
#include<iostream>
#include "Mamifero.h"
using namespace std;

class Felino : public Mamifero{
    private:
        string nombreCirco;

    public:
        // Para inicializarlo con el circo    
        Felino(int anioNacimiento, string lugarNacimiento, string raza, string nombreCirco) : Mamifero(anioNacimiento,lugarNacimiento,raza){
            this->nombreCirco = nombreCirco;
        }

        // Para inicializarlo con la clase hija de GatoDomestico
        Felino(int anioNacimiento, string lugarNacimiento, string raza) : Mamifero(anioNacimiento,lugarNacimiento,raza){}

        string imprimirDieta(){
            return "Se alimenta de Carne";
        }

        void setNombreCirco(string nom){
            nombreCirco = nom;
        }

        string getNombreCirco(){
            return nombreCirco;
        }
};
#endif