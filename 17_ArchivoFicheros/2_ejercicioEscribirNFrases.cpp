#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>

using namespace std;

void escribir();

int main(){

    escribir();

    system("pause");
    return 0;
}

void escribir(){
    string nombreArchivo, frase;
    ofstream archivo;

    cout<<"Ingrese el nombre del archivo: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::out);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }

    char op;
    do{
        cout<<"Ingrese una frase: ";
        getline(cin, frase);

        archivo<<frase<<"\n";
        
        cout<<"Quiere escribir otra frase(s/n): ";
        cin>>op;
        cin.ignore(INT_MAX,'\n');
    }while(op == 's' || op == 'S');

    archivo.close();
}