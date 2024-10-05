#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void pedirDatos(int*&, int&);
int *getImpares(int[], int&);
void imprimirImpares(int[], int);

int main(){

    int *vec, n;
    pedirDatos(vec, n);
    int *vec2 = getImpares(vec, n);
    imprimirImpares(vec2, n);
    
    delete[] vec;
    delete[] vec2;// Aqui borramos tambien el apuntador usando dentro de la funcion
    getch();
    return 0;
}

void pedirDatos(int*& vec, int& n){
    cout<<"Ingrese la cantiadad de elementos: ";
    cin>>n;
    vec = new int[n];

    cout<<"Ingrese los elementos: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<(i+1)<<": ";
        cin>>vec[i];
    }
}

int *getImpares(int vec[], int& n){
    int *vecTemp = new int[n];
    int j=0;
    for (int i = 0; i < n; i++){
        if(vec[i] % 2 != 0){
            vecTemp[j] = vec[i];
            j++;
        }
    }
    n = j; // Para la proxima Impresion
    return vecTemp;
}

void imprimirImpares(int vec[], int n){
    cout<<"Elementos Impares del Vector"<<endl;
    for (int i = 0; i < n; i++){
        cout<<vec[i]<<endl;
    }   
}