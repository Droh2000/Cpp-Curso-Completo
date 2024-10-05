/*
    Es una coleccion de uno o mas tipos de elementos denominados campos que puede
    ser de diferentes tipos de datos a diferencia de los arreglos que tenian que 
    ser del mismo tipo

    Ejemplo y Declaracion: (Datos de un CD)

    struct coleccion_CD{
        // Estos son Campos
        char titulo[30];
        char artista[25];
        int numCanciones;
        float precio;
        char fechaCompra[30];
    };

    Declarando Struct como Variables (Cada una de estas variables contendra los campos de la estructura)
    // Despues del nombre de la estructura ponemos las variables
    struct coleccion_CD CD1, CD2, CD3;

    Otra Forma:

    struct coleccion_CD{
        // Estos son Campos
        char titulo[30];
        char artista[25];
        int numCanciones;
        float precio;
        char fechaCompra[30];
    }CD1, CD2, CD3; // Variables

*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
// Creacion de la variable y llenado de datos
persona1 = {"Diego", 20},
persona2 = {"Robert", 15},
persona3;

int main(){

    // Imprecion de datos
    cout<<"Nombre 1: "<<persona1.nombre<<endl;
    cout<<"Edad 1: "<<persona1.edad<<endl;

    cout<<"Nombre 2: "<<persona2.nombre<<endl;
    cout<<"Edad 2: "<<persona2.edad<<endl;

    // LLenar los datos que nos digite el usuario
    cout<<"Ingrese su nombre: ";
    cin.getline(persona3.nombre,20,'\n');

    cout<<"Ingrese su edad: ";
    cin>>persona3.edad;

    cout<<"Bienvenido "<<persona3.nombre<<" tienes "<<persona3.edad<<" años"<<endl;

    getch();
    return 0;
}

