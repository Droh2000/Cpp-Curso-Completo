#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num, *pos_mem, cont=0;

    cout<<"Ingrese un numero: ";cin>>num;
    
    pos_mem = &num;

    for (int i = 1; i < *pos_mem; i++){
        if(*pos_mem % i == 0){
            cont++; // Si es mayor a 2 no es primo
        }
    }
    
    if(cont > 2){
        cout<<"El numero "<<*pos_mem<<" no es primo"<<endl;
        cout<<"Direccion de memoria: "<<pos_mem<<endl;
    }else{
        cout<<"El numero "<<*pos_mem<<" es primo"<<endl;
        cout<<"Direccion de memoria: "<<pos_mem<<endl;
    }

    getch();
    return 0;
}