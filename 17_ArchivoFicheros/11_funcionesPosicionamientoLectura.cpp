//  Funciones para la lectura (Funcionan tanto para .txt como binarios)
#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>

using namespace std;

void leer();

int main(){

    leer();

    system("pause");
    return 0;
}
void leer(){
    ifstream archivo;

    archivo.open("prueba.txt", ios::in);

    if(archivo.fail()){
        cout<<"No se puede leer el archivo";
        exit(1);
    }

    string texto;

    // Cuando no queremos leer todo el archivo y solo una parte
    archivo.seekg(5);// le ponemos la posicion donde empieze que lea

    // Ver en que posicion se quedo el cursor
    cout<<"Posicion actual "<<archivo.tellg()<<endl;
    
    getline(archivo, texto);// Solo usaremos una linea del texto

    cout<<texto<<endl;

    archivo.close();
}