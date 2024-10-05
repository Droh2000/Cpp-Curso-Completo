
#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float x, y, f = 0;

    cout << "Ingrese el valor de X: ";
    cin >> x;

    cout << "Ingrese el valor de Y: ";
    cin >> y;

    f = (sqrt(x))/(pow(y,2) - 1);

    cout << "El valor de la funcion F("<<x<<","<<y<<") = " << f;

    return 0;
}
