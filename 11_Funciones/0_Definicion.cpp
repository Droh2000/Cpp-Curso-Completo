/*
    Cada funcion debe de hacer una Tarea
    Subdividir el programa en pequenas secciones

    Segun el tipo de dato Es lo que retornara
    
    DEFINICION:
    tipo nombre(tipo var1, tipo var2,...,tipo varN){
        conjunto de intrucciones
        return tipo o Nada si es tipo VOID
    }

    Ejmplo de Funciones:
    int numMax(int x, int y)
    double intercambio(double x, double y)
    void desplegar(float x, float y)

    Forma en la que se deben de Crear los programas C++

    Directivas del proprocesador (Librerias)

    Prototipos de Funcion (La forma en la que indicamos que tal funcion Existe)

    int main(){
        Conjunto de Instruccion
        Return Valor    
    }

    Definiciones de Funciones
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

// Prototipo de funcion
int encontrarMax(int x, int y);

int main(){
    int n1, n2;

    cout<<"Ingrese dos numeros: ";
    cin>>n1>>n2;

    cout<<"El numero maximo es: "<<encontrarMax(n1,n2)<<endl;

    system("pause");
    return 0;
}

// Definicion Funcion
int encontrarMax(int x, int y){
    int numMax;

    if(x > y){
        numMax = x;
    }else{
        numMax = y;
    }

    return numMax;
}