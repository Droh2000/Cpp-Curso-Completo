#include<iostream>
#include "SerVivo.h"

using namespace std;

class Planta : public SerVivo{
    // Como se tiene una herencia con una clase abstracta
    // y todos sus metodos virtual estamos obligados a implementarlos
    // en esta clase hija sino sera otra clase abstracta
    public:
        void alimentarse(){
            cout<<"La planta se alimenta por la fotonsintesis"<<endl;
        }
};