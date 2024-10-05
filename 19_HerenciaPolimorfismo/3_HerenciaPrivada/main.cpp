#include<iostream>
#include<stdlib.h>
#include "Deportivo.h"

using namespace std;

int main(){
    Deportivo *d1 = new Deportivo("Audi", "Blanco", "KP98", 10);

    // Podemos acceder a todo lo publico que tenga la clase deportivo
    cout<<"Cilindros: "<<d1->getCilindros()<<endl;

    // Si intentamos acceder a un metodo publico de la clase padre
    // Nos dice que es inaccesible y lo privado no se puede manipular desde los objetos
    // esto solo se manipula desde la misma clase que tiene lo privado
    // cout<<"Marca: "<<d1->getMarca()<<endl;

    // Para poder acceder se creo este metodo desde la clase
    cout<<"Marca: "<<d1->verMarca()<<endl;

    // Esto se usa cuando no queremos los atributos de la clase privada sean manipulados por nada
    
    delete d1;
    system("pause");
    return 0;
}