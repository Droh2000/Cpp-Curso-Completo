#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos(int&);
void verificarOrden(int[], int);

int *vec;

int main(){

    int n;
    pedirDatos(n);
    verificarOrden(vec, n);

    delete[] vec; 
    getch();
    return 0;
}


void pedirDatos(int& n){
    cout<<"Ingrese la cantidad del elementos: ";
    cin>>n;

    vec = new int[n];

    cout<<"Ingrese los elementos del vector: "<<endl;
    for(int i=0; i<n; i++){
        cout<<(i+1)<<": ";
        cin>>vec[i];
    }
}

void verificarOrden(int vec[], int n){
    bool ordenado = true;
    for (int i = 0; i < n-1; i++){
        if(vec[i] > vec[i+1]){
            ordenado = false;
            break;
        }
    }

    if(ordenado){
        cout<<"El vector esta ordenado"<<endl;
    }else{
        cout<<"El vector no esta ordenado"<<endl;
    }
}