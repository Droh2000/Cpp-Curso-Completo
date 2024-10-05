#include<iostream>
#include<stdlib.h>
#include "Intercambio.h"

using namespace std;

int main(){
    int dato1, dato2;
    cout<<"Ingrese el valor 1: ";cin>>dato1;
    cout<<"Ingrese el valor 2: ";cin>>dato2;

    intercambio(dato1, dato2);

    cout<<"Despues del intercambio son:"<<endl;
    cout<<"El valor1 es: "<<dato1<<endl;
    cout<<"El valor2 es: "<<dato2<<endl;


    system("pause");
    return 0;
}