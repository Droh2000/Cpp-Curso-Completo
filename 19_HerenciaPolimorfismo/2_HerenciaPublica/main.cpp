#include<iostream>
#include<stdlib.h>
#include "Turismo.h"

using namespace std;

int main(){
    Turismo *t1 = new Turismo("Toyota", "Plomo", "GH89", 4);

    // Podemos acceder a todo los publico
    cout<<"Color: "<<t1->getColor()<<endl;

    // Lo privado no se hereda pero como los atributos si los podemos manipular con los metodos
    t1->setColor("Negro");
    cout<<"Nuevo Color: "<<t1->getColor()<<endl;

    // El metodo protegido no se puede usar directamente en los objetos
    // Por eso se creo este metodo en la clase Turismo
    cout<<"Modelo: "<<t1->retornarModelo()<<endl;

    delete t1;
    system("pause");
    return 0;
}