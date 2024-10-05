#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
float parteFraccion(float num);

float num;

int main(){

    pedirDatos();
    cout<<"La parte Decimal es: "<<parteFraccion(num)<<endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Introduce un Numero: ";
    cin>>num;
}

float parteFraccion(float num){
    int entero = num;
    return  num - entero;
}
