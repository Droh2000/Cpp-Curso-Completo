/*
    Escriba un fragmento de programa que intercambie los
    valores de dos variables
*/

#include<iostream>

using namespace std;

int main(){

    int n1, n2, aux = 0;

    cout << "Ingrese el valor de N1: ";
    cin >> n1;

    cout << "Ingrese el valor de N2: ";
    cin >> n2;

    aux = n1;
    n1 = n2;
    n2 = aux;

    cout << "El valor de N1 es " << n1 << endl;
    cout << "El valor de N2 es " << n2; 

    return 0;
}