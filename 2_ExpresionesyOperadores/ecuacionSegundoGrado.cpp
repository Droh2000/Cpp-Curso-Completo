/*

    Calcular la solucion de la ecuacion de segundo grado
        ax^2+bx+c=0
    
    En base a la formula general

*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    double a, b, c, x1 = 0, x2 = 0;

    cout << "Segun los valores de su ecuacion de segundo grado: "<< endl;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    x1 = ((-1*b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);

    x2 = ((-1*b)-sqrt(pow(b,2)-(4*a*c)))/(2*a);

    cout.precision(2);
    cout << "El valor de x1 es: "<<x1<<endl;
    cout << "El valor de x2 es: "<<x2<<endl;

    return 0;
}