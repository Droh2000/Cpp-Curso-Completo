
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int n, sum = 0;

    cout << "Ingrese el valor N de numeros a sumar: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        sum += i;
    }

    cout << "El valor de la suma es: "<<sum;

    getch();
    return 0;
}