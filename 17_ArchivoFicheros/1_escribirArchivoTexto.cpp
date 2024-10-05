#include<iostream>
#include<stdlib.h>
#include<string>
// Libreria para la creacion, lectura y escritura de archivos
#include<fstream>

using namespace std;

void escribir(); // Escribir texto dentro de un blog de Notas

int main(){

    escribir();

    system("pause");
    return 0;
}

void escribir(){
    // Aqui vamos a crear el fichero
    // Primero ponemos el descriptor o etiquetador porque queremos crear y escribir contenido en el archivo
    ofstream Archivo;

    // Para que el usuario le de nombre al archivo
    string nombreArchivo, frase;
    
    cout<<"Ingrese el nombre del archivo: "<<endl;
    getline(cin, nombreArchivo);// ESte no lo podemos pasar directamente sino que con una funcion lo convertimos a comandos de C

    // Abrimos el Archivo
    // Le damos un nombre al archivo "prueba.txt" o ubicacion (Si no existe el archivo lo crea, si existe lo remplaza)
    // Si solo le ponemos el nombre y no la ubicacion por defecto lo crea donde este el programa
    // El modo en el que usaremos el archivo (En este caso "OUT" de OUTPUT)
    //Archivo.open("C://Users//diego//Documents//prueba.txt", ios::out); 
    Archivo.open(nombreArchivo.c_str(), ios::out); 

    // Verificar que se cree correctamente
    if(Archivo.fail()){
        // Si existio un error al abrir el archivo
        cout<<"No se pudo abrir el archivo"<<endl;
        // Salimos del progrmaa
        exit(1);
    }

    // Agregamos contenido al archivo
    //Archivo<<"Hola agregando contenido desde el IDE";
    //Archivo<<"Agregando mas contenido al archivo";

    // Le preguntamos al usuario que ingrese el texto
    cout<<"\nIngrese el texto del archivo: "<<endl;
    getline(cin, frase);

    Archivo<<frase;

    // Cerrar el archivo
    Archivo.close();
}