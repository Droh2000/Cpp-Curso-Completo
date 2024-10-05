#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDimencionMatriz(int&, int&);
void crearMatriz(int**&, int, int);
void pedirDatos(int**&, int, int);
void imprimirMatriz(int**, int, int);
int getMenorElementoFila(int**, int, int);

int main(){

    int **m, fil, col;

    pedirDimencionMatriz(fil, col);
    crearMatriz(m, fil, col);
    pedirDatos(m, fil, col);
    imprimirMatriz(m, fil, col);
    cout<<getMenorElementoFila(m, fil, col);

    for (int i = 0; i < fil; i++)
        delete[] m[i];
    delete[] m;

    cout<<endl;
    system("pause");
    return 0;
}

void pedirDimencionMatriz(int& fil, int& col){
    cout<<"Ingrese el numero de filas: ";
    cin>>fil;
    cout<<"Ingrese el numero de columnas: ";
    cin>>col;
}


void crearMatriz(int**& m, int fil, int col){
    m = new int*[fil];
    for(int i=0; i<fil; i++)
        m[i] = new int[col];
}

void pedirDatos(int**& m, int fil, int col){
    cout<<"Ingrese los datos de la matriz: "<<endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cout<<"["<<i<<","<<j<<"]: ";
            cin>>m[i][j];   
        }
    }
}

void imprimirMatriz(int** m, int fil, int col){
    cout<<"\nMatriz:"<<endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cout<<m[i][j]<<" ";
        }    
        cout<<endl;
    }
}

int getMenorElementoFila(int** m, int fil, int col){
    int fila;
    cout<<"Ingrese el numero de fila donde quiere buscar, ";
    cout<<"Opciones: ";
    for(int i=0;i<fil;i++)
        cout<<i<<", ";
    cout<<"-> ";    
    cin>>fila;

    int menor;
    for (int j = 0; j < col; j++){
        if(j == 0){
            menor = m[fila][j];
        }
        if(j > 0){
            if(m[fila][j] < menor){
                menor = m[fila][j];
            }
        }
    }
    cout<<"\nEl menor elemento es: "<<endl;
    return menor;
}