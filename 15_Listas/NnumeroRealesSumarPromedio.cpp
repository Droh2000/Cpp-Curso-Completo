#include<iostream>
#include<conio.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main(){
    Nodo *lista= NULL;
    float num;
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

    calcularSumaPromedio(lista);

    getch();
    return 0;
}

void insertarLista(Nodo *&lista, float n){
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;
    
    nuevo_nodo -> dato = n;
    nuevo_nodo -> siguiente = NULL;

    if(lista == NULL){
        lista = nuevo_nodo;
    }else{
        aux = lista;
        
        while(aux->siguiente != NULL){
            aux = aux -> siguiente;
        }
        aux->siguiente = nuevo_nodo;
    }
    cout<<"\nElemento "<<n<<" insertado a la lista correctamente\n";
}

void mostrarLista(Nodo *lista){
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

void calcularSumaPromedio(Nodo *lista){
    float suma=0, promedio;
    int cont = 0;

    while(lista != NULL){
        suma += lista->dato;
        cont++;
        lista = lista->siguiente;
    }

    promedio = suma/cont;

    cout<<"\nEl suma es "<<suma<<endl;
    cout<<"El promedio es "<<promedio<<endl;
}