#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include "SerVivo.h"

using namespace std;

class Animal : public SerVivo{
    // Como aqui el metodo virtual de la clase abstracta nos queda muy generica
    // entonces al no implementarla esta clase automaticamente se convierte en abstracta
};

#endif