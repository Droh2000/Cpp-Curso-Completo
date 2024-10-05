#include<iostream>

using namespace std;

class Vehiculo{
    private:
        string marca;
        string modelo;
        float precio;

    public:
        Vehiculo(){}

        // Como va a ser un arreglo de objetos por defecto no tomara este constructor
        Vehiculo(string marca, string modelo, float precio){
            this->marca=marca;
            this->modelo=modelo;
            this->precio=precio;
        }

        ~Vehiculo(){} // Este se pone porque sino nos da error al poner con el Delete porque vamos a usar un arreglo

        void setMarca(string);
        void setModelo(string);
        void setPrecio(float);
        string getMarca();
        string getModelo();
        float getPrecio();

        // Metodo Estatico
        // Para pasarle el arreglo de la clase y nos determine cual de todo tiene el menor precio
        // Nos va a retornar el indice del arreglo del mas barato
        static int indiceBarato(Vehiculo v[], int tam);
};