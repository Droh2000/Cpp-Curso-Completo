/*

    &n -> La direccioon de n
    *n -> La variable cuya direccion esta almacenada en n

    Un puntero es una variable donde almacena la direccion de memoria
    donde se esta guardando otra variable
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    // Ahora no solo queremos imprimir la memoria sino tambien la direccion
    // de memoria donde se almacena el valor
    int num;
    num = 20;
    cout<<"Numero: "<<num<<endl;
    cout<<"Direccion de Memoria: "<<&num<<endl;

    // Puntero
    int *dir_num;// Nos almacena la direccion de memoria de una variable entera
    // Almacenamos la direccion exacta de la variable "num"
    dir_num = &num;
    // Como le decimos donde se esta almacenando la vairable tambien podemos imprimir lo que hay en esa pocicion   
    cout<<"Numero: "<<*dir_num<<endl; // Aqui imprimimos lo que encuentre en la direccion de memoria
    cout<<"Direccion de Memoria: "<<dir_num<<endl; 

    // Para almacenar la pocicion de memoria de la variable a un puntero, este tiene que ser del mismo tipo
    // de datos que el de la variable 

    getch();
    return 0;
}