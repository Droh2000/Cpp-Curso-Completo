#include<iostream>
using namespace std;

template<class T>
class Materia{
    private:
        string nombremateria;
        int clave;
        T calificacion;
    public:
        Materia(string nombremateria, int clave, T calificacion){
            this->nombremateria = nombremateria;
            this->clave = clave;
            this->calificacion = calificacion;
        }

        void mostrarDatos(){
            cout<<"Datos de la Materia:"<<endl;
            cout<<"Nombre: "<<nombremateria<<endl;
            cout<<"Clave: "<<clave<<endl;
            cout<<"Calificacion: "<<calificacion<<endl;
        }

        void setCalificacion(T calif){
            calificacion = calif;
        }

        T getCalificacion(){
            return calificacion;
        }

        string getNombreMateria(){
            return nombremateria;
        }
};
