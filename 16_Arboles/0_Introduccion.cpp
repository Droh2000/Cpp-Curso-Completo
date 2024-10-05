/*
        ARBOLES -> Esta es una estructura No Lineal

        Ahora vamos a tener dos punteros siguentes, no uno como antes
        Consta de un conjunto finito de elementos denominados nodos y un conjunto finito de lineas dirigidas
        denominadas ramas que conectan los nodos

        El primer nodo se llama Raiz y este tendra nodos hijos que son a la izquierda y derecha, ademas
        estos nodos hijos pueden tener hijos ya sea dos ala izquierda y derecha o solo uno en una direccion
        derivandose en mas hijos hasta que ya no tengan hijos a esto se les denomina nodo hojas

        Definicion del Nodo: (En este caso es para un Arbol binario pero puede ser que tenga tres o mas hijos serian mas punteros)
            struct Nodo{
                int dato;
                Nodo *der;
                Nodo *izq;
            };

        Propiedades del Arbol
            Longitud de Camino: Es el numero de ramas que tenemos que pasar para llegar de un nodo hacia otro
                                que casi siempre comienza desde el nodo raiz (Se cuenta el numero de nodos Izq o Der)
                                o podemos contar el numero de nodos menos 1
            Altura de un Nodo: Desde un nodo seleccionado del arbol contamos desde las hojas hacia arriba de ese nodo seleccionado   
                                y contamos el numero de nodos que hay hasta ese nodo seleccionado
            Profundidad de un Nodo: Esta va desde un nodo hacia abajo, pero para hayar la profundidad tenemos que tener en cuanta 
                                los niveles de un arbol: La raiz es el Nivel 0, sus siguientes ramificaciones vendrians siendo los siguientes
                                niveles posteriores 1,2,3,...,N. empezano a contar desde el 0 que es el nodo raiz
            Nodos Hermanos: Deben de estar al mismo nivel y ademas deben tener en comun el mismo padre por ejemplo dos nodos hijos que salen
                            a la izq y derecha del nodo padre, estos hijos serian hermanos                           
            Orden: Es la maxima cantidad de hijos que puede tener cada nodo:
                            Si nos dicen que un arbol es de Orden 2: siginifica que un nodo puede tener 0,1 o 2 hijos (Este es el maximo por tanto es binario)

        Arboles Binarios

        Es un arbol de orden 2, se conoce el nodo de la izquierda como hijo izquierdo y el de la derecha como hijo derecho
        cada nodo puede tener 0,1 o 2 nodos hijos

        Es una estructura recursiva, se divide en tres subconjuntos disjuntivos
            - Nodo Raiz
            - Subarbol Izquierda
            - Subarbol derecho
            Para ver esto hay que fijarse que tenemos el nodo Raiz y de aqui se desprende todo un subarbol izquierda y un subarbol derecho y la razon por la que
            es recursiva es porque si separamos los sub-arboles de la raiz tambien son un arbol binario (El iquierdo y derecho) con esto podemos volver a llamar
            y de ese se volveria a quitar la raiz formandose otro arbol binario y se podria volver a llamar, por eso es recursiva porque en cada nivel se volveria
            a repetir lo del nivel anterior

        Tipos de Arboles Binarios:

            Arbol LLeno: Es donde todos sus nodos, excepto el de su ultimo nivel, tienen dos hijos hasta el ultimo nivel completo
            Arbol Completo: Aqui los nodos hojas del ultimo nivel nos estan todos al mismo nivel porque aqui se pueden quedar a un
                            nivel anterior, cosa que en el Arbol lleno todos llegaban hasta el ultimo nivel completo pero aqui no todos 
                            llegan hasta el ultimo nivel, ademas el sub-arbol izquierdo casi siempre tiene mas nodos que el sub-arbol derecho
                            y en el subarbol derecho podria haber un nodo que solo tenga un solo hijo 
            Arbol Degenerado: Este arbol solo tiene hijos de un solo lado, este lo podriamos extender y seria una lista enlazada

        Estructura de un arbol binario
            El nodo tendra tres campos (Dato, Izq, Der) y de ahi sus direcciones apuntaran a otro nodo si es que tienen hijos
            y los nodos hojas tendran NULL en sus direcciones

        Arbol Binario de Busquedad
            Es aquel que dado un nodo todos los datos del subarbol izquierdo son menores, mientras que todos
            los datos del subarbol derecho son mayores. En este caso empezamos con el nodo raiz y queremos 
            agregar un nuevo valor, segun el valor a agregar se verificara si es menor se insertara del lado 
            izquierdo y si es mayor se insertara del lado derecho comenzando siempre comparando por la raiz
            y seguira comparandose con los nodos hijos posterirores hasta que se pueda insertar
        
        Operaciones de los Arboles Binarios de Busquedad
            1. Insertar un nodo en el Arbol
                * Creamos un Nodo en una funcion Externa
                    Nodo *crearNodo(int n){ 
                        Nodo *nuevo_nodo = new Nodo();

                        nuevo_nodo->dato = n; // Valor que almacena el nodo
                        // Como es un nuevo nodo creado tendra NULL en los dos hijos
                        nuevo_nodo->der = NULL; 
                        nuevo_nodo->izq = NULL;

                        return nuevo_nodo;
                    }
                * Funcion Insertar
                void insertar(Nodo *&arbol, int n){
                    Tenemos que considerar que:
                    El arbol puede estar vacio
                        if(arbol == NULL)
                            Nodo *nuevo_nodo = crearNodo(n); // llamamos la funcion creada arriba
                            arbol = nuevo_nodo; // Asi ya tenemos el nodo Raiz
                    El Abol tiene uno mas de un nodo
                        else{
                            Nesecitamos saber el valor de la raiz porque los valores menores van a la izquierda y los mayores a la derecha
                            int valorRaiz = arbol -> dato;
                            if(n < valorRaiz){ // Si es menor se coloca al lado izquierda
                                insertar(arbol->izq,n); // Volvemos a llamar la funcion dentro de si misma
                            }else{
                                insertar(arbol->der,n);
                            }
                        }
                }
            2. Mostrar el arbol completo
                Vamos a tocar varios casos:
                    - Si el arbol esta vacio
                    - Si tiene datos mostrar el arbol por el lado derecho de forma recursiva
                        mostrarARbol(arbol->der, cont+1); // En cada llamada va a tener espacios de separacion para mostrar el arbol
                      Asi es como vamos a dar los espacios para seprar los nodos
                        for(int i=0; i<cont; i++){
                            cout<<" ";
                        }  
                      Mostrar el datos del nodo
                        cout<<arbol->dato>>endl;
                      Despues imprimimos toda la parte del lado Izquierda
                        mostrarArbol(arbol->izq, cont+1);    
                Funcion:
                    // El contador nos va a ayudar a ordenar el arbol de forma correcta que sera para separa un nodo de otro para mostralo
                    void mostrarArbol(Nodo * arbol, int contador){
                        if(arbol == NULL){
                            return;
                        }else{
                            mostrarArbol(arbol->der, cont+1);
                            for(int i =0; i<cont; i++){
                                cout<<"   ";
                            }
                            cout<<arbol->dato>>endl;
                            mostrarArbol(arbol->izq, cont+1);
                        }
                    }// Con este codigo nos saldra el arbol volteado como acostado
            3. Buscar un nodo especifico
                Hay consideraciones
                    El arbol puede estar vacio
                    El elemento a buscar es el nodo raiz
                    Si elemento esta del lado Izquierdo entonces se verifica si el valor es menor a los nodos
                        entonces volvemos a llamar la funcion y buscamos solo por la izquierda (Porque en este
                        caso todos los elemeentos menores los estamos guardando por la izquierda)
                    El otro caso es buscar por la parte derechca del arbol    
                Funcion:
                    bool busquedad(Nodo *arbol, int n){
                        if(arbol == NULL){
                            return false;
                        }else if(arbol->dato == n){
                            return true;
                        }else if(n < arbol->dato){
                            return busquedad(arbol->izq, n);
                        }else{
                            return busquedad(arbol->der, n);
                        }
                    }
            4. Recorrer el arbol
                Vamos a visitar cada nodo del arbol exactamente una vez y vamos a mostrar todos los elementos, hay diferentes formas
                En Anchura
                En Profondidad (Este tiene tres formas diferentes)
                    Preorden
                        Primero mostramos la raiz, luego la parte izquierda del arbol y por ultimo la parte derecha del arbol, hay que hacer
                        las siguientes operaciones recursivas en cada nodo comenzando con el nodo raiz
                            Primero verificamos que el arbol no este vacio
                            En otro caso: primero imprimimos la Raiz, ahora olvemos a llamar la funcion pero
                                        mandandolo del lado izquierdo, por ultimo recorremos llamando la funcion
                                        por el lado derecho
                        Funcion:
                            void preOrden(Nodo *arbol){
                                if(arbol == NULL){
                                    return;
                                }else{
                                    cout<<arbol->dato<<" - ";
                                    preOrden(arbol -> izq);
                                    preOrden(arbol -> der);
                                }
                            }
                    Inorden
                        Primero se recorre todo el lado izquierdo del arbol, despues se muestra la raiz y por ultimo el lado derecho
                        Se hacen las siguientes opereciones recursivas en cada nodo:
                            Atravezar todo el sub arbol izquierdo, despues visitar la raiz y atravezar todo el subarbol derecho
                            (Se comienza desde el lado mas izquierdo posible)

                        Funcion:
                            void inOrden(Nodo *arbol){
                                if(arbol == NULL){
                                    return;
                                }else{
                                    inOrden(arbol->izq);
                                    cout<<arbol->dato<<" - ";
                                    inOrden(arbol->der);
                                }
                            }    
                    Posorden
                        Primero se recorre el lado izquierdo, despues el lado derecho y por ultimo la raiz, es 
                        de igual manera recursivo y se atravieza completamente cada uno de los lados del arbol 
                        y al ultimo se muestra la raiz
                        Pero hay un truco y es que se tiene que recorrer el lado mas izquierdo posible

                        Funcion:
                        void postOrden(Nodo *arbol){
                                if(arbol == NULL){
                                    return;
                                }else{
                                    postOrden(arbol->izq);
                                    postOrden(arbol->der);
                                    cout<<arbol->dato<<" - ";
                                }
                        }
            5. Borrar un nodo del arbol
                Para poder hacer nescitamos que el nodo sepa quien es su padre, asi que en la
                estructura nodo le agramos un puntero Padre y le agregamos esto en algunas funciones
                de Crearnodo e InsertarNodo para agregar quien es el padre de cada nodo
*/
#include<iostream>
#include<conio.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};

