/*
        Guardian de Inclusion Multiple

    Esto nos sirve para cuando tengamos que una clase padre padre tenga muchas hijas
    porque si la importamos normalmente nos dara error por referenciar muchas veses la padre

    Esto se pone en la clase que va a ser usada en multiples clases 
    y se le da el mismo nombre en mayusculas

    Asi cada vez que llamaemos esta clase con un INCLUDE ya C++ no recompila la clase desde 0 en cada llamada
    porque la compila una vez, asi la reutiliza como debe ser
*/
#ifndef CARRO_H
#define CARRAH

#include<iostream>

using namespace std;

class Carro{
    private:
        string marca;
        string color;

    protected:
        string modelo;

        string getModelo(){
            return modelo;
        }

    public:
        Carro(string marca, string color, string modelo){
            this->marca = marca;
            this->color = color;
            this->modelo = modelo;
        }

        void setColor(string c){
            color = c;
        }

        string getMarca(){
            return marca;
        }

        string getColor(){
            return color;
        }
};
#endif