/*
    Aqui nececitamos que el arreglo este ordenado en ascendente
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    int num[]={1,2,3,4,5};
    int inferior,superior,mitad,dato;
    char band = 'F';

    dato = 4;

    inferior=0;
    superior=5; // Con el numero de elementos que tiene el arreglo

    while(inferior <= superior){
        mitad = (inferior+superior)/2; // Esta es la pocicion del arreglo donde se verifica

        if(num[mitad] == dato){
            band = 'V';
            break;
        }
        if(num[mitad] > dato){
            superior = mitad;
            mitad = (inferior+superior)/2;
        }
        if(num[mitad] < dato){
            inferior = mitad;
            mitad = (inferior+superior)/2;
        }
    }

    if(band == 'V'){
        cout<<"El numeor a sido encontrado en la posicion "<<mitad<<endl;
    }else{
        cout<<"El numero no a sido encontrado"<<endl;
    }

    system("pause");
    return 0;
}