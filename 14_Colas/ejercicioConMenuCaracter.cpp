#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};

void menu();
void insertarCola(Nodo *&, Nodo *&, char);
bool cola_vacia(Nodo *frente);
void siprimirCola(Nodo *&, Nodo *&, char &);

int main(){
    menu();

    getch();
    return 0;
}

void menu(){
    // Creamos los dos nodos
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int opcion;
    char dato;

    do{
        cout<<"\nMenu:"<<endl;
        cout<<"1. Insertar un caracter en la cola"<<endl;
        cout<<"2. Mostrar todos los elementos de la cola"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Ingrese un Opcion: ";
        cin>>opcion;
        
        switch (opcion){
        case 1:
            cout<<"Ingrese el caracter para agregar: ";
            cin>>dato;
            insertarCola(frente, fin, dato);
            break;
        case 2:
            cout<<"\nMostrando todo los elementos de la Cola"<<endl;
            while(frente != NULL){ // Siginifica que hay mas nodos en la cola (Todo los elementos salen por el frente) 
                siprimirCola(frente, fin, dato);
                if(frente != NULL){
                    cout<<dato<<", ";    
                }else{  
                    cout<<dato<<"."<<endl;
                }
            }
            cout<<endl;
            system("pause");
            break;
        default:
            break;
        }
        system("cls");
    }while(opcion != 3);
}

void insertarCola(Nodo *&frente, Nodo *&fin, char n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;
    nuevo_nodo -> siguiente = NULL;

    if(cola_vacia(frente)){ 
        frente = nuevo_nodo;
    }else{
        fin -> siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo; 

    cout<<"\nElemento "<<n<<" insertado a la cola correcctamente"<<endl;
}

bool cola_vacia(Nodo *frente){
    return (frente == NULL) ? true : false;
}

void siprimirCola(Nodo *&frente, Nodo *&fin, char &n){
    n = frente -> dato;
    Nodo *aux = frente;

    if(frente == fin){
        frente = NULL;
        fin = NULL;
    }else{
        frente = frente -> siguiente;
    }
    delete aux;
}