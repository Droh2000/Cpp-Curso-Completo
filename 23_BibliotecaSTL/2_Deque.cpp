/*
                    Deque (Doble Cola)
    
    Esta es una estructura de datos que representa a una cola con doble final. Este
    contenedor es similar a Vector ya que sus elementos tambien estan contiguos en 
    memoria. La diferencia principal radica en que al tener doble final se pueden 
    insertar elementos por ambos extremos del contenedor

    Podemos insertar tanto por adelante como por detras y quitar en ambos extremos igual

*/
#include<iostream>
#include<conio.h>
#include<deque>
using namespace std;

int main(){
    // Creacion
    deque<char> letras;

    //Insertar desde el inicio
    letras.push_front('c'); // c
    letras.push_front('b'); // b c
    letras.push_front('a'); // a b c

    // Insertar desde el final
    letras.push_back('d'); // a b c d
    letras.push_back('e'); // a b c d e
    letras.push_back('f'); // a b c d e f

    // Mostramos los elementos
    for (int i = 0; i < letras.size(); i++){
        cout<<letras[i]<<" | ";
    }

    // Elminar desde del pricipio
    letras.pop_front();
    // Eliminar desde el final
    letras.pop_back();
    


    getch();
    return 0;
}