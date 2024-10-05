#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarDatos(int *, int);
void intercambio(int *, int *);

int cantNum, *arr;

int main(){

    pedirDatos();
    ordenarArreglo(arr, cantNum);
    mostrarDatos(arr, cantNum);

    delete[] arr;
    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese la cantiadad de numeros: ";
    cin>>cantNum;

    arr = new int[cantNum];

    cout<<"Ingrese los valores: "<<endl;
    for (int i = 0; i < cantNum; i++){
        cout<<"Valor ["<<i+1<<"]: ";
        // Guardamos el elemento con Puntero
        cin>>*(arr+i);// -> Es lo mismo: arr[i]
    }
}

void ordenarArreglo(int *dirVec, int cant){
    for (int i = 0; i < cant; i++){
        for (int j = 0; j < cant-1; j++){
            if(*(dirVec+j) > *(dirVec+(j+1))){
                /*
                    int aux = *(dirVec+j);
                    *(dirVec+j) = *(dirVec+j+1);
                    *(dirVec+j+1) = aux;              
                */
                intercambio(&*(dirVec+j), &*(dirVec+(j+1)));
            }
        }
    }
}

void intercambio(int *dirNum1, int *dirNum2){
   int aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;
}

void mostrarDatos(int *dirVec, int n){
    cout<<"\nArreglo Ordenado: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<*(dirVec+i)<<" ";
    }
    cout<<endl;
}