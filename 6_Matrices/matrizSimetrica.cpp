#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int fil, col;
    cout<<"Ingrese el numero de filas: ";
    cin>>fil;
    cout<<"Ingrese el numero de columnas: ";
    cin>>col;

    int** matrix = new int*[fil];
    for(int i=0; i<fil;++i)
        matrix[i] = new int[col];

    for (int i = 0; i < fil; i++){
        for(int j=0; j<col; j++){
            cout<<"["<<i<<","<<j<<"] -> Ingrese el valor: ";
            cin>>matrix[i][j];
        }
    }

    cout<<"La matriz: "<<endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cout<<"["<<matrix[i][j]<<"]";
        }
        cout<<endl;
    }
    
    cout<<endl;
    if(fil == col){
        bool simetrica = true;
        // Verificando que su tranpuesta sea igual a la matriz original
        for (int i = 0; i < fil; i++){
            for (int j = 0; j < col; j++){
                if(matrix[i][j] != matrix[j][i]){
                    simetrica = false;
                    break;
                }
            }
        }

        if(simetrica){
            cout<<"Si es simetrica";
        }else{
            cout<<"No es simetrica";
        }
    }else{
        cout<<"No es simetrica";
    }
    cout<<endl;

    for(int i=0; i<fil;++i)
        delete[] matrix[i];
    delete[] matrix;    
    system("pause");
    return 0;
}