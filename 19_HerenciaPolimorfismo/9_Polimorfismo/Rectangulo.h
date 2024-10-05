#include "Poligono.h"

class Rectangulo : public Poligono{
    private:
        float base, altura;
    
    public:
        // Como la clase padre no tiene atributos inicializados en su contructor
        // no especificamos nada
        Rectangulo(float b, float a) : Poligono(){
            base =  b;
            altura = a;        
        }
        
        float perimetro(){
            return 2*base + 2*altura;
        }

        float area(){
            return base*altura;
        }
};