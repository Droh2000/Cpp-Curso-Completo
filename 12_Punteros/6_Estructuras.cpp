#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

struct persona{
    string nombre;
    int edad;
} persona1, *dirPersona = &persona1;// Aqui creamos el puntero que nos señala la pocicion de memeoria

void pedirDatos();
void mostrarDatos(persona *);

int main(){

    pedirDatos();
    mostrarDatos(dirPersona);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese su nombre: ";
    //getline(cin, persona.nombre);
    getline(cin, dirPersona->nombre);// Almacenamos datos en una estructura usando punteros
    
    cout<<"Ingrese su edad: ";
    cin>>dirPersona->edad; // Aqui igual se usa con esa flecha para indicar el campo
}

void mostrarDatos(persona *dirPer){
    cout<<"Su nombre es "<<dirPersona->nombre<<" y su edad "<<dirPersona->edad<<endl;
}