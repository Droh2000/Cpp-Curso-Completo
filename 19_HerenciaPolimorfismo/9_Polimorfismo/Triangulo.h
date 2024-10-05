#include<math.h>
#include "Poligono.h"

class Triangulo : public Poligono{
    private:
        float lado1, lado2, lado3;
    
    public:
        // Como la clase padre no tiene atributos inicializados en su contructor
        // no especificamos nada
        Triangulo(float l1, float l2, float l3) : Poligono(){
            lado1 =  l1;
            lado2 = l2;  
            lado3 = l3;      
        }
        
        float perimetro(){
            return lado1+lado2+lado3;
        }

        float area(){
            float s = (lado1+lado2+lado3)/2;
            return sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
        }
};