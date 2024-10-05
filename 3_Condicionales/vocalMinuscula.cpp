
#include<iostream>

using namespace std;

int main(){

    char letra;

    cout << "Ingresa una letra: ";
    cin >> letra;

    switch(letra){
        case 'a':
            cout << "Es la vocal minuscula a";
            break;
        case 'e':
            cout << "Es la vocal minuscula e";
            break;
        case 'i':
            cout << "Es la vocal minuscula i";
            break;
        case 'o':
            cout << "Es la vocal minuscula o";
            break;
        case 'u':
            cout << "Es la vocal minuscula u";
            break;
        default:
            cout << "No es una vocal o no esta en minuscula";
            break;
    }

    return 0;
}