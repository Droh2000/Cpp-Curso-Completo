
#include<iostream>

using namespace std;

int main(){
    float a,b, resultado = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    resultado = (a/b) + 1;

    // Redondear el resultado con muchos decimales
    cout.precision(2);
    cout << "\nEl resultado es: "<<resultado<<endl;

    return 0;
}