#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void calcAnios(int, int&, int&, int&);

int totalDias;

int main(){
    int anio, mes, dia;
    pedirDatos();
    calcAnios(totalDias, anio, mes, dia);

    cout<<"El numero total de dias desde la fecha 1/1/2000 es:"<<endl;
    cout<<dia<<"/"<<mes<<"/"<<(anio+2000)<<endl;

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el total de dias: ";
    cin>>totalDias;
}

void calcAnios(int totalDias, int& anio, int& mes, int& dia){
    // 365 dias - 1 anio
    // 30 dias - 1 mes
   anio = totalDias/365;
   totalDias %= 365; // Quitamos los dias que ya se le agregaron al anio
   mes = totalDias/30;
   dia = totalDias%30;
}