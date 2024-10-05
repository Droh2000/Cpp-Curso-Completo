#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){

    char cad1[20], cad2[20];
    int num1;
    float num2, suma = 0;

    cout<<"Ingrese un numero entero: ";
    cin.getline(cad1,20,'\n');
    cout<<"Ingrese un numero flotante: ";
    cin.getline(cad2,20,'\n');

    num1 = atoi(cad1);
    num2 = atof(cad2);

    suma = num1+num2;

    cout<<"La suma de "<<num1<<" + "<<num2<<" = "<<suma<<endl;

    getch();
    return 0;
}