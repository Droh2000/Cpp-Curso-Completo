#ifndef POLIGONO_H
#define POLIGONO_H

class Poligono{
    public:
        // Con una funcion virtual pura (Igual a cero) esta clase se convierte en abstracta
        virtual float perimetro() = 0;
        virtual float area() = 0;
};

#endif