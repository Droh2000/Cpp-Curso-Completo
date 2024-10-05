
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int n;
    cout << "Ingrese el tamano del arreglo: ";
    cin>>n;

    int *arr = new int[n];
    int suma = 0;
    bool numero = true;

    for (int i = 0; i < n; i++){
        cout<<i+1<<". Ingrese el numero: ";
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++){ 
        for (int j = 0; j < n; j++){ 
            if(arr[i] != arr[j]){
                suma += arr[j];
            }
        }        
        if(arr[i] == suma){
            cout << "Se encontro que el elemento: "<<arr[i]<<" equivale a la suma de todos los valores del array";
            numero = false;
            break;
        }
        suma = 0;
    }

    if(numero){
        cout << "No se encontro que ningun elemento sea igual a la suma de todos los valores del array";
    } 
    
    system("pause");
    return 0;
}