#include<iostream>
using namespace std;

template<class T1, class T2> // Estos 2 tipos de datos genericos podrian ser el mismo tipo de dato o diferentes
class PlantillaClase{
    private:
        T1 dato1;
        T2 dato2;
    public:
        PlantillaClase(T1 dato1, T2 dato2){
            this->dato1 = dato1;
            this->dato2 = dato2;
        }

        void setDato1(T1 d1){
            dato1 = d1;
        }

        T1 getDato1(){
            return dato1;
        }

        void setDato2(T2 d2){
            dato2 = d2;
        }

        T2 getDato2(){
            return dato2;
        }

        void mostrarDatos(){
            cout<<"Dato 1: "<<dato1<<endl;
            cout<<"DAto 2: "<<dato2<<endl;
        }

};