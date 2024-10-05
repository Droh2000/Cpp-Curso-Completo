#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

/*
    El cliente va a tener mas de un dato 
    y sera un estrcutra
*/
struct Cliente{
    char nombre[30];
    char clave[10];
    int edad;
};

struct Nodo{
    Cliente c; // El dato es del tipo estructura
    Nodo *siguiente;
};

void menu();
void cargarClientes(Cliente &);
void insertarCola(Nodo *&, Nodo *&, Cliente);
bool cola_vacia(Nodo *frente);
void siprimirCola(Nodo *&, Nodo *&, Cliente &);

int main(){
    menu();
    getch();
    return 0;
}

void cargarClientes(Cliente &c){
    // Le pedimos los datos de los clientes
    cout<<"\tAgregando nuevo cliente: "<<endl;
    // Aqui se va a llenar el buffer
    cout<<"Nombre: ";cin.getline(c.nombre,30,'\n');
    cout<<"Clave: ";cin.getline(c.clave,10,'\n');
    cout<<"Edad: ";cin>>c.edad;
    cout<<endl;
}

void menu(){
    // Creamos los dos nodos
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    Cliente c;
    char opcion;

    do{
        cargarClientes(c);
        insertarCola(frente, fin, c);
        cout<<"Quiere ingresar otro Cliente (s/n): ";
        cin>>opcion;
    }while(opcion == 'S' || opcion == 's');

    cout<<"\nMostrando todo los clientes de la Cola"<<endl;
    while(frente != NULL){ 
        siprimirCola(frente, fin, c);
        cout<<"Nombre: "<<c.nombre<<endl;
        cout<<"Clave: "<<c.clave<<endl;
        cout<<"Edad: "<<c.edad<<endl;
        cout<<endl;
    }
    cout<<endl;
}

void insertarCola(Nodo *&frente, Nodo *&fin, Cliente n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> c = n;
    nuevo_nodo -> siguiente = NULL;

    if(cola_vacia(frente)){ 
        frente = nuevo_nodo;
    }else{
        fin -> siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo; 

    cout<<"\nElemento insertado a la cola correcctamente"<<endl;
}

bool cola_vacia(Nodo *frente){
    return (frente == NULL) ? true : false;
}

void siprimirCola(Nodo *&frente, Nodo *&fin, Cliente &n){
    n = frente -> c;
    Nodo *aux = frente;

    if(frente == fin){
        frente = NULL;
        fin = NULL;
    }else{
        frente = frente -> siguiente;
    }
    delete aux;
}