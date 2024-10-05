#include<iostream>
#include<stdlib.h>

using namespace std;

// Pasarle el array como parametro por referencia
void pedirDatos(int*& vec, int& n); 

// Funcion que rentorna el Array
int *cambiarSigno(int[], int);

int main(){

    int *vec, n;
    pedirDatos(vec, n);
    vec = cambiarSigno(vec, n);

    cout<<"Nuevos valores del arreglo: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<vec[i]<<endl;
    }
    
    delete[] vec;
    system("pause");
    return 0;
}

void pedirDatos(int*& vec, int& n){
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>n;
    vec = new int[n];
    
    cout<<"Ingrese los elementos del vector: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<(i+1)<<": ";
        cin>>vec[i];
    }
}

int *cambiarSigno(int vec[], int n) {
    for (int i = 0; i < n; i++){
        if(vec[i] > 0){
            vec[i] *= -1;
        }else if(vec[i] < 0){
            vec[i] *= -1;
        }
    }
    
    return vec;
}