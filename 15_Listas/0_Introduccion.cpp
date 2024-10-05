/*
        LISTA ENLAZADA

        Consta de un numero de nodos con dos componentes(Campos) que son un
        enlace al siguiente nodo de la lista y un valor de cualquier tipo

        El numero de elementos tendra los que definamos en tiempo de ejecucion

        Declaracion:
            struct Nodo{
                int dato;
                Nodo *siguiente;
            };

        Hay varias categorias:
            1. Listas simplemente Enlazadas
                Cada nodo (Elemento) contiene un unico enlace que conecta ese nodo al 
                nodo siguiente o nodo sucesor. La lista es eficiente en recorridos directos
                es decir solo hacia adelante
            2. Listas Doblemente Enlazadas
                Cada nodo contiene dos enlaces, uno a su nodo predecesor y el otro a su nodo
                sucesor. La Lista es eficiente tanto en recorrido directo hacia adelante como 
                en recorrido inverso hacia atras
            3. Lista Circular Simplemente Enazada
                Es una lista enlazada simplemente en la que el ultimo elemento (Cola) se enlaza
                al primer elemento (nodo inicial) de tal modo que la lista puede ser recorrida 
                de modo circular
            4. Lista Circular Doblemente Enlazada   
                Una lista doblemente enlazada en la que el ultimo elemento se enlaza al primer
                elemento y viceversa. Esta lista se puede recorrer de modo circular tanto en
                direccion directa hacia adelante como en inversa hacia atras
        
        Operaciones:
            * Insertar elementos en una lisa enlazada
                Hay 4 pasos:
                    1. Crear un nuevo nodo
                        lista -> NULL; (Este es un nodo de tipo puntero)
                        Creamos el nuevo nodo:
                            Nodo *nuevo_nodo = new Nodo();
                    2. Asignar a un nuevo_nodo -> dato (Al nuevo nodo le agregamos el valor) el elemento que queremos incluir a la lista
                        Al inicio el nodo esta vacio, asi que le asignamos el valor:
                            nuevo_nodo -> dato = n;
                    3. Crear dos nodos auxiliares y asignar la lista al primero de ellos
                        Nodo *aux1 = lista; (Al inicio lista vale NULL por tanto aux1 tambien vale NULL)
                        Nodo *aux2;
                    4. insertar el elemento a la lista 
                        Vamos a tener tres casos:
                            1. Cuando la lista este vacia (Apunte a NULL)
                                Lista -> NULL;
                            2. Cuando ya tengamos un nodo, entonces tenemos dos pociciones para agregar que es al inicio o al final
                            3. Cuando tengamos dos o mas nodos que en este caso podemos agreagar al inicio, en el medio o al final

                            En nuestro caso el algoritmo vamos a tener dos casos donde crearemos la lista de tal manera que cada vez que
                            insertemos un nuevo elemento lo hara de forma ordenada y asendente, de modo que sera mas facil buscar, 
                            eliminar y modificar el valor
                                - Al pricipio
                                    lista = nuevo_nodo; (agregamos el nuevo nodo que ya tenemos)
                                        por tanto "lista" apunta a donde apuntaria nuevo_nodo que era el valor y "aux1" sigue apuntando a NULL
                                    nuevo_nodo -> siguiente = aux1; (Tenemos que referenciar el neuvo nodo a NULL porque como es el primer 
                                                    elemento de la lista este tiene que apuntar a NULL, con ayuda de aux1)

                                    INSERTAR OTRO ELEMENTO AL INICIO
                                        Supongamos ya tenemos el valor de arriba que lo hemos asignado, recordemos que al inicio de todo aux1 = lista entonces ahora aux1 apunta a este ultimo valor asignado
                                        Queremos insertar otro valor pero para INSERTAR LOS ELEMENTOS ORDENADOS, hay que utilizar un bucle:
                                            while(aux1 != NULL && aux1->dato < n){(Aqui dentro moveremos punteros)}, este bucle es para insertar elemento ordenados, supongamos que el nuevo valor debe de ir
                                        antes del valor ya agregado, entonces comprobamos con el while que en este caso NO ENTRA AL WHILE
                                        Entonces este valor lo agregamos normal:
                                            lista = nuevo_nodo;
                                            nuevo_nodo -> siguiente = aux1;
                                        Quedandonos que lista apunta al nuevo valor y nuevo_nodo tambien, aux1 apunta al valor que agregamos arriba, hay que recordar que la variables "nuevo_nodo" y "aux1" son de tipo local
                                        dentro de la funcion, cuando se termine la funcion se eliminaran las variables
                                - En medio o al Final
                                    En este caso si entraria al WHILE, si ya tenemos un valor y queremo insertar uno nuevo combrobando con el while que es mayor al dato que ya esta, entraria dentor del bucle
                                    y aqui es donde entra el aux2:
                                        aux2 = aux1;
                                        aux1 = aux1->siguiente; (Lo recorremos una pocicion hacia adelante)
                                    Quedandonos que aux2 apunta al valor que ya estaba y aux1 apunta a NULL (Que es lo que apuntaba el unico noco insertado en este caso) y vuelve a comprobarse el WHILE no cumpliendose porque
                                    aux1 es NULL saliendo del WHILE entonces el nuevo nodo se insertara en medio de aux2 y aux1, poniendo el valor despues del valor que ya teniamos:
                                        aux2 -> siguiente = nuevo_nodo;
                                        nuevo_nodo -> siguiente = aux1;   
                                    aux1 se mueve y vuelve a apuntar a null y asi aux1 nos va a ayudar a refernciar siempre la ultima pocicion de la lista 
                Funcion:
                    void insertarLista(Nodo *&lista, int n){
                        Nodo *nuevo_nuevo = new Nodo();
                        nuevo_nodo -> dato = n;

                        Nodo *aux1 = lista;
                        Nodo *aux2;

                        while(aux1 != NULL && aux1->dato < n){
                            aux2 = aux1;
                            aux1 = aux1 -> siguiente;
                        }

                        if(lista == aux1){
                            // Cuando el elemento vaya al principio de la lista
                            lista = nuevo_nodo;
                        }else{
                            // Esto es cuando entre al While
                            aux2 -> siguiente = nuevo_nodo;
                        }

                        nuevo_nodo->siguiente = aux1;
                    }

            * Mostrar elementos de la lista
                1. Crear un nuevo nodo (actual)
                    Nodo *actual = new Nodo();                
                2. Igualar ese nuevo nodo (actual) a la lista
                    El nuevo nodo creado debe de apuntar al valor inicial de la lista
                    actual = lista;
                3. Recorrer la lista de inicio a fin
                    Cuando actual valga NULL significa que ya hemos recorrido toda la lista
                    Imprimimos el dato y movemos el nodo actual con siguiente
                Funcion:
                    void mostrarLista(Nodo *lista){
                        Nodo *actual = new Nodo();
                        
                        actual = lista;
                        while(actual != NULL){
                            cout<<actual->dato<<" -> ";
                            actual = actual -> siguiente;
                        }
                    }
            * Buscar Elementos de la lista
                1. Crear un nuevo nodo (Lo vamos a volver a llamar Actual)
                    Nodo *actual = new Nodo();
                2. Igualar ese nuevo nodo a la lista (Apara apuntar el primer elemento)
                    actual = lista;
                3. Recorrer la lista
                    Mientras actual sea diferente de NULL y el dato donde apunta actual sea menor o igual al dato a buscar
                    esta condicion la podemos usar porque tenemos los datos ordenados y no se perdera tiempo buscando en toda la lista
                4. Determinar si el elemento existe o no en la lista
                    if(actual -> dato == n)
                        band = true;
                    actual = actual -> siguiente; // Si no entra al if avanza a la siguiente linea de codigo

                Funcion:
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
            * Eliminar un elemento de la lista
                1. Preguntar si la lista no esta vacia
                    En el caso que Lista -> NULL es que esa vacia y otro caso es que Lista apunte a un valor
                2. Crear un *aux_borrar(Con este seleccionamos el nodo a eliminar) y *anteriro=NULL (Creamos estos dos nodos)
                    Nodo *aux_borrar;
                    Nodo *anterior = NULL;
                3. Igualar *aux_borrar al inicio de la lista (Este es el puntero que nos recorrerar todo la lista pero debe comenzar al inicio de la lista)
                    aux_borrar = lista;
                4. Recorrer la lista
                    Bamos a buscar un valor "n" y comenzamos con un bucle
                    while(aux_borrar != NULL && aux_borrar->dato != null){
                        anterior = aux_borrar;
                        aux_borrar = aux_borrar -> siguiente;
                    }
                    Con el bucle se moveran lo punteros en la lista, en caso que llegue a NULL con un condicional le diremos
                    que el elemento no se encontro

                    En caso que el valor a eliminar sea el primero y por ende no entre al Bucle entonces anterior nunca cambio su valor entonces usamos otro condicional
                    que si anteiror = NULL significa que el elemento a borrar es el primer elemento entonces
                        lista = lista -> siguiente;
                        delete aux_borrar;

                    En caso de borrar un elemento del medio de la lista, entonces si entra al bucle y se mueven los dos punteros "anterior" y "siguiente"
                    entonces tenemos que anterior toma el valor anteriro del valor que apunta aux_borrar que este es el valor a eliminar, de aqui ya no entra 
                    al bucle:
                        anterior -> siguiente = aux_borrar -> siguiente; // Asi nos salteamos el nodo a borrar apuntando lo que tenga enfrente el nodo a borrar
                        delete aux_borrar;    
                5. Eliminar el elemento (Este paso ya se explica en conjunto con el cuatro)

                Funcion:
                void eliminarNodo(Nodo *&lista, int n){
                    if(lista != NULL){
                        Nodo *aux_borrar;
                        Nodo *anterior = NULL;
                        aux_borrar = lista;

                        while(aux_borrar != NULL && aux_borrar->dato != n){
                            anterior = aux_borrar;
                            aux_borrar = aux_borrar->siguiente;                        
                        }

                        if(aux_borrar == NULL){
                            cout<<"El elemento no existe";
                        }else if(anterior == NULL){
                            lista = lista->siguiente;
                            delete aux_borrar;
                        }else{
                            anterior->siguiente = aux_borrar->siguiente;
                            delete aux_borrar;
                        }
                    }
                }
            * Eliminar todos los elementos de la lista
                1. Crear un nodo *aux e igualarlo al inicio de la lista
                    Nodo *aux = lista;
                2. Guardar el dato que queremos eliminar dentro de *aux
                    n = aux -> dato; (Guardamos el dato antes de eliminarlo para mostrarlo por pantalla)
                3. Pasar lista a siguiente nodo
                    lista = aux->siguiente; 
                4. Eliminar Aux
                    delete aux;
                Funcion: (Esta la vamos a ejecutar dentro de un While para borrar toda la lista)
                void eliminarLista(Nodo *&lista, int &n){
                    Nodo *aux = lista;
                    n = aux -> dato;
                    lista = aux->siguiente;
                    delete aux;
                }
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);
void eliminarNodo(Nodo *&, int);
void eliminarLista(Nodo *&, int &);

int main(){
    // Creamos el puntor Lista
    Nodo *lista= NULL;

    int dato;
    cout<<"Digite un numero: ";
    cin>>dato;

    insertarLista(lista, dato);
    mostrarLista(lista);
    buscarLista(lista, dato);

    while(lista != NULL){// Vaciar la lista
        eliminarLista(lista, dato);
        cout<<dato<<" -> ";
    }

    cout<<endl;
    system("pause");
    return 0;
}

void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while(aux1 != NULL && aux1->dato < n){
        aux2 = aux1;
        aux1 = aux1 -> siguiente;
    }

    if(lista == aux1){
        lista = nuevo_nodo;
    }else{
        aux2 -> siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;
    cout<<"\nElemento "<<n<<" insertado a la lista correctamente\n";
}

void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;

    while(actual != NULL){
        cout<<actual->dato<<" -> ";
        actual = actual -> siguiente;
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

void eliminarNodo(Nodo *&lista, int n){
    if(lista != NULL){
        Nodo *aux_borrar;
        Nodo *anterior = NULL;
        aux_borrar = lista;

        while(aux_borrar != NULL && aux_borrar->dato != n){
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;                        
        }

        if(aux_borrar == NULL){
            cout<<"El elemento no existe";
        }else if(anterior == NULL){
            lista = lista->siguiente;
            delete aux_borrar;
        }else{
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
        }
    }
}

void eliminarLista(Nodo *&lista, int &n){
    // Como esta lista esta ordenada podemos usar esta funcion que es la misma de la pila para
    // dejar vacia la lista
    Nodo *aux = lista;
    n = aux -> dato;
    lista = aux->siguiente;
    delete aux;
}