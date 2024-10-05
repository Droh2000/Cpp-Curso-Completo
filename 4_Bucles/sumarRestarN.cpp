
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int n, acum = 0;

    cout << "ingrese el valor de N: ";
    cin >> n;

    cout << "Operacion: ";
    for (int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout << "-"<<i;
            acum -= i;
        }else{
            cout << "+"<<i;
            acum += i;
        }
    }
    cout << "\nEl resultado final es: "<<acum<<endl;

    system("pause");
    return 0;
}