/*
    Ejemplo intercambiar el valor de 2 variables
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

// Funcion con dos parametros de tipo puntero donde se almacena la direccion de cada valor
// y vamos a intercambiar los valores gracias a los punteros
// Asi declaramos que le vamos a enviar la direccion de memoria
void intercambio(float *, float *);

int main(){

    float num1 = 20.8, num2 = 0.69;

    cout<<"Primer Numero: "<<num1<<endl;
    cout<<"Segundo Numero: "<<num2<<endl;

    // Le pasamos la direccion de donde esta almacenado los valores de las variables
    intercambio(&num1, &num2);

    cout<<"\nDespues del intercambio"<<endl;
    cout<<"Primer Numero: "<<num1<<endl;
    cout<<"Segundo Numero: "<<num2<<endl;

    system("pause");
    return 0;
}

// Parametro de tipo puntero que almacena la direccion de memoria
void intercambio(float *dirNum1, float *dirNum2){
    float aux;
    // Almacenamos el valor que hay dentro de la direccion
    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;
}