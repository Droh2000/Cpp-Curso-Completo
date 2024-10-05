#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>

using namespace std;

void lectura();

int main(){
    lectura();

    system("pause");
    return 0;
}

void lectura(){
    ifstream archivo;
    string ubicacion, texto;

    cout<<"Ingrese el nombre o la ubicacion del archivo: ";
    getline(cin, ubicacion);

    archivo.open(ubicacion.c_str(), ios::in);

    if(archivo.fail()){
        cout<<"El archivo no se encontro o esta mal";
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo, texto);

        cout<<texto<<endl;
    }

    archivo.close();
}