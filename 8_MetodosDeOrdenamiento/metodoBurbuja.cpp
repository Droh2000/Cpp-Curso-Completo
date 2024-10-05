/*
    Revisa cada elementos de la lista comparando uno por uno
    intercambiando de pocicion si esta en el orden equivocado

    Los numeros menores van a quedar en las primeras pociones del arreglo
    (Este metodo da muchas vueltas al arreglo por eso es ineficiente y toma tiempo)

    Condicion:
        Si -> numeroActual > numeroSiguiente
            Cambio
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    int num[] = {4,5,3,6,1,2};
    int i, j, aux;

    for(i=0;i<5;i++){
        for(j=0;j<5-1;j++){
            if(num[j] > num[j+1]){
                aux = num[j];
                num[j] = num[j+1];
                num[j+1] = aux;
            }
        }
    }

    cout<<"Orden ascendente: "<<endl;
    for (i = 0; i < 5; i++){
        cout<<num[i]<<" ";
    }

    cout<<"\nOrden decendente: "<<endl;
    for (i = 4; i >= 0; i--){
        cout<<num[i]<<" ";
    }    

    cout<<endl;
    system("pause");
    return 0;
}