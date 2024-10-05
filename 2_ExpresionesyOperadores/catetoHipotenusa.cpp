/*
    Leer de entrada los dos catetos de un trangulo rectangulo
    y sacar la hipotenusa
*/

#include<iostream>

// Nueva libreria para las matematicas
#include<math.h>

using namespace std;

int main(){

    float cat1, cat2, hip = 0;

    cout << "Ingrese el cateto 1: ";
    cin >> cat1;

    cout << "Ingrese el cateto 2: ";
    cin >> cat2;

    // Elevar a una potencia con POW
    hip = sqrt(pow(cat1, 2) + pow(cat2,2));

    cout.precision(2);
    cout << "La hipotenusa es: " << hip;

    return 0;
}