/*
    Estas funciones sirven tanto para archivos de texto y binarios

    Corren por OFSTREAM y solo para este funcionan
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void escribir();

int main(){


    system("pause");
    return 0;
}

void escribir(){
    ofstream archivo;

    archivo.open("posicionEscrbir.txt", ios::out);

    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    // Si queremos saber en algun momento del programa
    // En que posicion esta el cursor del archivo
    // Esta funcion nos regresa un entero que es la posicion en la que va
    cout<<"Posicion Actual: "<<archivo.tellp()<<endl;// Empieza a contar desde el Cero
    archivo<<"Escribiendo en el archivo";
    
    // En caso de que queramos escribir pero no desde el inicio
    // Lo que es ios::out agresa texto del inicio y ios::app agrega donde se quedo el cursor
    // Escribir desde un pocicion especifica:
    archivo.seekp(5);// Le pasamos la pocicion donde queremos empezar a escribir

    archivo<<" Texto agregado en la pocicion 5 ";// Todo el texto que se encentre ya escrito lo elimina y se agrega lo que ocupe este nuevo

    cout<<"Posicion Final: "<<archivo.tellp()<<endl;

    archivo.close();
}