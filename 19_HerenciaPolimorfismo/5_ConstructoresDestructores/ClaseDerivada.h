#include<iostream>
#include "ClaseBase.h"
using namespace std;

class ClaseDerivada : public ClaseBase{
    private:
        int numero2;

    public:
        ClaseDerivada(int numero, int num2) : ClaseBase(numero){
            numero2 = num2;
            cout<<"Constructor de la clase Derivada"<<endl;
        }

        ~ClaseDerivada(){
            cout<<"Destructor de la clase Derivada"<<endl;
        }

};