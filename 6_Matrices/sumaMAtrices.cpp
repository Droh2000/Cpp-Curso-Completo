#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix3[3][3];

    cout<<"Matriz 1: "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"["<<matrix1[i][j]<<"]";        
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matriz 2: "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"["<<matrix2[i][j]<<"]";        
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matrix3[i][j] = matrix1[i][j]+matrix2[i][j];        
        }
    }

    cout<<"La suma de las matrices es: "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"["<<matrix3[i][j]<<"]";
        }
        cout<<endl;
    }
    
    getch();
    return 0;
}