#include<iostream>
#include<conio.h>
using namespace std;

void mergeShort(int a[], int primero, int ultimo){
    int central;
    
    if(primero < ultimo){ // Podemos seguir sacando la mitad
        central = (primero + ultimo)/2; // indice central
        // Ordenamos la sublista izquierda
        mergeShort(a, primero, central);
        // Ordenamos la sublista Derecha
        mergeShort(a, central+1, ultimo);
        // Mezclamos y ordenamos sus elementos
        mezcla(a, primero, central, ultimo);
    }
}

void mezcla(int a[], int izquierda, int medio, int derecha){ // Arreglo y sus indices
    int *aux; 
    int i, k, z;
    
    aux = new int[derecha-izquierda + 1];
    
    i = z = izquierda; // empieza en 0
    k = medio+1; // empieza despues del centro
    
    while(i <= medio && k <= derecha){ 
        // Comparamos elementos de las sublistas y los metodos al arreglo aux
        if(a[i] <= a[k]){
            aux[z++] = a[i++];
        }else{
            aux[z++] = a[k++];
        }
    }
    // Copiamos elementos que hayan quedado en alguna de las sublistas a aux
    while(i <= medio){
    aux[z++] = a[i++];
    }

    while(k <= derecha){
    aux[z++] = a[k++];
    }
    // Pasamos los elementos de aux al arreglo "a"
    for(int i=izquierda;i <= derecha; i++){// Es menor o igual a derecho porque le pasamos el indice final n-1
        a[i] = aux[i];
    }

    delete aux;
} // Si da error que no reconoce, hay que ponerlo antes que la funcion de mergeSort

int main(){

    int a[] = {5,7,87,1,3,9};

    mergeShort(a, 0, 5);

    cout<<"Arreglo ordenado con Merge sort"<<endl; 
    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }

    getch();
    return 0;
}