
// Funcion: atoi() -> Convertir valor de cadena entero al valor entero
// "123" -> 123

// Funcion: atof() -> Convertir valor la cadena float a valor flotante 
// "123.45" -> 123.45

#include<iostream>
// Estas funciones funcionan con esta libreria NO con la de string.h
#include<stdlib.h>

using namespace std;

int main(){

    char cad[] = "123";
    int num;

    num = atoi(cad);

    cout<<num<<endl;

    char cad2[] = "123.456";
    float num2;

    num2 = atof(cad2);

    cout<<num2<<endl;

    system("pause");
    return 0;
}