#include<iostream>
using namespace std;

template<class T>
class Arreglo{
    private:
        T* arreglo; // Este es un arreglo dinamico que solo estamos definiendo 
        int indice; // iterador
        int nElementos;

    public:
        Arreglo(int n){// n es numero de elementos
            // inicializacion del arreglo
            arreglo = new T[n];
            indice = 0;
            nElementos = n;
        }

        ~Arreglo(){
            delete[] arreglo;
        }

        void agregar(T element){
            arreglo[indice++] = element;
        }

        bool arregloLleno(){
            if(indice >= nElementos){
                return true;
            }
            return false;
        }

        void mostrarArreglo(){
            // Se pone indice y no nElementos porque el usuario podra ver en cualquier momento
            // el arreglo y no solo al final cuando digite todos los elementos
            for (int i = 0; i < indice; i++){
                cout<<"Elemento ["<<i<<"]: "<<arreglo[i]<<endl;
            }
        }

        void vaciarArreglo(){
            // Solo recorremos el arreglo hasta donde lo hemos llenado
            for (int i = 0; i < indice; i++){
                arreglo[i] = NULL;
            }
            indice = 0;
        }
};