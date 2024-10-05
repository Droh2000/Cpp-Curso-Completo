#include "Intercambio.h"

template<typename T>

void ordenarAscendentemente(T *d, int n){
    for (int i = 0; i < n-1; i++){
        for(int j=0; j < n-1; j++){
            if(d[j] > d[j+1]){
                intercambio(d[j], d[j+1]);
            }
        }
    }
}

// Mas plantillas dentro del mismo archivo de cabezera
template<typename T>
void ordenarDecendentemente(T *d, int n){
    for (int i = 0; i < n-1; i++){
        for(int j=0; j < n-1; j++){
            if(d[j] < d[j+1]){
                intercambio(d[j], d[j+1]);
            }
        }
    }
}

template<typename T>
void mostrarArreglo(T d, int n){
    for (int i = 0; i < n; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
}