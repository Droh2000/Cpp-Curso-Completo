/*
    Paso de parametros por Referncia

    Anteriormente le pasabamos una copia exacta del valor de la variable a las funciones

    Ahora le vamos a pasar la direccion de memoria donde esta ubicado el valor de la memoria
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

void valNuevo(int&, int&);// no hace falta escribirle los nombres

int main(){

    int num1, num2;

    cout<<"Digite 2 numeros: ";
    cin>>num1>>num2;

    valNuevo(num1, num2);

    cout<<"Los nuevos valores son: "<<num1<<" "<<num2<<endl;

    system("pause");
    return 0;
}

// Paso por referencia con el &
void valNuevo(int& num1, int& num2){
    cout<<"El valor del primer numero es: "<<num1<<endl;
    cout<<"El valor del segundo numero es: "<<num2<<endl;

    // Podemos Cambiarle los valores directamente
    num1 = 89;
    num2 = 45;
}