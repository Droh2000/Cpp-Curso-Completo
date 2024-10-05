// Este solo nos sirve para avanzar hacia adelante en el contenedor
// Aqui vamos a leer archivos de textos
#include<iostream>
#include<conio.h>
#include<fstream> // Para archivos
#include<cstdlib> // para exit()
#include<iterator> // Para Stream Iterators
#include<vector> // Para contenedor (Lo que leyamos del archivo aqui lo almacenamos)
using namespace std;

int main(){
    // Abrimos el archivo
    ifstream archivo;

    archivo.open("prueba.txt", ios::in); // Lo abrimos en modo lectura

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }  

    // Leer archivo

    // Primero creamos el iterador para apuntar al principio del archivo y aumentando
    // posicion por posicion solamente hacia adelante para dar lectura 
    // Crearemos un iterador que nos pueda recorrer el archivo y nos guarde los caracteres de ese archivo
    // Le indicamos que vamos a leer de tipo caracter
    istreambuf_iterator<char> p(archivo); // Entre parentecis le decimos que apunte al inicio del archivo

    // Vector del mismo tipo que el iterador
    vector<char> frases;

    // Recorremos el archivo de texto y con el iterador vamos apuntando todo el contenido
    while(!archivo.eof()){ // mientras no sea el final del archivo
        // Agregamos en el vector todo lo que este seleccionando el iterador "p"
        frases.push_back(*p); // Almacenamos el caracter por el que vamos
        p++;
    }

    // Mostramos todo el vector Frase
    for (int i = 0; i < frases.size(); i++){
        cout<<frases[i];
    }
    cout<<endl;
    
    archivo.close();

    getch();
    return 0;
}