#include<iostream>
using namespace std;

class Personaje{
    // La funcion que le ponemos depues de la palabra amiga le indica que le de los permisos nesesarios
    // para que pueda acceder a sus atributos privados o protegidos
    friend void modificar(Personaje&, int, int); // Se le pasa el mismo tipo, nombre y parametros

    private:
        int ataque;
        int defensa;

    public:
        Personaje(int ataque, int defensa){
            this->ataque=ataque;
            this->defensa=defensa;        
        }

        void mostarDAtos(){
            cout<<"Ataque = "<<ataque<<endl;
            cout<<"Defensa = "<<defensa<<endl;
        }

};

