/*
        Clases Derivadas (Herencia)

    La Herencia es la relacion que existe entre dos clases, en la que una
    clase denominada clase hija (Clase derivada) se crea apartir de otra ya existente
    denominada clase padre (Clase Base)

    Clase Padre -> Clase Hija (Con esto hacemos una reutilizacion de codigo ya que todo los
                                atributos y metodos heredarian las clases hijas)

    Para saber si una relacion de  Herencia esta Bien
        Hay que tener en cuenta "es - un/una" por ejemplo:
            - Clase Triangulo es una Clase Figura (SI)
    
    Tambien se hereda el constructor pero igualmente cada clase debe de tener su propio constructor
        
*/
#include<iostream>
#include<conio.h>
#include "Triangulo.h"

using namespace std;

int main(){
    Triangulo *t1 = new Triangulo(3,5,6,7);

    cout<<"Numero de lados: "<<t1->getNlados()<<endl;
    cout<<"Area: "<<t1->areaTriangulo()<<endl;

    delete t1;
    getch();
    return 0;
}