#include<iostream> // Para poder mostrar los datos
#include "DiaAnio.h"

using namespace std;

bool DiaAnio::igual(DiaAnio& a){
    return (dia == a.dia && mes == a.mes) ? true : false;
}

void DiaAnio::visualizar(){
    cout<<"\nFecha"<<endl;
    cout<<"Dia: "<<dia<<endl;
    cout<<"Mes: "<<mes<<endl;
}