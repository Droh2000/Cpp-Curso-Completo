/*
    Busca el minimo elemento de la lista
    Intercambia con el primer elemento (Lo ponemos en la primera pocicion)
    Busca el minimo del resto de la lista
    Intercambia con el segundo (Que es la segunda pocicion a la que avanzamos despues de cambiar el primero)
    Y asi sucesivamente
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    int num[]={3,2,1,5,4};
    int i,j,aux,min;

    for (i = 0; i < 5; i++){
        min = i; // Suponemos que en esta posicion esta el valor minimo
        for (j = i+1; i < 5; i++){// i+1 porque ya la pocicion 1 la seleccionamos como el menor 
            // Si el numero en el que vamos [j] que es la pocicion i+1 comprueba si es al valor que esta
            // en la pocicion 0
            if(num[j] < num[min]){
                min = j; // Cambiamos al que si es el menor
            }
        }
        // Hacemos el intercambio
        aux = num[i];
        num[i] = num[min];
        num[min] = aux;
    }

    cout<<"Orden normal: ";
    for (i = 0; i < 5; i++){
        cout<<num[i]<<" ";
    }
    
    cout<<endl;
    system("pause");
    return 0;
}