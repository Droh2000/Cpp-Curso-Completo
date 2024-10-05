
#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;

int main(){

    srand(time(NULL));
    // Ecuacion para generar aleatorio
    // variable = limiteInferior + rand() % (limiteSuperior+1 - limiteInferior)
    int numA = 1 + rand() % 100; // Numero de 1 a 100
    int numU, cont = 0;

    cout << "Piense un numero entero entre 1-100: ";
    do{
        cout << "Ingrese el valor del numero: ";
        cin >> numU;
        if(numU > numA){
            cout << "\nEl numero es menor"<<endl;
        }
        if(numU < numA){
            cout << "\nEl numero es mayor"<<endl;
        }
        if(numU == numA){
            cout<<"Felicidades ah encontrado el numero"<<endl;
            cout<<"Intentos: "<<cont;
            break;
        }
        cont++;
    }while(true);

    getch();
    return 0;
}