
#include<iostream>

using namespace std;

int main(){

    int saldoInicial=1000, opcion;
    float extra, retiro, saldo = 0;

    cout<<"\tBienvenido a su cajero virtual"<<endl;
    cout<<"1. Ingresar dinero en la cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: ";
    cin >> opcion;

    switch(opcion){
        case 1:
            cout << "Digite la cantidad de dinero a ingresar: ";
            cin >> extra;
            saldo = saldoInicial + extra;
            cout << "Saldo Actual: " << saldo;
            break;
        case 2:
            cout << "Digite la cantidad de dinero a retirar: ";
            cin >> retiro;

            if(retiro > saldoInicial){
                cout << "No tiene esa cantidad de dinero";
            }else{
                saldo = saldoInicial-retiro;
                cout << "Saldo actual: " << saldo;
            }
            break;
        case 3: break;
        default: cout << "Esa opcion esta fuera de rango"; break;
    }



    return 0;
}