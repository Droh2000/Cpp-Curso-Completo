#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int arr[100], n, *pos_mem;
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>n;

    cout<<"Ingrese los valores: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<"["<<(i+1)<<"]: ";
        cin>>arr[i];
    }

    pos_mem = arr; // Pasamos la posicion de memoria del primer elemento del array

    int menor = 9999;
    for (int i = 0; i < n-1; i++){
        if(*pos_mem < menor){
            menor = *pos_mem;
        }
        pos_mem++;
    }

    cout<<"El menor elemnto del arreglo es: "<<menor<<endl;

    _getch();
    return 0;
}