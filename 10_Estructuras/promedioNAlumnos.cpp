#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

struct promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct alumno{
    string nombre;
    string sexo;
    int edad;
    struct promedio calif;
};

int main(){

    float prom = 0, mejorProm = 0;
    int n, pos = 0;
    cout<<"Ingrese el numero de alumnos: ";
    cin>>n;

    alumno *a = new alumno[n];
    
    cout<<"Ingrese los datos del Alumno: "<<endl;
    for (int i = 0; i < n; i++){
        cin.ignore(INT_MAX,'\n');
        cout<<"Nombre: ";
        getline(cin, a[i].nombre);
        cout<<"Genero: ";
        getline(cin, a[i].sexo);
        cout<<"Edad: ";
        cin>>a[i].edad;
        cout<<"\nIngrese sus calificaciones: "<<endl;
        cout<<"Nota 1: ";
        cin>>a[i].calif.nota1;
        cout<<"Nota 2: ";
        cin>>a[i].calif.nota2;
        cout<<"Nota 3: ";
        cin>>a[i].calif.nota3;

        prom = (a[i].calif.nota1+a[i].calif.nota2+a[i].calif.nota3)/3;
        if(prom > mejorProm){
            mejorProm = prom;
            pos = i;
        }
    }

    cout<<"\nDatos del mejor alumno: "<<endl;
    cout<<"Nombre: "<<a[pos].nombre<<endl;
    cout<<"Genero: "<<a[pos].sexo<<endl;
    cout<<"Edad: "<<a[pos].edad<<endl;
    cout<<"Calificacion Promedio: "<<mejorProm<<endl;

    delete[] a;
    getch();
    return 0;
}