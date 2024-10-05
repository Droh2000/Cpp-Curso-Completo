
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int n, suma = 0, formula;

    cout << "ingrese el valor de N: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        formula = 2*i-1;
        cout<<formula<<endl;
        suma += formula;
    }

    cout << "El valor de la suma es: "<<suma<<endl;

    system("pause");
    return 0;
}