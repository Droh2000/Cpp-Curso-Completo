/*
    Sacar el valor absoluto de un numero:
    - Aqui no nos dice si es int,float, dobule

    Para esto nos sirve la plantilla de la funcion que es hacer
    un tipo de dato general
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

// Protipo de funcion
template <class TipoD>// Plantilla de funcion (Debajo de este debe ir siempre la funcion)
void mostrarABS(TipoD numero); // Aqui englobamos a diferentes tipos de datos

int main(){

    int num=-2;
    float num1=456.36;
    double num2 = -123.658;

    mostrarABS(num);
    mostrarABS(num1);
    mostrarABS(num2);

    getch();
    return 0;
}

template <class TipoD>
void mostrarABS(TipoD numero){
    if(numero < 0){
        numero *= -1;
    }
    cout<<"Valor Absoluto: "<<numero;
}
