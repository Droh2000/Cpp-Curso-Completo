
#include<iostream>

using namespace std;

int main(){

    int edad;

    cout << "Ingrese una edad: ";
    cin >> edad;

    if(edad < 0){
        cout << "Edad no valida";
    }else if(edad >= 18 && edad <=25){
        cout << "La edad esta dentro del rango 18-25";
    }else{
        cout << "La edad esta fuera del rango";
    }

    return 0;
}