#include<iostream>
#include<stdlib.h>

using namespace std;

int sumar(int[], int);
void pedirDatos();
void llenarVector(int[], int);

int n;
int *vec;

int main(){

    vec = new int[n];

    pedirDatos();
    llenarVector(vec, n);

    cout<<"La sumatoria de los valores es: "<<sumar(vec, n)<<endl;
    
    delete[] vec;
    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el tamano del vector: ";
    cin>>n;
}

void llenarVector(int vec[], int tam){
    for (int i = 0; i < tam; i++){
        cout<<(i+1)<<". Ingresse valor: ";
        cin>>vec[i];
    }
}

int sumar(int vec[], int tam){
    int sum = 0;
    for (int i = 0; i < tam; i++){
        sum += vec[i];
    }
    return sum;
}