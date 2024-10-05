#include<iostream>
#include "Alumno.h"

using namespace std;

int main(){

    // Arreglo de Objetos Estaticos
    Alumno a1[4];

    // Arreglo de objetos Dinamicos
    Alumno *a2 = new Alumno[3];

    // Arriba vemos que ninguno de los ambos casos estamos inicializando ninguno
    // de los atributos porque no se puede, solo estamos creando los objetos con la cnatidad de elementos

    // Le ingresamos datos al arreglo de objetos dinamicos
    for (int i = 0; i < 3; i++){
        (a2+i)->pedirDatos();        
        cout<<endl;
    }

    for (int i = 0; i < 3; i++){
        (a2+i)->mostrarNotas();        
        cout<<endl;
    }

    return 0;
}

