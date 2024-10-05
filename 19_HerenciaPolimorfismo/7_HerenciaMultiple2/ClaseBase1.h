#include<iostream>
using namespace std;

class ClaseBase1{
    protected:
        int x; // Vamos a crear una ambiguedad llamando los dos atributos igual
    
    public:
        ClaseBase1(int x){
            this->x = x;
        }

        ~ClaseBase1(){}

        // AMBIGUEDAD A NIVEL DE METODOS
        int getx(){
            return x;
        }
};
