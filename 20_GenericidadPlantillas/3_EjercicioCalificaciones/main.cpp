#include<iostream>
#include<stdlib.h>
#include "Materia.h"

using namespace std;

int main(){
    Materia <int> m1("Ingles", 526, 85);
    m1.mostrarDatos();

    Materia <float> m2("Calculo", 956, 75.9);
    m2.mostrarDatos();

    Materia <char> m3("Redes", 859, 'B');
    m3.mostrarDatos();

    float calif;
    cout<<"Ingrese la nueva califiacion de "<<m2.getNombreMateria()<<endl;
    cin>>calif;
    m2.setCalificacion(calif);

    cout<<"La nueva calificacion de "<<m2.getNombreMateria()<<" es: "<<m2.getCalificacion();

    system("pause");
    return 0;
}