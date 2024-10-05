/*
    Concepto:
        Estructura de datos de entradas ordenadas tales que solo se
        pueden introducir y eliminar por un extremo
            - Todos los datos entran por la parte de arriba
            - Solo se puede sacar el ultimo dato que entro
                LIFO -> (El utlimo en entrar es el primero en salir)   
        Operaciones:
            - Push: Insertar
            - Pop: Quitar
        Forma de creacion:
            Esto se hace con una lista, debe tener dos campos:
                - Dato (De cualquier tipo)
                - Puntero (Nos señala hacia la pocicion de abajo de la pila)    
                        El primero que entra señalara a NULL
                Cada de esto son un nodo (Dato y Siguiente(Puntero))
            Los Nodos son estructuras:
                struct Nodo{
                    int dato;
                    Nodo *siguiente;
                };
    Insertar elemento en la Pila (4 Pasos)
        1. Crear el espacio en memoria para almacenar un nodo
            pila = NULL -> Primero se inicializa esta variable de tipo nodo, de esta manera
                            le decimos a un puntero que esta vacia
            Nodo *nuevo_nodo = new Nodo(); -> Crear un nuevo nodo que es el struct

            Funcion:
            void agregarPila(Nodo *&pila, int n){Nodo *nuevo...}  -> El nodo se pasa por referencia porque la pila
                        va a estar cambiando muchas veses durante el proceso y "n" es el dato a agregar a la pila   

        2. Cargar el valor dentro del nodo(Dato)
            En el parametro "n" de la funcion se lo asignamos como: nuevo_nodo -> dato = n; (Esta linea estaria dentro de la funcion)

        3. Cargar el puntero pila dentro del nodo(*Siguiente)
            Rellenamos el puntero como: nuevo_nodo -> siguiente = pila; -> Recoredemos que pila en un inicio vale NULL

        4. Asignar el nuevo nodo pila
            La variable puntero pila debe siempre señalar la cima y la primera vez nos señala a NULL
            asi que: pila = nuevo_nodo; Asi pila señala al valor y el nodo señalando a NULL
            y asi logramos agregando los nuevos valores encima del ultimo  

        Cada uno de estos pasos van dentro de la Funcion
    
    Quitar Elementos (4 Pasos):
        1. Crear una variable *aux de tipo Nodo
             Nodo *aux = pila; -> Con esto "aux" señala a la cima de la pila
        2. Igualar n a aux -> dato
            n = aux -> dato; Con esto n tiene el valor del nodo porque este valor que es el ultimo es el
                                que se elimina
        3. Pasar Pila a siguiente Nodo
            Pila de señalar al nuevo nodo: pila = aux ->siguiente;
            que es el que estaba siguiente del que eliminamos
        4. Eliminar aux
            delete aux;

        Funcion Final:
            void sacarPila(Nodo *&pila, int &n){ -> n es por referencia porque es el dato que varia para quitar
                Nodo *aux = pila;
                n = aux -> dato;
                pila = aux -> siguiente;
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

void agregarPila(Nodo *&, int);
void quitarPila(Nodo *&, int&);

int main(){
    Nodo *pila = NULL;

    int dato;

    cout<<"Digite un numero: ";
    cin>>dato;
    agregarPila(pila, dato); // Agregamos el primer elemento a la pila

    cout<<"Digite otro numero: ";
    cin>>dato;
    agregarPila(pila, dato);

    cout<<"Sacando elemento de la pila: "<<endl;
    while(pila != NULL){ // Mientras no sea el final de la pila
        quitarPila(pila, dato);
        if(pila == NULL){
            cout<<"\nPila Vaciada"<<endl;
        }
    }

    getch();
    return 0;
}

void agregarPila(Nodo *&pila, int n){
    // Aqui van los 4 pasos
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"\nElemento "<<n<<" agregado correctamente"<<endl;
}

void quitarPila(Nodo *&pila, int& n){
    Nodo *aux = pila;
    n = aux -> dato;
    pila = aux -> siguiente;
    delete aux;

    cout<<"\nElemento "<<n<<" eliminado correctamente"<<endl;
}