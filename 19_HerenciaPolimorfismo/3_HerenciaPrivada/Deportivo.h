#include<iostream>
#include "Carro.h"

using namespace std;

class Deportivo : private Carro{
    // Ahora todo lo publico de la clase padre sera ahora privado
    // y ademas lo que esta privado del padre, no se hereda y sin inaccesibles
    private:
        int cilindros;

    public:
        Deportivo(string marca, string color, string modelo,int cilindros) : Carro(marca, color, modelo){
            this->cilindros = cilindros;
        }

        ~Deportivo(){}

        int getCilindros(){
            return cilindros;
        }

        // Para usar los metodos que ahora son privados de la clase padre
        // Como es privado lo podemos acceder por metodos de la misma clase
        string verMarca(){
            return getMarca();
        }

};
