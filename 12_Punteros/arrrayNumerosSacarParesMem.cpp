#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num[10], *dir_mem;

    cout<<"Ingrese los valores: "<<endl;
    for (int i = 0; i < 10; i++){
        cout<<"["<<i+1<<"]: ";
        cin>>num[i];
    }

    dir_mem = num; // El puntor apunta a la primera pocicion del arreglo

    // Enconttrar Pares
    for (int i = 0; i < 10; i++){
        if(*dir_mem % 2 == 0){
            cout<<"El numero: "<<*dir_mem<<" es par"<<endl;
            cout<<"Memoria: "<<dir_mem<<endl;
        }
        // Recorremos la direccion de memoria
        dir_mem++;
    }
    
    

    getch();
    return 0;
}