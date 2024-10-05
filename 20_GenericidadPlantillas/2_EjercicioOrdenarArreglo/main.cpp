#include<iostream>
#include<stdlib.h>
#include "ordenar.h"

using namespace std;

// Plantilla para el arreglo (NO FUNCIONA ASI se tiene crear con el tipo de dato definido)
template<typename T>
T *a;
int n;

template<typename T>
void pedirDatos(T *&a, int &n);

// Plantilla de funcion para pedir los elementos del arreglo
template<typename T>
void llenarArreglo(T *a, int n);

int main(){
    // Estos errores se dan porque se creo el arreglo de manera global para hacerlo
    // de manera generica con ayuda de la plantilla

    // Otra cosa extraña es que se comenten o no la funciones de todas formas se mandan a llamar
    pedirDatos(a, n);
    llenarArreglo(a, n);

    cout<<"Orden Ascendentemente"<<endl;
    ordenarAscendentemente(a, n);
    mostrarArreglo(a,n);
    cout<<"Orden Descendentemete"<<endl;
    ordenarDecendentemente(a,n);
    mostrarArreglo(a,n);

    delete[] a;
    system("pause");
    return 0;
}

template<typename T>
void pedirDatos(T *&a, int &n){
    cout<<"Ingrese el tamano del arreglo: ";
    cin>>n;
    a = new T[n];
}

template<typename T>
void llenarArreglo(T *a, int n){
    for (int i = 0; i < n; i++){
        cout<<"Ingrese los valores:"<<endl;
        for (int i = 0; i < n; i++){
            cout<<"Valor "<<(i+1)<<": ";
            cin>>a[i];
        }
    }
}