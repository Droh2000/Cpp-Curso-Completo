#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int num, *dir_num;

    cout<<"Ingrese un numero: ";cin>>num;

    dir_num = &num; // Almacenamos la pocicion de memoria

    // Si el numero que esta en la pocicion de memoria que estamos señalando
    if(*dir_num%2==0){
        cout<<"El numero "<<*dir_num<<" es impar"<<endl;
        cout<<"Posicion: "<<dir_num<<endl;
    }else{
        cout<<"El numero: "<<*dir_num<<" es impar"<<endl;
        cout<<"Posicion: "<<dir_num<<endl;
    }

    system("pause");
    return 0;
}