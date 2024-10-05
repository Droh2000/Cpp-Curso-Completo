#include<iostream>
#include<string>
#include<conio.h>
//#include<stdio.h>

using namespace std;

struct promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct alumno{
    string nombre;
    string sexo;
    int edad;
    struct promedio calif;
} a1;

int main(){
    float prom = 0;

    cout<<"Ingrese los datos del Alumno: "<<endl;
    cout<<"Nombre: ";
    getline(cin, a1.nombre);
    cout<<"Genero: ";
    getline(cin, a1.sexo);
    cout<<"Edad: ";
    cin>>a1.edad;
    cout<<"\nIngrese sus calificaciones: "<<endl;
    cout<<"Nota 1: ";
    cin>>a1.calif.nota1;
    cout<<"Nota 2: ";
    cin>>a1.calif.nota2;
    cout<<"Nota 3: ";
    cin>>a1.calif.nota3;

    prom = (a1.calif.nota1+a1.calif.nota2+a1.calif.nota3)/3;

    cout<<"\nDatos del alumno: "<<endl;
    cout<<"Nombre: "<<a1.nombre<<endl;
    cout<<"Genero: "<<a1.sexo<<endl;
    cout<<"Edad: "<<a1.edad<<endl;
    cout<<"Calificacion Promedio: "<<prom<<endl;

    getch();
    return 0;
}