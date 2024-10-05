#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
int **sacarTranspuesta(int**, int, int);
void mostrarMatriz(int**, int, int);

int **matriz, **m2, nfilas, ncol; // No usar variables global

int main(){

    pedirDatos();
    cout<<"\nMatriz normal: "<<endl;
    mostrarMatriz(matriz, nfilas, ncol);
    m2 = sacarTranspuesta(matriz, nfilas, ncol);
    cout<<"\nMatriz Transpuesta: "<<endl;
    mostrarMatriz(m2, ncol, nfilas);

    for(int i=0; i<nfilas; i++)
        delete[] matriz[i];
    delete[] matriz;    

    for(int i=0; i<nfilas; i++)
        delete[] m2[i];
    delete[] m2;

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero de filas: ";
    cin>>nfilas;
    cout<<"Ingrese el numero de columnas: ";
    cin>>ncol;

    matriz = new int*[nfilas];
    for (int i = 0; i < nfilas; i++){
        matriz[i] = new int[ncol];
    }

    cout<<"Ingrese los datos de la matriz:"<<endl;
    for (int i = 0; i < nfilas; i++){
        for (int j = 0; j < ncol; j++){
            cout<<"Valor ["<<i<<","<<j<<"]: ";
            cin>>*(*(matriz+i)+j);    
        }
    }
}

void mostrarMatriz(int** m, int nfilas, int ncol){
    for (int i = 0; i < nfilas; i++){
        for (int j = 0; j < ncol; j++){
            cout<<*(*(m+i)+j)<<" ";        
        }
        cout<<endl;
    }
}

int **sacarTranspuesta(int** m, int nfilas, int ncol){
    m2 = new int*[ncol];
    for (int i = 0; i < ncol; i++){
        m2[i] = new int[nfilas];
    }

    int k, l=0;
    for (int i = 0; i < nfilas; i++){
        k=0;
        for (int j = 0; j < ncol; j++){
            m2[k][l] = m[i][j];
            ++k;
        }
        ++l;
    }
    return m2;
}