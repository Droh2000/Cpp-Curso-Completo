#include<iostream>
#include "Perro.h"

using namespace std;

void Perro::mostrarDatos(){
    cout<<"\nDatos del Perro"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Raza: "<<raza<<endl;
}

void Perro::jugar(){
    cout<<"\nEl Perro "<<nombre<<" esta jugando"<<endl;
}