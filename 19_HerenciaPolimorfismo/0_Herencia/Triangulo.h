// Aplicacion de La Herencia
#include "Figura.h"
#include<math.h>

// Esta clase hereda de la clase figura, se pone:
// : Modificador de Acceso Nombre de la clase
// Con public le decimos que todo los publico de la clase Figura va a ser parte 
// de todo lo publico de la clase triangulo
class Triangulo : public Figura{
    // Le especificamos sus atributos y metodos propios
    private:
        float lado1, lado2, lado3;

    public:
        // Los primeros atributos a inicializar son los de la clase padre y despues lo de la hija
        // Los atributos de la clase padre ya se inicializan en el padre no hace falta inicializarlos otra vez aqui
        // asi que se lo indicamos con los dos puntos para que use el constructor del padre y le pasamos sus atributos
        Triangulo(int nlados, float l1, float l2, float l3) : Figura(nlados){
            lado1 = l1;
            lado2 = l2;
            lado3 = l3;
        }

        float areaTriangulo(){
            // Aplicacion de la formula de Erom
            float p = (lado1+lado2+lado3)/2;
            float area = sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
            return area;
        }

};