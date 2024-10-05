#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void intercambio(int&, int&);

int n1, n2;

int main(){

    pedirDatos();
    intercambio(n1, n2);

    cout<<"\nValor de n1: "<<n1<<endl;
    cout<<"Valor de n2: "<<n2<<endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese un primer numero: ";
    cin>>n1;
    cout<<"Ingrese un segundo numero: ";
    cin>>n2;
}

void intercambio(int& num1, int& num2){
    int aux = num1;
    num1 = num2;
    num2 = aux;
}