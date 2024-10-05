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
    // i es de input
    ifstream archivo;

    string texto;

    // El modo lectra es in - Input
    archivo.open("archivo.txt", ios::in);

    if(archivo.fail()){
        // Si el archivo no existe nos saldra este error
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }

    // Recorrer todo el archivo
    while(!archivo.eof()){// Mientras no sea el final del archivo
        // copiamos todo el contneido a la variable string
        getline(archivo, texto);

        cout<<texto<<endl; // imprimimos el texto
    }

    archivo.close();
}