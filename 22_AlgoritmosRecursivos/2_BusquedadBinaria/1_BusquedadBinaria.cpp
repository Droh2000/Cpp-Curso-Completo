#include<iostream>
#include<conio.h>
using namespace std;

int busquedadBinaria(int a[], int dato, int inferior, int superior){
    int mitad;
    if(inferior > superior){ // El dato no existe en el arreglo
        return -1;
    }else{
        mitad = (inferior+superior)/2;
        if(dato == a[mitad]){ // Caso base
            return mitad; // Este es el indice no el valor
        }else if(dato > a[mitad]){
            // Buscamos por la derecha
            return busquedadBinaria(a, dato, mitad+1, superior);
        }else{
            // Buscamos por la izquierda
            return busquedadBinaria(a, dato, inferior, mitad-1);
        }
    }
}

int main(){
    int a[] = {3,4,5,8,9,10};
    int dato = 9;

    int retorno = busquedadBinaria(a, dato, 0, 5);

    if(retorno == -1){
        cout<<"El dato no ha sido encontrado"<<endl;
    }else{
        cout<<"El dato se encontro en la pocicion "<<retorno<<endl;
    }

    getch();
    return 0;
}