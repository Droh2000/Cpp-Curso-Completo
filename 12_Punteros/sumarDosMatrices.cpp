#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void sumarMatrices(int**, int**, int, int);
void mostrarMatriz(int**, int, int);

int **matriz1, **matriz2, nfilas, ncol;

int main(){
    pedirDatos();
    sumarMatrices(matriz1, matriz2, nfilas, ncol);
    mostrarMatriz(matriz1, nfilas, ncol);

    for(int i=0; i<nfilas; i++)
        delete[] matriz1[i];
    delete[] matriz1;

   for(int i=0; i<nfilas; i++)
        delete[] matriz2[i];
    delete[] matriz2;     

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero de filas: ";
    cin>>nfilas;
    cout<<"Ingrese el numero de columnas";
    cin>>ncol;

    matriz1 = new int*[nfilas];
    for(int i=0; i<nfilas; i++)
        matriz1[i] = new int[ncol];

    matriz2 = new int*[nfilas];
    for(int i=0; i<nfilas; i++)    
        matriz2[i] = new int[ncol];

    cout<<"Ingrese datos de la matriz 1: "<<endl;
    for (int i = 0; i < nfilas; i++){
        for (int j = 0; j < ncol; j++){
            cout<<"Valor ["<<i<<","<<j<<"]: ";
            cin>>*(*(matriz1+i)+j);
        }
    }
    cout<<"\nIngrese los datos de la matriz 2: "<<endl;
    for (int i = 0; i < nfilas; i++){
        for (int j = 0; j < ncol; j++){
            cout<<"Valor ["<<i<<","<<j<<"]: ";
            cin>>*(*(matriz2+i)+j);
        }
    }
    
}

void sumarMatrices(int** m1, int** m2, int nfilas, int ncol){
    // Vamos a guardar el resultado en la matriz 1
    for (int i = 0; i < nfilas; i++){
        for (int j = 0; j < ncol; i++){
            *(*(m1+i)+j)+=*(*(m2+i)+j);        
        }
    }
}

void mostrarMatriz(int** m1, int nfilas, int ncol){
    cout<<"\nResulado de sumar las dos matrices: "<<endl;
    for (int i = 0; i < nfilas; i++){
        for (int j = 0; j < ncol; i++){
            cout<<*(*(m1+i)+j)<<" ";        
        }
        cout<<endl;
    }
}