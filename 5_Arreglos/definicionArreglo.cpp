/*

    tipoDato nombre[Tamano];

    int numeros[10];
    char letras[5];
    float reales[15];

    Declaracion y asignacion

        int numero[] = {1,4,6,7,9};

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros[10], n = 0, suma = 0;

    for(int i=0; i < 10; i++){
        cout << i+1 <<". Ingrese el valor: ";
        cin >> n;

        numeros[i] = n;
    }

    for (int i = 0; i < 10; i++){
        suma += numeros[i];
    }
    
    cout << "La suma de sus elementos es: "<<suma;

    getch();
    return 0;
}