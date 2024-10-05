/*
    En los archivos binarios podemos almacenar cualquier tipo de datos
    Texto, Video, imagenes, cualquier cosa
*/

#include<iostream>
#include<stdlib.h>
#include<string>
#include<conio.h>
#include<fstream>

using namespace std;

void escribir();
void leer();

struct Registros{
    // Con string no muestra correctaente los datos es mejor usar char
    string nombre, apellido;
};

int main(){
    escribir();
    leer();

    getch();
    return 0;
}

void escribir(){
    ofstream archivoB;

    // La extencion des .dat
    // Aparte de ponerle que vamos a escribir en el archivo
    // le indicamos que es un archivo binario con | ios::binary
    archivoB.open("prueba.dat", ios::out | ios::binary);

    if(archivoB.fail()){
        cout<<"No se puede crear el archivo";
        exit(1);
    }

    // Vamos a almacenar un registro de un Estructura
    Registros persona;

    // En los archivo binarios es mejor usar arreglos CHAR porque los String pueden fallar
    cout<<"\nIngrese los siguientes datos:"<<endl;
    cout<<"Nombre: ";getline(cin, persona.nombre);
    cout<<"Apellido: ";getline(cin, persona.apellido);

    //Agregamos al archivo binario
    // Primero le pasamos la direccion de memoria donde esta lo que le queremos escribir
    // Ademas agregarle al inicio un puntero del tipo de dato que le estamos metiendo al archivo
    // El segundo parametro es el tamano de lo que queremos escribir
    archivoB.write((char *)&persona, sizeof(Registros));

    archivoB.close();
}

void leer(){
    ifstream archivoB;

    archivoB.open("prueba.dat", ios::in | ios::binary);

    if(archivoB.fail()){
        cout<<"No se puede abrir el archivo";
        exit(1);
    }

    // Como el archivo tiene un regitsro de estructura creamos este tipo
    Registros persona;

    // Primero le pasamos donde va a guardar lo que lea del archivo
    // Despues el tamano de lo que se va a leer
    archivoB.read((char *)&persona, sizeof(Registros));

    cout<<"\nMostrndo los datos leidos"<<endl;
    cout<<"Nombre: "<<persona.nombre<<endl;
    cout<<"Apellido: "<<persona.apellido<<endl;

    archivoB.close();
}