#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>

using namespace std;

void agregarTexto();

int main(){
    agregarTexto();

    system("pause");
    return 0;
}

void agregarTexto(){
    // Queremos escribir en el archivo pero no remplazarlo, sino agregar mas texto al final
    ofstream archivo;
    string texto;

    archivo.open("prueba.txt", ios::app);// No pone el texto exactamente donde se quedo el marcador en el archivo

    if(archivo.fail()){
        cout<<"No se puedo abrir el archivo";
        exit(1);
    }

    //archivo<<"Agregando mas texto";// De forma normal
    cout<<"Ingrese el texto que quiere agregar: ";
    getline(cin, texto);

    archivo<<texto<<endl;
    
    archivo.close();
}