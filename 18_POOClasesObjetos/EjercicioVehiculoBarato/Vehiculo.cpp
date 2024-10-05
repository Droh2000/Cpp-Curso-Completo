#include<iostream>
#include "Vehiculo.h"

using namespace std;

void Vehiculo::setMarca(string m){
    marca = m;
}

void Vehiculo::setModelo(string m){
    modelo = m;
}

void Vehiculo::setPrecio(float p){
    precio = p;
}

string Vehiculo::getMarca(){
    return marca;
}

string Vehiculo::getModelo(){
    return modelo;
}

float Vehiculo::getPrecio(){
    return precio;
}

// Los modelos staticos solo se le pone STATIC en la delcaracion porque cuando
// ya lo vamos a implementar AFUERA ya no hace falta ponerle el SATiC porque C++ ya sabe
int Vehiculo::indiceBarato(Vehiculo v[], int tam){
    int indice=0;
    float precio = v[0].getPrecio();

    for (int i = 1; i < tam; i++){
        if(v[i].getPrecio() < precio){
            precio = v[i].getPrecio();
            indice = i;
        }
    }
    
    return indice;
}



