

#include<iostream>

using namespace std;

int main(){

    float a, b, c, d, res = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    cout << "Ingrese el valor de d: ";
    cin >> d;

    res = (a+b)/(c+d);

    cout.precision(3);
    cout << "\nEl resultado es: " << res;

    return 0;
}