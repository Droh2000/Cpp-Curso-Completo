/*
    Matriz Dinamica

    Ejemplo: Rellenar una mariz NxM y mostrar su contenido

    **punteroMatriz -> *PunteroFila -> [int] [int]
                       *PunteroFila -> [int] [int]
                       *PunteroFila -> [int] [int]

Supongamos que tenemos esta matriz:
1 2 3  
4 5 6 
7 8 9 
Lo que pasa aqui es que señalamos a un puntero fila que en este caso
seria: 1 4 7 (Que tambien son posiciones de punteros) y estas pociciones de puntero
nos van a estar señalando a sus correspondientes columnas que le siguen:
                1 -> 2 3
                4 -> 5 6
                7 -> 8 9
Aqui estos 2 3 son las columnas y estas columnas son sealados por el puntero fila que en este
caso seria el 1 y este esta señalado por el punteroMatriz por eso se declara con ** que son dos
punteros por que se señala al puntero fila y a otra variable puntero
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
// Pasamos la variable puntero de punteros y el numero de filas y columnas
void mostrarMatriz(int **, int, int);

// Aqui creamos un puntero de punteros
int **punteroMatriz;// En pocas palabras señalamos a una matriz
int nfilas, ncol;


int main(){

    pedirDatos();
    mostrarMatriz(punteroMatriz, nfilas, ncol);

    // Eliminiar la memoria reservada
    // Primero liberamos la que usamos para las columnas
    for (int i = 0; i < nfilas; i++){
        delete[] punteroMatriz[i];
    }
    // Liberamos la de las filas
    delete[] punteroMatriz;

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero de filas: ";
    cin>>nfilas;
    cout<<"Ingrese el numero de columnas: ";
    cin>>ncol;

    // Reservar memoria para el numero de filas y columnas 
    // Esta va a señalar la posicion inicial en donde inicia la matriz 
    // al inicio es el numero de filas pero esto debe de ser un puntero
    // es una reservacion de memoria pero que va a tener otras pociciones 
    // a las cuales va a señalar
    punteroMatriz = new int *[nfilas]; // Aqui la matriz apunte a tal fila pero falta que cada fila apunte a sus columnas
    // Reservar memeoria para sus correspondiente columnas
    for (int i = 0; i < nfilas; i++){
        punteroMatriz[i] = new int[ncol]; 
    }

    cout<<"Ingrese los valores de la matriz: "<<endl;
    for (int i = 0; i < nfilas; i++){
        for (int j = 0; j < ncol; j++){
            cout<<"Digite el valor ["<<i<<","<<j<<"]: ";
            // Almacenar el valor
            cin>>*(*(punteroMatriz+i)+j);// Es lo mismo -> punteroMatriz[i][j]
        }
    }
}

void mostrarMatriz(int **punteroMatriz, int nfilas, int col){
    cout<<"\nMostrando Matriz: "<<endl;
    for (int i = 0; i < nfilas; i++){
        for (int j = 0; j < ncol; j++){
            cout<<*(*(punteroMatriz+i)+j)<<" ";// punteroMatriz[i][j]
        }
        cout<<endl;
    }
}