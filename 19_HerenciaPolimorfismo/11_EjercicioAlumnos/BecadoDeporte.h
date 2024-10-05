#include<iostream>
#include "Alumno.h"
#include "Deportista.h"

using namespace std;

class BecadoDeporte : public Alumno, public Deportista{
    private:
        float montoBeca;

    public:
        BecadoDeporte(string nomCar, string nomEntre, float montoBeca) : Alumno(nomCar), Deportista(nomEntre){
            this->montoBeca = montoBeca;
        }

        void setMontoBeca(float porcentaje){
            montoBeca = ((porcentaje*montoBeca)/100)+montoBeca;
        }

        float getMontoBeca(){
            return montoBeca;
        }

        void mostrarDatos(){
            Alumno::mostrarDatos();
            Deportista::mostrarDatos();
            cout<<"Monto Beca: "<<montoBeca<<endl;
        }
};