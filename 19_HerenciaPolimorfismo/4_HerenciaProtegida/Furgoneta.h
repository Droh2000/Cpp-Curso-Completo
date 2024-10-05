#include <iostream>
#include "Carro.h"

using namespace std;

class Furgoneta : protected Carro{

    private:
        int carga;

    public:
        Furgoneta(string marca, string color, string modelo,int carga) : Carro(marca, color, modelo){
            this->carga = carga;
        }

        int getCarga(){
            return carga;
        }

        // Para poder obtener algo de los metodos protegidos
        string obtenerColor(){
            return getColor();
        }

};