#include<iostream>
#include<stdlib.h>
#include "DiaAnio.h"

using namespace std;

int main(){
    int d,m;
    // Objetos Dinamicos (Esto igual se definen en los metodos de la clase que utilizen)
    DiaAnio *fechaActual, *fechaUsers;

    cout<<"Ingrese la fecha actual "<<endl;
    cout<<"Dia: ";cin>>d;
    cout<<"Mes: ";cin>>m;
    fechaActual = new DiaAnio(d, m);

    cout<<"\nIngrese la fecha de su nacimiento "<<endl;
    cout<<"Dia: ";cin>>d;
    cout<<"Mes: ";cin>>m;
    fechaUsers = new DiaAnio(d, m);

    cout<<"\nMostrando Fechas"<<endl;
    fechaActual->visualizar();
    fechaUsers->visualizar();

    if(fechaUsers->igual(*fechaActual)){
        cout<<"\nFelicidades hoy es tu cumpleaños"<<endl;
    }else{
        cout<<"\nLas Fechas son Diferentes"<<endl;
    }

    system("pause");
    return 0;
}