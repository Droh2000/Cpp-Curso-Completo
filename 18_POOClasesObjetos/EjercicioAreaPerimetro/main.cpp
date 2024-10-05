#include<iostream>
#include<conio.h>
#include "Cuadrilatero.h"

using namespace std;

int main(){
    int lado1, lado2, op;
    Cuadrilatero *c;

    cout<<"Ingresa la opcion segun el tipo de figura: "<<endl;
    cout<<"1. Cuadrado"<<endl;
    cout<<"2. Otro Cuadrilatero"<<endl;
    cout<<"Opcion: ";cin>>op;
    
    switch (op){
    case 1:
        cout<<"Ingrese el valor del lado: ";
        cin>>lado1;
        c = new Cuadrilatero(lado1);
        break;
    case 2:
        cout<<"Ingrese el valor del lado1: ";
        cin>>lado1;
        cout<<"Ingrese el valor del lado2: ";
        cin>>lado2;    
        c = new Cuadrilatero(lado1, lado2);
        break;  
    default:
        cout<<"Opcion Mal";
        break;
    }

    cout<<"\nEl area del a figura es: "<<c->area()<<endl;
    cout<<"El Perimetro de la figura es: "<<c->perimetro()<<endl;

    delete c;
    getch();
    return 0;
}