// Creamos el Arbol
Nodo *arbol = NULL;

void menu();
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool busquedad(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void elminarNodo(Nodo *);
Nodo *minimo(Nodo* ); // Funcion para encontrar el nodo mas izquierdo posible en caso de eliminar un nodo con dos hijos
void remplazar(Nodo*, Nodo *); // funcion para eliminar un nodo que tanga un hijo izq o der y le pasamos el arbol y el nuevo nodo a remplazar
void destruirNodo(Nodo *);

int main(){

    menu();

    getch();
    return 0;
}

void menu(){
    int dato, op, cont = 0; // El contador es para imprimir el arbol y comienza en cero para imrpimr desde le inicio de la consola

    do{
        cout<<"\tMENU:"<<endl;
        cout<<"1. Insertar un nuevo Nodo"<<endl;
        cout<<"2. Mostrar Arbol completo"<<endl;
        cout<<"3. Buscar un elemento en el Arbol"<<endl;
        cout<<"4. Recorrer el arbol en PreOrden"<<endl;
        cout<<"5. Recorrer el arbol en InOrden"<<endl;
        cout<<"6. Recorrer el arbol en PostOrden"<<endl;
        cout<<"7. Eliminar un nodo del Arbol"<<endl;
        cout<<"8. Salir"<<endl;
        cout<<"Ingrese la Opcion:"<<endl;
        cin>>op;

        switch (op){
        case 1:
            cout<<"\nIngrese un numero: ";
            cin>>dato;
            insertarNodo(arbol, dato, NULL); // Como no lo sabemos solo le ponemos NULL como Padre
            cout<<endl;
            system("pause");
            break;
        case 2:
            cout<<"\nMostrando el Arbol completo"<<endl;
            mostrarArbol(arbol, cont);
            cout<<endl;
            system("pause");
            break;
        case 3:
            cout<<"\nIngrese el elemento a buscar: ";
            cin>>dato;
            if(busquedad(arbol,dato)){
                cout<<"\nElemento "<<dato<<" a sido encontrado"<<endl;
            }else{
                cout<<"\nElemento "<<dato<<" NO se encontro"<<endl;
            }
            cout<<endl;
            system("pause");
            break;
        case 4:
            cout<<"\nMostrar el arbol en preorden"<<endl;
            preOrden(arbol);
            cout<<endl;
            system("pause");
            break;
        case 5:
            cout<<"\nMostrar el arbol en Inorden"<<endl;
            inOrden(arbol);
            cout<<endl;
            system("pause");
            break;
        case 6:
            cout<<"\nMostrar el arbol en PostOrden"<<endl;
            postOrden(arbol);
            cout<<endl;
            system("pause");
            break;
        case 7:
            cout<<"\nIngrese el numero a eliminar: ";
            cin>>dato;
            eliminar(arbol, dato);
            cout<<endl;
            system("pause");
            break;        
        default:
            break;
        }
        system("cls");
    } while (op != 8);
    
}

// Funcion para crear un nuevo nodo
Nodo *crearNodo(int n, Nodo *padre){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->der = NULL;
    nuevo_nodo->padre = padre;

    return nuevo_nodo;
}
// Insertar elementos en el arbol
void insertarNodo(Nodo *&arbol,int n, Nodo *padre){
    if(arbol == NULL){ // Si el arbol esta vacio
        Nodo *nuevo_nodo = crearNodo(n, padre); // creamos un nuevo nodo
        arbol = nuevo_nodo;
    }else{
        // Si tenemos mas de un nodo o un nodo
        int valorRaiz = arbol->dato;
        if(n < valorRaiz){
            insertarNodo(arbol->izq, n, arbol); // El padre va a estar referencia por el arbol
        }else{
            insertarNodo(arbol->der, n, arbol); // El padre va a estar referencia por el arbol
        }
    }
}

void mostrarArbol(Nodo *arbol, int contador){
    if(arbol == NULL){
        return;
    }else{
        mostrarArbol(arbol->der, contador+1);
        for(int i =0; i<contador; i++){
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrarArbol(arbol->izq, contador+1);
    }
}

bool busquedad(Nodo *arbol, int n){
    if(arbol == NULL){
        return false;
    }else if(arbol->dato == n){
        return true;
    }else if(n < arbol->dato){
        return busquedad(arbol->izq, n);
    }else{
        return busquedad(arbol->der, n);
    }
}

void preOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }else{
        cout<<arbol->dato<<" - ";
        preOrden(arbol -> izq);
        preOrden(arbol -> der);
    }
}

void inOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }else{
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
}

void postOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }else{
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout<<arbol->dato<<" - ";
    }
}

void eliminar(Nodo *arbol, int n){
    if(arbol == NULL){
        return;
    }else if(n < arbol ->dato){ // Empezamos a recorrer el arbol porque no sabemos si el elemento existe
        // El elemento esta por la izquierda
        eliminar(arbol->izq, n);
    }else if(n > arbol ->dato){
        eliminar(arbol->der, n);
    }else{
        // Si ya se encontro el elemento
        elminarNodo(arbol);// El valor que se le pasa es la pocicion del nodo donde vamos
    }
}

void elminarNodo(Nodo *nodo){
    // Tenemos que darnos cuenta:

    // Si tienen los dos hijos
    // En este caso tenemos que ir hacia el hijo derecho de ese nodo y despues ir hacia el hijo mas izquierdo posible
    // Es como sigsax y despues se remplaza el valor eliminado por el valor mas izquierdo posible encontado pero ya 
    // tenemos dos nodos iguales asi que borramos ese nodo que usamos para remplazar el otor valor
    if(nodo->izq && nodo -> der){
        // Le mandamos el nodo a eliminar pero por la parte derecha
        Nodo *menor = minimo(nodo->der);
        // Remplazamos valor
        nodo->dato = menor->dato;
        // Elimamos el nodo con el que remplazamos 
        elminarNodo(menor);
    }

    // Si tienen un hijo izq o der
    // Supongamos que tenemos el nodo Raiz igual a 10, a la izq el nodo 5 y de este sale a la der el nodo 7,
    // nesisatmos hacer que el 10 apunte al 7 como su nuevo hijo y que el 7 apunte al 10 como su nuevo padre
    // de tal forma que eliminemos el 5 y solo nos quede 10 y en donde estaba el 5 sea el 7.
    // Lo que se hace es que el hijo toma el lugar del padre y eliminamos el nodo (Puede ser tanto el izq como el Der)
    else if(nodo -> izq){ 
        remplazar(nodo, nodo->izq); // Le pasamos el nodo a eliminar y su hijo en este caso izquierdo
        // Borramos el nodo que dejamos huerfano y no apunta a nada
        destruirNodo(nodo);
    }
    // En este caso que sea el nodo Derecho
    else if(nodo -> der){
        remplazar(nodo, nodo->der);
        destruirNodo(nodo);
    }

    // Si es un nodo hoja (No hijos)
    else{
        // Vamos a usar la funcion remplazar ya creado pero ahora le vamos a decir que
        // lo remplazaremos por NULL
        remplazar(nodo, NULL);
        // Para estar seguros vamos a destruir el Nodo
        destruirNodo(nodo);
    }
}

