/*
    Enviar Arreglos a funciones con punteros
*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

// Para pasarle un arreglo a una funcion
// nececitamos enviar la primera pocicion del arreglo (Este es el parametro de tipo puntero)
// ademas enviar el numero de elementos
int mayorValor(int *, int);

int main(){
    // Tamano y creacion del Arreglo
    const int n = 5;
    int num[n] = {3,5,6,8,2};

    // Le pasamos la primera pocicion del arreglo y el numero de elementos
    // Recordemos que podria ser &num[0]
    cout<<"El mayo elementos es: "<<mayorValor(num, n);
    
    getch();
    return 0;
}

int mayorValor(int *dirVec, int n){
    int max = 0;
    for (int i = 0; i < n; i++){
        // * -> Es el valor que hay dentro de la direccion de memoria
        // dirVec -> La direccion del vector se inicia en la priemra pocicion del arreglo
        //          pero necesitamos recorrer todo el arreglo
        // +i -> Asi es como vamos avanzando en las pociciones del arreglo
        // Asi que incementamos la direccion de memoria pero obtenemos el valor que tiene
        if(*(dirVec+i) > max){ 
            max = *(dirVec+i);
        }
    }
    
    return max;
}