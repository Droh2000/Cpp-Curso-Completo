/*
    Leer los siguientes datos:
        Edad int
        Sexo int
        Altura Float
    Al final mostrar por consola
*/

#include<iostream>

using namespace std;

int main(){

    int edad;
    // Para que nos lea una Palabra se le asigna la cantidada
    char sexo[10];
    float altura;
    
    cout << "Ingreses la Edad: ";
    cin >> edad; // Si le ingresamos otro dato de otro tipo se llena el buffer por eso finaliza el programa

    cout << "Ingreso su genero: ";
    cin >> sexo;

    cout << "Ingrese la altura: ";
    cin >> altura;

    cout << "\nEdad: " << edad << endl;
    cout << "Genero: " << sexo << endl;
    cout << "Altura: " << altura << endl; 

    return 0;
}