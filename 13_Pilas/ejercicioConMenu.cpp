#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};

void menu();
void agregarPila(Nodo *&, char);
void sacarPila(Nodo *&, char&);

int main(){

    menu();

    system("pause");
    return 0;
}

void menu(){
    
    Nodo *pila = NULL;
    int opcion;
    char dato;

    do{
        cout<<"\nMenu:"<<endl;
        cout<<"1. Insertar un caracter a la Pila"<<endl;
        cout<<"2. Mostrar todos los elementos de la pila"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Opcion: "<<endl;
        cin>>opcion;

        switch (opcion){
        case 1:
            cout<<"\nDigite un caracter: ";cin>>dato;
            agregarPila(pila, dato);
            break;
        case 2:
            cout<<"\nSacando todo los elementos de la pila: "<<endl;
            while(pila != NULL){
                sacarPila(pila, dato);
                if(pila != NULL){
                    cout<<dato<<", ";
                }else{
                    cout<<dato<<", FIN";
                }
            }
            cout<<endl;
            system("pause"); // Para poder ver los elementos de la pila antes que se limpie la pantalla
            break;
        default:
            break;
        }
        system("cls"); // Esto es para limpiar pantalla para que no se ponga muchas veses el menu
    }while(opcion != 3);
}

void agregarPila(Nodo *&pila, char n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"\nElemento "<<n<<" se agrego correctamente"<<endl;
}

void sacarPila(Nodo *&pila, char& n){
    Nodo *aux = pila;
    n = aux -> dato;
    pila = aux -> siguiente;
    delete aux;            
}