#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

struct Persona{
    string nombre;
    int edad;
} p1;

void pedirDatos();
// Parametro Tipo Estructura
void mostrarDatos(Persona);

int main(){

    pedirDatos();
    mostrarDatos(p1);

    getch();
    return 0;
}


void pedirDatos(){
    cout<<"Ingrese su nombre: ";
    getline(cin, p1.nombre);

    cout<<"Ingrese la edad: ";
    cin>>p1.edad;
}


void mostrarDatos(Persona p){
    cout<<"\nNombre: "<<p.nombre<<endl;
    cout<<"Edad: "<<p.edad<<endl;
}