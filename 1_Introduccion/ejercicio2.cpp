/*
    Escribe un programa que lea de la entrada estandar el precio
    de un prodducto y muestre en la salida estandar el precio
    del producto al aplicarle el IVA
*/

#include<iostream>

using namespace std;

int main(){

    float precio = 0, iva = 0.16, precioFinal = 0;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    precioFinal = (precio * iva) + precio;

    cout << "El precio con IVA es: " << precioFinal;

    return 0;
}