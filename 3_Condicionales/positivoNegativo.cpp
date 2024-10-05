
#include<iostream>

using namespace std;

int main(){

    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if(num == 0){
        cout << "El numero es cero";
    }else if(num<0){
        cout << "El numero es negativo";
    }else{
        cout << "El numero es positivo";
    }

    return 0;
}