Nodo *minimo(Nodo *arbol){
    if(arbol == NULL){ // Si el arbol esta vacio
        return NULL;
    }
    if(arbol -> izq){ // si tiene parte izquierda
        // nos vamos a hacia la parte mas izq posible
        return minimo(arbol->izq);
    }else{
        // Si no tiene  hijo izquierdo retornamos el mismo nodo
        return arbol;
    }
}

void remplazar(Nodo* arbol, Nodo *nuevo_nodo){
    // Hay que darnos cuenta quien es el padre del nodo a eliminar
    // de tal forma que su padre apunte al nuevo nodo (Que seria el hijo del lado izq o der del nodo a elminar)
    if(arbol -> padre){ // Si tiene padre
        // Hay que asignarle su nuevo hijo

        // Hay que saber si tenemos que borrar el Izq o Der
        // Si el dato a eliminar es igual al valor de su padre que apunta a la izq (Es decir el valor a eliminar es igual al mismo valor) 
        if(arbol->dato == arbol->padre->izq->dato){
            // Queremos ignorar al valor a eliminar
            arbol->padre->izq = nuevo_nodo;
        }else if(arbol->dato == arbol->padre->der->dato){ // En el caso de eliminar un nodo del lado derecho
            arbol->padre->der = nuevo_nodo;
        }
    }
    // Si existe el nuevo nodo
    if(nuevo_nodo){
        // Le asinamos su nuevo padre (Al nodo que esta a la izq o der del que eliminamos)
        nuevo_nodo->padre = arbol->padre; // Aqui los dos apuntan tanto el arbol a su hijo como el hijo al padre
    }
}

void destruirNodo(Nodo *nodo){
    // Primero que se olvide de los hijos que tenia
    nodo -> izq = NULL;
    nodo -> der = NULL;
    delete nodo;
}