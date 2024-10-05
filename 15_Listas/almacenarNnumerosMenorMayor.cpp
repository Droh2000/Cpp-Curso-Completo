#include<iostream>
#include<conio.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMenorMayor(Nodo *);

int main(){

    Nodo *lista= NULL;
    int num;
    char op;

    do{
        cout<<"Ingrese un numero";
        cin>>num;
        insertarLista(lista, num);

        cout<<"Quieres ingresar otro numero: (s/n)";
        cin>>op;
    }while(op == 's' || op == 'S');

    cout<<"\nLos elementos de la lista son:"<<endl;
    mostrarLista(lista);

    calcularMenorMayor(lista);

    getch();
    return 0;
}

// Agregar elementos al final de la lista
void insertarLista(Nodo *&lista, int n){
    /*
        Aqui los elementos ya no van a estar ordenados como antes
        sino que los vamos a insertar de forma consecutiva como los ingrese 
        el usuario
    */
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;
    // Rellenamos los campos de nuevo nodo
    nuevo_nodo -> dato = n;
    nuevo_nodo -> siguiente = NULL;

    if(lista == NULL){
        lista = nuevo_nodo; // Agregamos el primer elemento a la lista
    }else{
        // En caso que no este vacia la lista
        aux = lista; // aus apunta al inicio de la lista
        // Para agregar un elemento aux debe avanzar hasta que ya no haya un elemento
        // y ahi es donde vamos a agregar el elemento para ponerlos siempre al final de la lista
        while(aux->siguiente != NULL){
            aux = aux -> siguiente;
        }
        aux->siguiente = nuevo_nodo; // Agregamos el nuevo nodo a la lista
    }
    cout<<"\nElemento "<<n<<" insertado a la lista correctamente\n";
}

void mostrarLista(Nodo *lista){
    //Nodo *actual = new Nodo();
    //actual = lista;
    while(lista != NULL){
        cout<<lista->dato<<" -> ";
        lista = lista -> siguiente;
    }
}

void buscarLista(Nodo *lista, int n){
    bool band = false;
    
    Nodo *actual = new Nodo();
    actual = lista;

    while(actual != NULL && actual->dato <= n){
        if(actual->dato == 0){
            band = true;
        }
        actual = actual->siguiente;
    }

    if(band == true){
        cout<<"\nEl elemento "<<n<<" si a sido encontrado en Lista\n";
    }else{
        cout<<"\nEl elemento "<<n<<" NO a sido encontrado en Lista\n";
    }
}

void calcularMenorMayor(Nodo *lista){
    int mayor=0, menor=99999;

    while(lista != NULL){
        if(lista->dato > mayor){
            mayor = lista->dato;
        }
        if(lista->dato < menor){
            menor = lista -> dato;
        }
        lista = lista->siguiente;
    }

    cout<<"\nEl mayor elemento es "<<mayor<<endl;
    cout<<"El menor elemento es "<<menor<<endl;
}