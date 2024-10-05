
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int n;

    cout<<"Ingrese el tamano del arreglo: ";
    cin >>n;

    int *arr = new int[n];
    int mayor = 0;

    for (int i = 0; i < n; i++){
        cout<<i+1<<". Ingrese el elemento: ";
        cin>>arr[i];

        if(i==0){
            mayor = arr[i];
        }
        if(arr[i] > mayor){
            mayor = arr[i];
        }
    }

    cout << "El numero mayor ingresado es: "<<mayor;
    
    delete[] arr;
    getch();
    return 0;
}