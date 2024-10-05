
#include<iostream>

using namespace std;

int main(){

    double a, b, c, d, e, f, res = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingreses el valor de c: ";
    cin >> c;

    cout << "Ingrese el valor de d: ";
    cin >> d;

    cout << "Ingrese el valor de e: ";
    cin >> e;

    cout << "Ingrese el valor de f: ";
    cin >> f;

    res = (a+(b/c))/(d+(e/f));

    cout.precision(2);
    cout << "El resultado es: " << res;

    return 0;
}