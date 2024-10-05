/*
    Tipo Nombre[nFilas][nColumnas];

    int numeros[2][3];
    char letras[3][2]

    Agregar elementos en la definicion

    int numeros[2][3] = {1,2,3 , 4,5,6};
        Esto seria:     1 2 3
                        4 5 6
    numeros[1][2] == 6
    numeros[0][1] == 2

    Otra manera de agregar en la definicion
    int numeros[2][3] = {{1,2,3},{4,5,6}};

    Lo mismo que la primera pero con salto de linea
    int numeros[2][3] = {1,2,3, 
                        4,5,6};
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int filas, columnas;
    cout<<"Ingrese el numero de filas: ";
    cin>>filas;
    cout<<"Ingrese el numero de columnas: ";
    cin>>columnas;

    int** matrix = new int*[filas];
    for (int i = 0; i < filas; ++i)
        matrix[i] = new int[columnas];

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<"["<<i<<","<<j<<"] -> Ingrese su valor: ";
            cin>>matrix[i][j];
        }
    }

    cout<<"Esta es su matriz: "<<endl;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<"["<<matrix[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i = 0; i < filas; ++i)
        delete [] matrix[i];
    delete [] matrix;
    
    system("pause");
    return 0;
}