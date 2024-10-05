#include<iostream>
#include<conio.h>

using namespace std;

struct complex{
    float real;
    float imag;
} comp1, comp2;

void pedirDatos();
complex sumarComplejos(complex, complex);

int main(){

    pedirDatos();
    complex c3 = sumarComplejos(comp1, comp2);

    cout<<"Resulado de la suma: "<<endl;
    cout<<c3.real<<"+"<<c3.imag<<"i"<<endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Numero complejo 1: "<<endl;
    cout<<"Ingrese la parte real del numero complejo: ";
    cin>>comp1.real;
    cout<<"Ingrese la parte imaginaria del numero: ";
    cin>>comp1.imag;
    
    cout<<"\nNumero complejo 2: "<<endl;
    cout<<"Ingrese la parte real del numero complejo: ";
    cin>>comp2.real;
    cout<<"Ingrese la parte imaginaria del numero: ";
    cin>>comp2.imag;
}

complex sumarComplejos(complex c1, complex c2){
    complex c3;
    c3.real = c1.real+c2.real;
    c3.imag = c1.imag+c2.imag;
    return c3;
}
