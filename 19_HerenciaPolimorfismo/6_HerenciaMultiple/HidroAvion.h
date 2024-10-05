#include<iostream>
#include "Barco.h" // La primera clase con la que va heredar
#include "Avion.h" 
using namespace std;

// Herencia Multiple
class HidroAvion : public Barco, public Avion{
    private:
        string codigo;

    public:
        // Indicar primero los atributos de las clases padre
        // Emprezamos conforme las indicamos arriba
        HidroAvion(string nombre,string modelo ,string codigo) : Barco(nombre), Avion(modelo){
            this->codigo=codigo;
        }

        ~HidroAvion(){}

        string getCodigo(){
            return codigo;
        }

        // Aqui usamos los miembros que heredamos 
        // Para eso creamos los metodos Get
        void mostrarDatos(){
            cout<<"Nombre: "<<getNombre()<<endl;
            cout<<"Modelo: "<<getModelo()<<endl;
            cout<<"Codigo: "<<codigo<<endl;
        }
};