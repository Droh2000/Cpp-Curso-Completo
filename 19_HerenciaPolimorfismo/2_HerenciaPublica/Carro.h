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