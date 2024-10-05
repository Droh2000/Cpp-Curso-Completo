#include<iostream>
#include<string>

using namespace std; // Para usar de tipo String

class Persona{
    private:
        string nombre;
        int edad;
        string dni;

    public:
        // SobreCarga de constructores
        // Se diferencian en que tienen diferentes parametros o mas que otro
        Persona(string nom, int ed){
            nombre = nom;
            edad = ed;
        }

        Persona(string dni){
            this->dni=dni;
        }

        // Los metodos se definieron aqui por comodidad
        void correr(){
            cout<<"Soy "<<nombre<<" tengo "<<edad<<" años y estoy corriendo"<<endl;
        }

        void correr(int km){ // SE diferencian en los parametros por su cantidad o por tipo
            cout<<"Corri "<<km<<" Kilomettros"<<endl;
        }

    
};