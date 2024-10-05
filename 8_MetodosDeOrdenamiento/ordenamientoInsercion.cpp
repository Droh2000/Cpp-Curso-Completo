/*
    Toma en cuenta la pocicion en la que va en el arreglo y
    comprueba su el elemento de su izquierda ya es menor que el elemento actual

    Condicion:
        Si: NumeroIZQ > NumeroActual
            Cambio (Despues verifica la misma condicion con el elemento cambiado
                    asi es como se ordenan los elementos que ya pasaron por esta condicion)
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    int num[] = {4,2,5,6,3,1};
    int i, pos, aux;

    for(i=0;i<6;i++){
        pos=i; // Nececitamos la pocicion
        aux = num[i]; // Nececitamos el valor

        // En la pocicion inicial (0) no hay nada a su izquierda por tanto no se puede comparar
        // tambien ponemos la condicion del oredenamiento
        while((pos>0) && (num[pos-1]>aux)){
            // Intercambio
            num[pos] = num[pos-1];
            pos--; // Se regresa para verificar que el numero intercambiado se ordene con los demas numeros a su izuqierda
        }
        num[pos]=aux; // Actualizamos en cada iteracion en que numero vamos
    }

    cout<<"Orden Ascendente: "<<endl;
    for (i = 0; i < 6; i++){
        cout<<num[i]<<" ";
    }
    
    cout<<endl;
    system("pause");
    return 0;
}