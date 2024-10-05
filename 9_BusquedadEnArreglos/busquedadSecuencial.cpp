/*
    Buscamos secuencialmente en todas las pociciones del arreglo
    para ver si encuentra el dato

*/
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    int a[] = {3,4,5,6};
    int i, dato;
    char band = 'F';

    dato = 4;
    i = 0;
    while(band == 'F' && i<5){
        if(a[i] == dato){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout<<"El numero a buscar no existe en el arreglo"<<endl;
    }else if(band == 'V'){
        cout<<"El numero a sido encontrado en la pocicion "<<i-1<<endl;
    } 

    system("pause");
    return 0;
}