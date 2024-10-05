#include<iostream>
#include "Alumno.h"

using namespace std;


void Alumno::pedirDatos(){
    cout<<"Ingrese la calificacion uno: ";
    cin>>calif1;
    cout<<"Ingrese la calificacion dos: ";
    cin>>calif2;
}

void Alumno::mostrarNotas(){
    cout<<"\nCalificaciones:"<<endl;
    cout<<"Nota 1: "<<calif1<<endl;
    cout<<"Nota 2: "<<calif2<<endl;
    cout<<"Promedio: "<<(calif1+calif2)/2<<endl;
}