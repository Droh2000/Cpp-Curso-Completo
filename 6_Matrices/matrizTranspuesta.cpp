#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int matrix[3][3];
    int matrix2[3][3];

    for (int i = 0; i < 3; i++){
        for(int j=0; j<3; j++){
            cout<<"["<<i<<","<<j<<"]. Ingrese el valor: ";
            cin>>matrix[i][j];
        }
    }
    
    int k, l=0;
    for (int i = 0; i < 3; i++){
        k=0;
        for (int j = 0; j < 3; j++){
            matrix2[k][l] = matrix[i][j];
            ++k;
        }
        ++l;
    }

    cout<<"La matriz transpuesta es: "<<endl;
    for (int i = 0; i < 3; i++){
        for(int j=0; j<3; j++){
            cout<<"["<<matrix2[i][j]<<"]";
        }
        cout<<endl;
    }
    
    cout<<endl;
    system("pause");
    return 0;
}