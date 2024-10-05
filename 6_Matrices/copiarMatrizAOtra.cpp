
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int matrix[2][2]={{1,2},{4,3}};
    int matrix2[2][2];

    cout<<"Matriz 1: "<<endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout<<"["<<matrix[i][j]<<"]";
        }
        cout<<endl;
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matrix2[i][j] = matrix[i][j];
        }
    }
    
    cout<<"Matriz 2: "<<endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout<<"["<<matrix2[i][j]<<"]";
        }
        cout<<endl;
    }

    cout<<endl;
    system("pause");
    return 0;
}