#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct alumno{
    char nombre[20];
    int edad;
    float promedio;
} a[3];

int main(){

    float prom = 0;
    string nombre="";

    cout<<"Ingrese datos de estudiantes: "<<endl;
    for(int i=0;i<3;i++){
        cout<<"Nombre: ";
        cin.getline(a[i].nombre,20,'\n');
        cout<<"Edad: ";
        cin>>a[i].edad;
        cout<<"Promedio: ";
        cin>>a[i].promedio;
        cin.ignore(INT_MAX, '\n');
        cout<<endl;
    }

    for (int i = 0; i < 3; i++){
        if(a[i].promedio > prom){
            prom = a[i].promedio;
            nombre = a[i].nombre;
        }
    }

    cout<<"Datos de los alumnos: "<<endl;
    for (int i = 0; i < 3; i++){
        cout<<"Nombre: "<<a[i].nombre<<endl;
        cout<<"Edad: "<<a[i].edad<<endl;
        cout<<"Promedio: "<<a[i].promedio<<endl;
    }
    cout<<"\nEl alumno "<<nombre<<" de promedio "<<prom<<". Es el de mejor promedio"<<endl; 
    
    system("pause");
    return 0;
}