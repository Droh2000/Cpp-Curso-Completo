#include<iostream>
using namespace std;

class ClaseBase2{
    protected:
        int x; // Vamos a crear una ambiguedad llamando los dos atributos igual
    
    public:
        ClaseBase2(int x){
            this->x = x;
        }

        ~ClaseBase2(){}

        // AMBIGUEDAD A NIVEL DE METODOS
        int getx(){
            return x;
        }
};