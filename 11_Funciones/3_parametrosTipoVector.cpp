/*
    Paso de parametros tipo Vector

    Parametros de la funcion:
        void nombreFuncion(tipo nombreArreglo[], int tamanoArreglo)

    Llamada de la funcion
        nombreFuncion(nombreArreglo, tamanoArreglo)

*/
#include<iostream>
#include<conio.h>

using namespace std;

void cuadrado(int vec[], int);
void mostrarDatos(int vec[], int);

int main(){

    const int TAM = 5;
    int vec[TAM] = {1,2,3,4,5};

    cuadrado(vec, TAM);
    mostrarDatos(vec, TAM);

    getch();
    return 0;
}

void cuadrado(int vec[], int tam){
    for (int i = 0; i < tam; i++){
        vec[i] *= vec[i];
    }
}

void mostrarDatos(int vec[], int tam){
    for (int i = 0; i < tam; i++){
        cout<<vec[i]<<endl<<" - ";
    }
}