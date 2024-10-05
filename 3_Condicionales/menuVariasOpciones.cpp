
#include<iostream>

using namespace std;
#include<math.h>

int main(){

    int opc, num;
    float num1, res=0;

    cout << "\tMenu" << endl;
    cout << "1. Cubo de un numero" << endl;
    cout << "2. Numero par o impar" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: " << endl;
    cin >> opc;

    switch(opc){
        case 1:
            cout << "Ingrese un numero: ";
            cin >> num1;
            res = pow(num1, 3);
            cout << "El cubo del numero "<<num1<<" es "<<res;
            break;
        case 2: 
            cout << "Ingrese dos numeros: ";
            cin >> num;

            if(num % 2 == 0){
                cout << "El numero es par";
            }else{
                cout << "El numero es impar";
            }
            break;
        case 3: break;   
        default: cout << "Opcion fuera de rango"; break;
    }

    return 0;
}