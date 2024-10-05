#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void pedirDatos();
void buscarValor(int *, int);

int n, *arr;

int main(){

    pedirDatos();
    buscarValor(arr,n);

    delete[] arr;
    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>n;

    arr = new int[n];

    cout<<"Ingrese los datos: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<"Valor ["<<i+1<<"]: ";
        cin>>*(arr+i);
    }
}

// Busquedad Secuencial
void buscarValor(int *arr, int n){
    int dato, i = 0;
    char band = 'F';
    cout<<"Ingrese el valor a buscar: ";
    cin>>dato;

    while (band == 'F' && i<n){
        if(*(arr+i) == dato){
            band = 'V';
            break;
        }    
        i++;
    }

    if(band == 'V'){
        cout<<"El numero "<<dato<<" se encontro en el arreglo"<<endl;
        cout<<"En la posicion "<<i-11<<endl;
    }else{
        cout<<"El numero "<<dato<<" No se encontro"<<endl;
    }
}