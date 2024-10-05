#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int&);

int main(){
    Nodo *pila = NULL;
    int dato;
    char resp;

    // Se agregaran tanto elementos hasta que el ususrio lo quiera
    do{
        cout<<"Ingrese un dato: ";
        cin>>dato;
        agregarPila(pila, dato);

        cout<<"\nDeseas agregar otro elemento a la pila (s/n):";
        cin>>resp;

    }while(resp=='S'||resp=='s');

    cout<<"\nSacando todo los elementos de la pila: "<<endl;
    while(pila != NULL){
        sacarPila(pila, dato);
        if(pila != NULL){
            cout<<dato<<", ";
        }else{
            cout<<dato<<", FIN";
        }
    }

    system("pause");
    return 0;
}

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"\nElemento "<<n<<" se agrego correctamente"<<endl;
}

void sacarPila(Nodo *&pila, int& n){
    Nodo *aux = pila;
    n = aux -> dato;
    pila = aux -> siguiente;
    delete aux;            
}