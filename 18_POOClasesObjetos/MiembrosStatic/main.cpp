// (Atributos o Metodos)Miembros Statics 
// o Miembros de Clase porque le pertenecen a las clases y no a los objetos
#include<iostream>
#include<conio.h>
#include "Estatico.h"

using namespace std;

int main(){
    Estatico *e1 = new Estatico();
    Estatico *e2 = new Estatico();

    // No importa cual de los dos llamemos
    // En ambos nos saldra el mismo valor del contador (Se modifica para todos el statico)
    cout<<e1->getContador()<<endl;

    // Uso de los metodos estatico
    cout<<"La suma es: "<<Estatico::suma(4,5)<<endl;

    delete e1;
    delete e2;
    getch();
    return 0;
}