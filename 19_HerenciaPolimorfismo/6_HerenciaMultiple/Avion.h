#include<iostream>
using namespace std;

class Avion{
    private:
        string modelo;

    public:
        Avion(string modelo){
            this->modelo=modelo;
        }

        ~Avion(){}

        void indicarAvion(){
            cout<<"Desplazamiento por Aire"<<endl;
        }

        string getModelo(){
            return modelo;
        }
};