/*
    Programa que lee la nota final de cuatro alumnos y calcule la
    nota final media de los cuatro alumnos
*/

#include<iostream>

using namespace std;

int main(){

    float a1, a2, a3, a4, prom = 0;

    cout << "Ingrese la nota 1: ";
    cin >> a1;

    cout << "Ingrese la nota 2: ";
    cin >> a2;

    cout << "Ingrese la nota 3: ";
    cin >> a3;

    cout << "Ingrese la nota 4: ";
    cin >> a4;

    prom = (a1+a2+a3+a4)/4;

    cout.precision(2);
    cout << "El promedio es: " << prom;

    return 0;
}