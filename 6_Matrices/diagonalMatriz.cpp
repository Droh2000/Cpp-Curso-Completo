
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int fil, col;

    cout<<"Ingrese el numero de filas: ";
    cin>>fil;
    cout<<"Ingrese el numero de columnas: ";
    cin>>col;

    int** matrix = new int*[fil];
    for (int i = 0; i < fil; i++)
        matrix[i] = new int[col];

    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cout<<"["<<i<<","<<j<<"] -> Ingrese el valor: ";
            cin>>matrix[i][j];
        }
    }

    cout<<"La diagonal de la matriz es: "<<endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            if (i == j){
                cout<<"["<<matrix[i][j]<<"]";
            }else{
                cout<<"[]";
            }
        }
        cout<<endl;
    }
    

    for (int i = 0; i < fil; i++)
        delete [] matrix[i];
    delete[] matrix;

    getch();
    return 0;
}