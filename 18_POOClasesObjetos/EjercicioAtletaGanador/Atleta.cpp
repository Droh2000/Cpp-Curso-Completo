#include<iostream>
#include "Atleta.h"

using namespace std;

int Atleta::getNumero(){
    return numAtletat;
}

string Atleta::getNombre(){
    return nombre;
}

float Atleta::getTiempoCarrera(){
    return tiempoCarrera;
}

int Atleta::getAtletaGanador(Atleta a[], int n){
    int indice = 0;
    int tiempo = a[0].getTiempoCarrera();

    for (int i = 1; i < n; i++){
        if(a[i].getTiempoCarrera() < tiempo){
            tiempo = a[i].getTiempoCarrera();
            indice = i;
        }
    }
    
    return indice;
}
