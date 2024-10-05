#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>

using namespace std;

// Este caso nos pide los datos para N alumnos
struct Alumno{
    string nombre;
    int edad;
    float promedio;
};// a[3], *dirAlum = a;

void pedirCantidadAlumnos(int&);
void crearArregloAlumnos(Alumno *&, int);
void pedirDatosAlumnos(Alumno *, int);
void obtenerMejorPromedio(Alumno *, int);

int main(){

    int n;
    Alumno *a, *dirAlum;

    pedirCantidadAlumnos(n);
    crearArregloAlumnos(a, n);
    dirAlum = a; // Hacemos referencia a la primera direccion de memoria del arreglo
    pedirDatosAlumnos(dirAlum, n);
    obtenerMejorPromedio(dirAlum, n);

    delete[] a;
    getch();
    return 0;
}

void pedirCantidadAlumnos(int &n){
    cout<<"Ingrese la cantidad de alumnos: ";
    cin>>n;
}

void crearArregloAlumnos(Alumno*& a, int n){
    a = new Alumno[n];
}

void pedirDatosAlumnos(Alumno *a, int n){
    cout<<"Ingrese los datos de los Alumnos: "<<endl;
    for (int i = 0; i < n; i++){
        // De esta manera guardamos datos a un arreglo de estructura en forma de puntero
        cin.ignore(INT_MAX, '\n');
        cout<<"Nombre: "; getline(cin, (a+i)->nombre); 
        cout<<"Edad: "; cin>>(a+i)->edad;
        cout<<"Promedio: ";cin>>(a+i)->promedio;
        cout<<endl;
    }   
}

void obtenerMejorPromedio(Alumno *a, int n){
    float mejorPromedio = 0.0;
    int pos = 0;
    for (int i = 0; i < n; i++){
        if((a+i)->promedio > mejorPromedio){
            mejorPromedio = a[i].promedio; 
            pos = i;
        }
    }

    cout<<"\nEl alumno con el mejor promedio: "<<endl;
    cout<<"Nombre: "<<(a+pos)->nombre<<endl;
    cout<<"Edad: "<<(a+pos)->edad<<endl;
    cout<<"Promedio: "<<(a+pos)->promedio<<endl;
}