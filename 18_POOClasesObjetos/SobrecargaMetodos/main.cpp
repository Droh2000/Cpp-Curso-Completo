#include<iostream>
#include "Persona.h"

using namespace std;

int main(){

    Persona *p1 = new Persona("Nadia", 21);
    p1->correr(); // Por los parametros que le pasemos es como sabe C++ cual metodo usar

    Persona *p2 = new Persona("1654654165165");
    p2->correr(25);

    return 0;
}