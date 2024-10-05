#include<iostream>
#include "Carro.h"
using namespace std;

// El modificador de acceso si no lo especificamos por defecto 
//  en C++ es como si estubieramos haciendo una herencia privada
class Turismo : public Carro{
    // Todo los publico y protegido de la clase padre se hereda como tal y lo privado no se hereda
    private:
        int numeroPuertas;

    public:
        // Se inicia con los atributos de la clase padre
        Turismo(string marca, string color, string modelo, int numeroPuertas) : Carro(marca, color, modelo){
            this->numeroPuertas = numeroPuertas;
        }

        int getNumPuertas(){
            return numeroPuertas;
        }

        // Como el metodo getModelo() es de tipo protegio y lo esamos herenda de igual forma
        // Pero si lo podemos usar en los metodos de esta clase
        string retornarModelo(){
            return getModelo();
        }
};
