#include<iostream>
#include "Felino.h"
using namespace std;

class GatoDomestico : public Felino{
    private:
        string nombreDuenio;

    public:
        GatoDomestico(int anioNacimiento, string lugarNacimiento, string raza, string nombreDuenio) : Felino(anioNacimiento,lugarNacimiento,raza){
            this->nombreDuenio = nombreDuenio;
        }

        string imprimirDieta(){
            return "Come Wiskas";
        }

        void setNombreDuenio(string nom){
            nombreDuenio = nom;
        }

        string getNombreDuenio(){
            return nombreDuenio;
        }
};