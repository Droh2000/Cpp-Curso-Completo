#include<iostream>
#include<conio.h>
using namespace std;

void ponerReina(int, bool&);
bool valido(int i); // Le pasamos el indice de la reina que acabamos de poner
void mostrarTablero();

// Creamos la dimencion que va a tener el tablero
const int N = 8;

// Arreglo donde se almacenara la solucion final
int reinas[N];

int main(){

    bool solucion;

    ponerReina(0, solucion);

    if(solucion){
        cout<<"Si exite combinacion de Reinas"<<endl;
        mostrarTablero();
    }else{
        cout<<"No existe combinacion de reinas"<<endl;
    }

    getch();
    return 0;
}

void ponerReina(int i, bool& solucion){// i es el indice de la reina que estamos agregando y el indice del arreglo "reina"
    int k = 0; // Empezar los movimientos para saber en que fila poner la reina
    solucion = false;

    do{
        reinas[i] = k; // Agregamos la reina en la fila K
        k++;

        mostrarTablero();
        cout<<endl;

        if(valido(i)){ // Saber si la reina que acabamos de agregar se puede o no poner esa fila
            if(i < N-1){ // Si falta de agregar reinas
                ponerReina(i+1, solucion);

                if(!solucion){ // Aplicacion de la vuelta atras
                    // Deshacemos el ulimo paso
                    reinas[i] = 0;
                }
            }else{
                solucion = true; // agregamos todas las reinas
            }
        }
    }while(!solucion && k < N);
}

bool valido(int i){
    // Comprobar si la reina de la columna "i" no se amenaza con niguna reina ya puesta
    // Si en sus filas ni en sus diagonales hay otra reina
    bool v = true;

    // Recorremos desde 0 hasta el indice "i" para revisar todas las reinas que hemos agregado hasta el momento
    // Hasta antes de la que estamos a punto de poner
    for (int j = 0; j < i; j++){
        // Comprobar que en la fila donde estamos poniendo la reina no haya niguna otra
        // Entre () comprobamos si: En el arreglo en la pocicion "i" es diferente de las reinas que tenemos
        // hasta el momentos con la posicion "j" eso significa que la fila esta vacia
        v = v && (reinas[i] != reinas[j]);// Si recorremos todo el arreglo Reinas con el iterador "j" y no hay niguna reina en la fila que vamos a poner entonces podmeos poner esa reina

        // Comprobar las Diagonales
        v = v && (reinas[i]-i != reinas[j]-j); // Comprobar Diagonal 1
        v = v && (reinas[i]+i != reinas[j]+j); // Comprobar Diagonal 2
        // En el momento que alguna sea False, todo sera False 
    }

    return v;
}

void mostrarTablero(){
    // Tenemos el arreglo reina pero queremos mostrar una matriz
    // Entonces vamos a crear la matriz aqui mismo
    int tablero[N][N];

    // Asignamos los valores del tablero a 0
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            tablero[i][j] = 0;
        }
    }

    cout<<"Mostrando Arreglo:"<<endl;
    for (int i = 0; i < N; i++){
        cout<<reinas[i]<<" | ";
    }
    cout<<endl;

    // Las Reinas en nuestro tablero las vamos a poner con el numero 1
    // asi quiere decir que en esa posicion hay una reina
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            // Los indices del arreglo son los indices de las columnas
            // y los numeros contenidos dentro del arreglo reina era el valor de las filas 
            // donde se ponen las reinas
            // Se ponen la filas (Dentro del arrelgo de Reinas) y columna
            tablero[reinas[j]][j] = 1;
        }
    }
    
    cout<<"Mostrando el tablero"<<endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout<<tablero[i][j]<<"|";
        }
        cout<<endl;
    }
}