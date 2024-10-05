
#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;

int main(){

    srand(time(NULL));
    int filas, columnas;

    cout<<"Ingrese el numero de filas: ";
    cin>>filas;
    cout<<"Ingrese el numero de columnas: ";
    cin>>columnas;

    int** matrix = new int*[filas];
    for (int i = 0; i < filas; i++)
        matrix[i] = new int[columnas];    

    int** matrix2 = new int*[filas];
    for (int i = 0; i < filas; i++)
        matrix2[i] = new int[columnas];

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            matrix[i][j] = 1+rand()%100;
        }
    }

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            matrix2[i][j] = matrix[i][j];
        }
    }

    cout<<"La matriz final es: "<<endl;
    for(int i=0;i<filas;++i){
        for(int j=0;j<columnas;++j){
            cout<<"["<<matrix2[i][j]<<"]";
        }
        cout<<endl;
    }
    
    for (int i = 0; i < filas; i++)
        delete[] matrix[i];
    delete [] matrix; 

    for(int i=0;i<filas;i++)
        delete[] matrix2[i];
    delete[] matrix2;
     
    getch();
    return 0;
}