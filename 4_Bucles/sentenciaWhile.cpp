// Numeros del 1 al 10
#include<iostream>

// Libreria para que no se cierre el .exe
#include<conio.h>

using namespace std;

int main(){

    int i;

    i = 1;

    while(i<=10){
        cout<<i<<endl;
        i++;
    }

    getch(); // Al precionar una tecla se cierra el programa
    return 0;
}