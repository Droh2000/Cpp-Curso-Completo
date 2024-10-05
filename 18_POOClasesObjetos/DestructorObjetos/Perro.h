#include<iostream>

using namespace std;

class Perro{

    private:
        string nombre, raza;

    public:
        Perro(string nom, string tipo){
            nombre = nom;
            raza = tipo;
        }

        // CREAR DESTRUCTOR DE OBJETOS (Este no tiene parametros)
        // Cuando instanciamos objetos de las clases, eso utiliza memoria en la computadora
        // asi liberamos la memoria utilizada por el objeto
        // Si no lo creamos C++ se encarga de destruirlo al finalizar el programa pero no es tan eficiente
        ~Perro(){} // Se crea por cada clase

        void mostrarDatos();
        void jugar();

};