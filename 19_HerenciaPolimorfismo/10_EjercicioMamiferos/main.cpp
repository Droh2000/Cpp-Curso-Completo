#include<iostream>
#include<conio.h>
#include<string> 
#include "Felino.h"
#include "GatoDomestico.h" 

using namespace std;

int main(){
    GatoDomestico *minino = new GatoDomestico(2020, "MiCasa", "Corriente", "Yo");
    Felino *EstrellaCirco = new Felino(2021, "Circo", "Tigre", "San Juan");

    cout<<"Dieta:"<<endl;
    cout<<"Felino: "<<EstrellaCirco->imprimirDieta()<<endl;
    cout<<"Gato: "<<minino->imprimirDieta()<<endl;

    cout<<"\nAño y Lugar de Nacimiento:"<<endl;
    cout<<"Felino:"<<endl;
    cout<<"Año: "<<EstrellaCirco->getanioNacimiento()<<endl;
    cout<<"Lugar: "<<EstrellaCirco->getlugarNacimiento()<<endl;
    cout<<"Gato:"<<endl;
    cout<<"Año: "<<minino->getanioNacimiento()<<endl;
    cout<<"Lugar: "<<minino->getlugarNacimiento()<<endl;

    cout<<"\nNombre del dueño Anterior: "<<minino->getNombreDuenio()<<endl;
    string nom;
    cout<<"Ingrese el nombre del nuevo dueño: ";getline(cin,nom);
    minino->setNombreDuenio(nom);
    cout<<"El nuevo dueño del gato es: "<<minino->getNombreDuenio()<<endl;

    cout<<"\nTipo de Razas: "<<endl;
    cout<<"Felino: "<<EstrellaCirco->getraza()<<endl;
    cout<<"Gato: "<<minino->getraza()<<endl;

    cout<<"\nNombre del antiguo circo: "<<EstrellaCirco->getNombreCirco()<<endl;
    cout<<"Ingrese el nombre del nuevo circo: ";getline(cin, nom);
    EstrellaCirco->setNombreCirco(nom);
    cout<<"El nuevo nombre del circo es: "<<EstrellaCirco->getNombreCirco()<<endl;

    delete minino;
    delete EstrellaCirco;
    getch();
    return 0;
}