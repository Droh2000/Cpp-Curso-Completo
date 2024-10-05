
#include<iostream>
#include<stdlib.h>
#include<array>

using namespace std;

int main(){

    int size;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> size;
    // Arreglo de tamano dinamico
    int *array = new int[size];

    for(int i=0;i<size;i++){
        cout << i+1 << ". Ingrese el valor: ";
        cin >> array[i];
    }

    cout << "Valores del arreglo en orden inverso"<<endl;
    for (int i = size-1; i >= 0; i--){
        cout << array[i] << endl;
    }
    
    delete [] array;
    system("pause");
    return 0;
}