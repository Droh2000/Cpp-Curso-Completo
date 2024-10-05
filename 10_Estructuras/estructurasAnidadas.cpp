
//Es una estructura dentro de otra

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

// Aqui tenemos que "dir_empleado" que es una variable de la estructura creada arriba
struct empleado{
    char nombre[20];
    struct info_direccion dir_empleados;
    double salario; 
}empleados[2];// Arreglo de estructuras (Aqui tenemos 2 estructruas de tipo Empleado) en cada pocicion tenemos una estructra completa

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    // Pedir los datos para 2 empleados 
    for(int i=0; i<2; i++){
        // Como tenemos muchas cadenas de caracteres el buffer se llenara muy rapido y podremos ingresar
        // los datos correctamente, asi que limpiemos el buffer
        fflush(stdin); // Vaciar el buffer y permitir digitar los valores
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre,20,'\n');

        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_empleados.direccion,30,'\n');

        cout<<"Digite su Ciudad: ";
        cin.getline(empleados[i].dir_empleados.ciudad,20,'\n');

        cout<<"Digite su provincia: ";
        cin.getline(empleados[i].dir_empleados.provincia,20,'\n');

        cout<<"Digite su salario: ";
        cin>>empleados[i].salario;
    }

    // Imprimir los datos
    for(int i=0;i<2;i++){
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleados.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleados.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].dir_empleados.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
        cout<<endl;
    }

    system("pause");
    return 0;
}