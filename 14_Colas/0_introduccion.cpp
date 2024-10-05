/*
    Estructura  FIFO 
    es una secuencia de elementos en la que la operacion insercion se realiza por un
    extremo y la extraccion por el otro (El orden depende de como lleguen los datos,
    el primero en llegar es el primero en salir)
        Va a tener dos lugares: Frente (De aqui se quitan los elementos) y Final (De aqui se agregan elementos)
    Operaciones:
        La operacion de Insertar agrega un elemento por el extremo final de la cola y la operacion Quitar elimina
        un elemento por el extremo opuesto
    Forma:
        Vamos a tener el dato, un puntero Siguiente que apunta al nodo que le sigue
        todo esto es un Nodo pero ahora en la cola vamos a tener dos nodos que son el
        Frente de la cola (el primer elemento que entro) y el Fin de la cola (El ultimo elemento que entro)
    
    Insertar elementos en una Cola (3 Pasos):
        1. Crear espacio en memoria para almacentar un nodo
            Frente  -> NULL y Fin -> NULL
            Se crea un "nuevo_nodo" que señala a sus dos campos (dato y siguente)
        2. Asignar ese nuevo nodo al dato que queremos insertar
            n = Dato - Este valor se inerta en el nuevo nodo
            nuevo_nodo -> n;
            nuevo_nodo -> siguiente = NULL;
        3. Asignar los punteros frente y fin hacia el nuevo nodo
            Para esto necesitamos saber si la cola esta vacia o tiene un nodo o mas
            Si esta vacia: Tenemos el nuevo nodo creado pero no lo hemos agregado a la cola
                            y ademas Frente y Fin que creamos al inicio apunten a este nuevo nodo creado
            Si hay 1 o mas nodos: El Fin siempre tiene que estar señalando al ultimo nodo agregado  
        Asi queda la Funcion:
        void insertarCola(Nodo *&frente, Nodo *&fin, int n){
            Nodo *nuevo_nodo = new Nodo();
            nuevo_nodo -> dato = n;
            nuevo_nodo -> siguiente = NULL;

            if(cola_vacia(frente)){ // Funcion para detectar si la cola esta vacia
                frente = nuevo_nodo;
            }else{
                fin -> siguiente = nuevo_nodo; // Apunte al ultimo nodo agregado
            }

            fin = nuevo_nodo; // Fin siempre tiene que apuntar al nuevo nodo
        }

    Quitar elementos (3 Pasos):
        1. Obtener el valor del nodo
            Frente y Fin estan señalando al respectivo nodo, necesitamos obtener le valor
            n = frente -> dato;
        2. Crear un nodo aux y asignarle el frente de la cola
            Nodo *aux = frente; -> Aqui esta el dato que queremo eliminar señalando lo mismo que tiene Frente
        3. Eliminar el nodo del frente de la cola
            En caso de tener 1 Nodo:
                Aqui Frente y Fin señalan al unico valor y Aux de igual manera
                de modo que Frente y Fin señalaran a NULL y aux quedara solo apuntando al nodo con el valor
                de forma que con el Delete aux borramos el valor
            En caso de tener mas de 1 Nodo:
                Aqui Frente y Aux apuntan al mismo valor que es el de eliminar entonces Frente debe apuntar
                a siguiente para apuntar al siguiente valor que tenga y aux se quedara solo apuntando al valor que tenia
                y con delete aux se elimina el nodo

        Funcion (El valor "n" es por referencia porque lo vamos a eliminar):
            void siprimirCola(Nodo *&frente, Nodo *&fin, int &n){
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
*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *frente);
void siprimirCola(Nodo *&, Nodo *&, int &);

int main(){

    // Creamos los dos nodos
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    int dato;
    cout<<"Ingrese un numero: ";
    cin>>dato;

    insertarCola(frente, fin, dato);

    while(frente != NULL){ // Siginifica que hay mas nodos en la cola (Todo los elementos salen por el frente) 
        siprimirCola(frente, fin, dato);
    }


    getch();
    return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin, int n){
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
    // El primer eleemento que se agrega es el frente
    /*if(frente == NULL){
        return true;
    }
    return false;*/

    // Lo mismo de arriba pero en una sola linea de codigo
    return (frente == NULL) ? true : false;
}

void siprimirCola(Nodo *&frente, Nodo *&fin, int &n){
    n = frente -> dato;
    Nodo *aux = frente;

    if(frente == fin){
        frente = NULL;
        fin = NULL;
    }else{
        frente = frente -> siguiente;
    }
    delete aux;

    cout<<"\nElemento "<<n<<" eliminado correctamen"<<endl;
}