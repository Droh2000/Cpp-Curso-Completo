/*
                Herencia Multiple
    
    Es cuando una clase hereda los miembros de mas de una clase padre, es decir
    existen multiples clases padres para la clase hija

    Declaracion:
        class ClaseHija : [TipoAcceso] ClasePadre1, [TipoAcceso] ClasePAdre2, ...{
            // Codigo
        };
*/
#include<iostream>
#include<stdlib.h>
#include "HidroAvion.h"

using namespace std;

int main(){
    HidroAvion *ha = new HidroAvion("NFED6851","HGF65","132075");

    ha->mostrarDatos();

    // Uso de los metodos de las clases padres
    ha->indicarBarco();
    ha->indicarAvion();

    delete ha;
    system("pause");
    return 0;
}