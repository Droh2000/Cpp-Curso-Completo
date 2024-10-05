#include<iostream>
using namespace std;

// Plantilla de funcion
template<typename T>

// Se pasa por referencia para que cualquier cambio afecte a las variables externas
void intercambio(T &dato1, T &dato2){
    T aux= dato1;
    dato1 = dato2;
    dato2 = aux;
}