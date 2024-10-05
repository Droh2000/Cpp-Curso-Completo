/* 
    Programa que lea de entrada estandar dos numeros y muestre
    en pantalla su suma, resta, multiplicacion y divicion
*/

#include<iostream>

using namespace std;

int main(){

    float numero1, numero2;

    cout << "Ingrese el numero uno: ";
    cin >> numero1;

    cout << "Ingrese el numero dos: ";
    cin >> numero2;

    cout << "\nSuma: " << numero1+numero2 << endl;
    cout << "Resta: " << numero1-numero2 << endl;
    cout << "Multiplicacion: " << numero1*numero2 << endl;
    cout << "Divicion: " << numero1/numero2;

    return 0;
}