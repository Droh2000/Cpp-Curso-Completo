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
    ofstream archivo;
    string nombre, texto;

    cout<<"Ingrese el nombre o la ubicacion del archivo: ";
    getline(cin, nombre);

    archivo.open(nombre.c_str(), ios::app);

    if(archivo.fail()){
        cout<<"Error no se pudo abrir el archivo";
        exit(1);
    }

    char op;
    do{
        cout<<"Ingrese Texto: ";
        getline(cin,texto);

        archivo<<texto<<endl;

        cout<<"Desea ingresar mas texto (s/n): ";
        cin>>op;
        cin.ignore(INT_MAX,'\n');
    }while(op=='s' || op=='S');
    
    archivo.close();
}