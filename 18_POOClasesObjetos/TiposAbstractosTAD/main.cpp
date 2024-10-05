/*
    Tipos Abstractos De Datos (TAD)            

    Es un conjunto de valores y de operaciones definidos mediante una especificacion
    independiente de cualquier representacion

    En pocas palabras es un conjunto de valores mas operaciones
            TAD = Valores + Operaciones
    Valores: Son las caracteristicas, los atributos
    Operaciones: Las acciones, los metodos

    Una forma de representar un TAD
        La estructura mas adecuada en C++ es la clase porque dentro de estas va a residir
        la representacion de los valores (atributos) junto a las operaciones (metodos)

    Por ejemplo:
        Si se esepcifica el TAD PuntoTres para representar la abstraccion punto en el espacio
        tridimencional, a clase que implmenta el tipo seria:

        class PuntoTres{
            private:
                double x, y, z; // Representa los valores
            
            public: // Representa las operaciones
                PuntoTres(double x, double y, duble z);

                double distancia(PuntoTres p);

                ...
        };

*/