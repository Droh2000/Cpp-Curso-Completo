/*
            Guardar numeros de telefonos que muestren un menu con
            las siguientes opciones
                1. Crear nombre apellido y telefono
                2. Agregar mas contato con los mismos datos de arriba
                3. Visualizar contactos existentes
*/
#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>

using namespace std;

void menu();
void crearContacto();
void agregarMasContactos();
void verAgenda();

// Como requerimos varios datos para una persona usaremos un estructura
struct Datos{
    string nombre, aprellido, telefono;
} datos;

int main(){
    menu();

    system("pause");
    return 0;
}

void menu(){
    int op;

    do{
        cout<<"\tMENU"<<endl;
        cout<<"1. Crear Contacto"<<endl;
        cout<<"2. Agregar mas contactos"<<endl;
        cout<<"3. Visualizar contactos existentes"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Opcion: "<<endl;
        cin>>op;
        cin.ignore(INT_MAX, '\n');

        switch (op){
        case 1:
            crearContacto();
            cout<<endl;
            system("pause");
            break;
        case 2:
            agregarMasContactos();
            cout<<endl;
            system("pause");
            break;
        case 3:
            verAgenda();
            cout<<endl;
            system("pause");
            break;            
        default:
            break;
        }
        system("cls");
    }while(op != 4);
    

}

void crearContacto(){
    // Queremos escribir texto en el archivo
    ofstream archivo;

    archivo.open("AgendaTelefonica.txt", ios::out);

    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    archivo<<"\tAgenda Telefonica"<<endl;

    // Agregar datos del contacto y pasarlos al archivo
    char op;
    do{
      cout<<"\nIngrese Nombre: ";
      getline(cin, datos.nombre);
      cin.ignore(INT_MAX, '\n');
      cout<<"Ingrese el Apellido: ";
      getline(cin, datos.aprellido);
      cout<<"Ingrese el telefono: ";
      getline(cin, datos.telefono);

      archivo<<"\nNombre: "<<datos.nombre<<endl;
      archivo<<"Apellido: "<<datos.aprellido<<endl;
      archivo<<"Telefono: "<<datos.telefono<<endl;

      cout<<"Quiere agregar otro contacto (s/n): ";
      cin>>op;
    }while (op=='s' || op=='S');
    
    archivo.close();
}

void agregarMasContactos(){
    // Aqui tenemos que escribir dentro del archivo ya existente
    ofstream archivo;

    // Debe ser el mismo nombre con el que lo creamos
    archivo.open("AgendaTelefonica.txt", ios::app);

    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    char op;
    do{
      cout<<"\nIngrese Nombre: ";
      getline(cin, datos.nombre);
      cin.ignore(INT_MAX, '\n');
      cout<<"Ingrese el Apellido: ";
      getline(cin, datos.aprellido);
      cout<<"Ingrese el telefono: ";
      getline(cin, datos.telefono);

      archivo<<"\nNombre: "<<datos.nombre<<endl;
      archivo<<"Apellido: "<<datos.aprellido<<endl;
      archivo<<"Telefono: "<<datos.telefono<<endl;

      cout<<"Quiere agregar otro contacto (s/n): ";
      cin>>op;
    }while (op=='s' || op=='S');
    
    archivo.close();
}

void verAgenda(){
    // Leer el archivo
    ifstream archivo;
    string texto;

    archivo.open("AgendaTelefonica.txt", ios::in);

    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo, texto);
        cout<<texto<<endl;
    }

    archivo.close();   
}