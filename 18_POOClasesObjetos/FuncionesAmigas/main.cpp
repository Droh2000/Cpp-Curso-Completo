/*
        Funciones Amigas (Friend)

    Son funciones externas a una clase pero como la clase les va a permitir o dar esa ayuda de amistad
    pues esas funciones van a ser capaz de acceder a los miembros privados o protegidos de una clase

    A los privado y protegido no cualquiera puede acceder para eso debemos darle permiso
    y esos son las funciones amigas
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include "Personaje.h"

using namespace std;

/*  
    El parametros que recive es del tipo de la clase y se le pasa por referencia
    si lo pasamos por valor solo se modifica una copia del objeto y por referencia modificamos
    el objeto en si mismo y eso es lo que queremos

    Ademas le pasamos los valores que son los mismos que los atributos de la clase

    Para que esto funcione
        Se comporte como funcion Amiga de la clase y la clase le de la autorizacion para que la funcion pueda
        cambiar los valores de sus atirbutos, en la clase arriba debe tener la palabra reservada friend
*/
void modificar(Personaje &p, int at, int def){
    // Al objeto le decimos que sus atributos se modifiquen por los que se le pasen a esta funcion
    p.ataque = at;
    p.defensa =def;
}

int main(){
    Personaje *p1 = new Personaje(100,90);
    p1->mostarDAtos();

    // Uso de la funcion amiga
    modificar(*p1, 60,50); // Le cambiamos los valores de los atributos
    cout<<"\nNuevos Valores: "<<endl;
    p1->mostarDAtos();

    delete p1;
    cout<<endl;
    system("pause");
    return 0;
}