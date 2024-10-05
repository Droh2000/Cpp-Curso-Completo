#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void pedirDatos();
template <class tipoN>
void al_cuadrado(tipoN num);

float n;

int main(){

    pedirDatos();
    al_cuadrado(n);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el valor: ";cin>>n;
}
template <class tipoN>
void al_cuadrado(tipoN num){
    cout<<"El numero elevado al cuadrado es: "<<pow(num,2)<<endl;
}