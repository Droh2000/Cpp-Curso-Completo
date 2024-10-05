#include<iostream>
#include<conio.h>

using namespace std;

// En la declaracion de argumentos de la matriz
// el numero de filas puede quedarse vacio pero el de columnas es obligatorio
void mostrarMatris(int m[][3], int, int);
void calclarCuadrado(int m[][3], int, int);
void mostrarMatrizElevada(int m[][3], int, int);

int main(){
 
    const int nFilas = 2;
    const int nCol = 3;

    int m[nFilas][nCol] = {{1,2,3},{4,5,6}};
    
    mostrarMatris(m, nFilas, nCol);
    calclarCuadrado(m, nFilas, nCol);
    mostrarMatrizElevada(m, nFilas, nCol);

    getch();
    return 0;
}

void mostrarMatris(int m[][3], int nFilas, int nCol){
    cout<<"Matriz Original"<<endl;
    for (int i = 0; i < nFilas; i++){
        for (int j = 0; j < nCol; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void calclarCuadrado(int m[][3], int nFilas, int nCol){
    for (int i = 0; i < nFilas; i++){
        for (int j = 0; j < nCol; j++){
            m[i][j] *= m[i][j];
        }
    }
}

void mostrarMatrizElevada(int m[][3], int nFilas, int nCol){
    cout<<"Matriz Elevada al Cuadrado"<<endl;
    for (int i = 0; i < nFilas; i++){
        for (int j = 0; j < nCol; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}