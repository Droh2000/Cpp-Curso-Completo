#include<iostream>
#include<conio.h>
using namespace std;

// Esta es la dimencion que va a tener el tablero
const int N = 8; // El tablero de ajdres es de 8x8
/*
    IMPORTANTE
        Estamos poniendo para un tablero 8x8 que es completo y esto
        nuestra maquina se va a tardar demasiado tiempo en calcularlo 

        Lo mejor es probar con otro tablero mas pequeno
        y tambien debemos modificar la posicion en "fila" y "col" para que no nos salgamos de los limites
*/

// Creamos el tablero que es una matriz
int tablero[N][N];

// Desplazamientos que el caballo puede hacer en la matriz (Estos son los movimientos en L que puede hacer el caballo)
// "d" es la matriz que nos almacena los movimientos que va a tener el caballo
int d[8][2] = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

// Mostrar la matriz por pantall
void escribirTablero(){
    int i, j;

    for(i=0; i<N; i++){ // Filas
        for(j=0; j<N; j++){ // Columnas
            cout<<tablero[i][j]<<"|";
        }
        cout<<endl;
    }
    cout<<endl;
}

void saltoCaballo(int i, int x, int y, bool &exito){
    int nx, ny; // coordenadas que almacena el nuevo movimentos del caballo
    int k = 0; // Controlar los desplazamientos del caballo
    exito = false;

    do{
        k++;
        // Nuevas coordenadas cuando el caballo se mueva
        // Como ya tenemos los desplazamientos disponibles en "d[][]" y tenemos el iterador que los controlan "k"
        // porque cuando hagamos un movimiento y tal vez ya hayamos recorrido esa casilla o este fuera de los limites del tablero
        // En ese caso se aumenta el iterador "k" como el movimiento de la matriz "d" no le sirve entonces se pasa a la siguiente que tenga y asi sucesivamente
        // si controlamos que movimiento al caballo le sirve
        nx = x + d[k-1][0];
        ny = y + d[k-1][1];
        // Controlamos el rango que no este fuera de los limites y ademas no hayamos visitado antes esa casilla
        if(nx>=0 && nx<N && ny>=0 && ny<N && tablero[nx][ny]==0){
            // Guardamos el movimiento
            tablero[nx][ny] = i;    
            escribirTablero();
            // Si el contador de movimientos es menor a la cantidad de casillas que tiene el tablero
            // entonces tenemos que seguir llenango las casillas
            if(i < N*N){
                saltoCaballo(i+1,nx,ny,exito);// Se pasa por referencia "exito" porque en algun punto va a cambiar y para que afecte a todo

                if(!exito){ // Si el movimiento que hicimos entonces no es correcto
                    tablero[nx][ny] = 0;
                }
            }else{
                // El tablero ya la completamos
                exito = true;
            }

        }
    }while(k < 8 && !exito);
}

int main(){
    bool exito; // Esta ya la inicializamos adentro de la funcion
     // Controlamos la fila y la columna donde va a estar el caballo en la pocicion inicial
    int fila = 1, col = 0;
    // Le indicamos al tablero en donde va a estar el caballo
    tablero[fila][col] = 1; // Esto es el movimiento 1 (En esta posicion de la matriz le marcamos el 1)

    // El "i" -> Es el contador de movimiento pero el primero ya lo tenemos que es el "1" que pusimos (la pocicion inicial donde esta el caballo
    // entonces a partir de ahi comenzamos a enumerar los movimientos por lo tanto el "i" debe comenzar desde 2 porque el primer
    // movimiento del caballo ya lo registramos en el tablero
    saltoCaballo(2, fila, col, exito);

    // Comprobamos
    if(exito){
        cout<<"Camino encontrado"<<endl;
        escribirTablero(); // Mostramos el ultimo tablero registrado
    }else{
        cout<<"Camino no Encontrado"<<endl;
    }

    getch();
    return 0;
}