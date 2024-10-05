#include<iostream>
#include<stdlib.h>

using namespace std;

template <class tipoN>
void despliegue(tipoN dato);

int main(){
    int n = 9;
    float n1 = 45.639;
    string n2 = "Hola";
    char n3[] = "a";
    double n4 = 456.369;

    despliegue(n);
    despliegue(n1);
    despliegue(n2);
    despliegue(n3);
    despliegue(n4);

    system("pause");
    return 0;
}

template <class tipoN>
void despliegue(tipoN dato){
    cout<<"Dato: "<<dato<<endl;
}

