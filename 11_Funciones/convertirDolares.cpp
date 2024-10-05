#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void cambio(int cant, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno);

int cant;

int main(){

    int cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;

    pedirDatos();
    cambio(cant, cien, cincuenta, veinte, diez, cinco, uno);

    cout<<"Cantidad de Billetes: "<<endl;
    cout<<"Cien: "<<cien<<endl;
    cout<<"Cincuenta: "<<cincuenta<<endl;
    cout<<"Veinte: "<<veinte<<endl;
    cout<<"Diez: "<<diez<<endl;
    cout<<"Cinco: "<<cinco<<endl;
    cout<<"Uno: "<<uno<<endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese la cantidad de dolares: ";
    cin>>cant;
}

void cambio(int cant, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    /*while(cant >= 100){
        cant -= 100;
        cien += 100;
    }
    while (cant >= 50){
        cant -= 50;
        cincuenta += 50;
    }
    while(cant >= 20){
        cant -= 20;
        veinte += 20;
    }
    while(cant >= 10){
        cant -= 10;
        diez += 10;
    }
    while(cant >= 5){
        cant -= 5;
        cinco += 5;
    }
    while(cant >= 1){
        cant -= 1;
        uno += 1;
    }*/
   cien = cant/100;
   cant %= 100;
   cincuenta = cant/50;
   cant %= 50;
   veinte = cant / 20;
   cant %= 20;
   diez = cant /10;
   cant %= 10;
   cinco = cant/5;
   uno = cant %= 5;

}
