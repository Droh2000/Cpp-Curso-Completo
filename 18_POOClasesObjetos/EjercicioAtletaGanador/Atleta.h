#include<iostream>

using namespace std;

class Atleta{
    private:
        int numAtletat;
        string nombre;
        float tiempoCarrera;

    public:
        Atleta(){}

        Atleta(int numAtletat, string nombre, float tiempoCarrera){
            this->numAtletat=numAtletat;
            this->nombre=nombre;
            this->tiempoCarrera=tiempoCarrera;
        }

        ~Atleta(){}

        int getNumero();
        string getNombre();
        float getTiempoCarrera();
        static int getAtletaGanador(Atleta[], int);
};