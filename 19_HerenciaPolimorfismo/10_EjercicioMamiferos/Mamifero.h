#ifndef MAMIFERO_H
#define MAMIFERO_H
#include<iostream>
using namespace std;

class Mamifero{
    private:
        int anioNacimiento;
        string lugarNacimiento;
        string raza;
    
    public:
        Mamifero(int anioNacimiento, string lugarNacimiento, string raza){
            this->anioNacimiento = anioNacimiento;
            this->lugarNacimiento = lugarNacimiento;
            this->raza = raza;
        }
    
        virtual string imprimirDieta() = 0;

        int getanioNacimiento(){
            return anioNacimiento;
        }

        string getlugarNacimiento(){
            return lugarNacimiento;
        }

        string getraza(){
            return raza;
        }
};
#endif
