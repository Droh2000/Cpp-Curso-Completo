#include<iostream>
#include<conio.h>
using namespace std;

// Los char son los nombres de las varillas
void hanoi(char varInicial, char varCentral, char varFinal, int n){
    if(n == 1){ // Caso base
        cout<<"Mover disco "<<n<<" desde varilla "<<varInicial<<" a varilla "<<varFinal<<endl;
    }else{ // Caso recursivo
        // Primero pasamos todos dejando solo el disco mas grande en A, y todos los demas a la varilla B (Central)
        hanoi(varInicial, varFinal, varCentral, n-1);
        // El disco mas grande lo pasamos a C
        cout<<"Mover disco "<<n<<" desde varilla "<<varInicial<<" a varilla "<<varFinal<<endl;
        // Todos los demas discos en B los pasamos a C pero dejando 1 para cumplir el caso base
        hanoi(varCentral, varInicial ,varFinal, n-1);
    }
}

int main(){

    // Nos debe salir todos los pasos a seguir para pasar de la varilla A a la Varilla C
    hanoi('A','B','C', 3);

    /*
        En la Torre de Hanoi siempre tendremos un minimo numero de movimiento para conseguir el objetivo de mover los discos a C
        Nuestro algoritmo ya nos da los minimos pasos y lo que pasa es que:
            - Con 3 Discos: 7 Movimientos minimo
            - Con 4 Discos: 15 Movimientos minimo
            - Con 5 discos: 31 Movimientos minimo
            - Con 6 discos: 63 Movimientos minimo
            - Con 7 discos: 127 Movimiento minimo
            - Con 8 dicos: 255 Movimientos minimo
        
        Vemos como cuantos mas discos agregemos aumenta mucho los movimientos
        Para saber este minimo numero de movimientos para N discos esta la formula:
            2^n - 1 
    */

    getch();
    return 0;
}