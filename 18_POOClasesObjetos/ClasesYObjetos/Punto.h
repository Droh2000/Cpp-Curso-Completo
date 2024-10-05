// Creacion de la Clase

// Vamos a crear un punto en las coordenadas X e Y

// El .h -> Significa que es un archivo de cabecera y nos sirve para poder crear la clase
class Punto{ // Le damos el mismo nombre del archivo
    // Atributos (Los vamos a poner encapsulados)
    // Con el private solo los metodos de esta clase puede acceder a estos atributos y asi
    // no acceden los metodos de otras clases
    /*
        Visibilidad de los miembros de la clase (Encapsulamiento para proteger los datos y no dañar el programa)

        Los miembros de la clase son los Atributos y los metodos, hay tres formas en los cuales 
        pueden ser vistos
            - Privados: Solo los miembros de la misma clase pueden acceder a este elemento
                        para eso estan los metodos, para manipular los atributos
            - Publicos: Los miembros pueden ser accedidos por la misma clase, clases que heredan (hijos) y clases externas
                        Cualquiera puede hacer modificaciones directamente desde los atributos y no cumplir las reglas de los metodos
            - Protegidos: Este se usa en el tema de herencia y es que los elementos son accedidos por la misma clase
                          o  por las clases hijas (Que heredan de la clase padre)
    */
    private:
        int x,y;
    
    // Metodos
    public: 
        // Toda clase tiene que tener un metodo Constructor que nos sirve para inicializar los
        // atributos que esta clase tenga y se manda llamar automaticamente cuando se instancia un objeto
        Punto(int _x, int _y){
            // El valor que le pasemos al crear el objeto se almacenara en los atributos definidos aqui
            x = _x;
            y = _y; 
        }

        // Podemos tener varios Constructores
        Punto(){
            x = y = 0;
        }

        // Acciones que hara la clase
        // No definimos los metodos aqui porque lo vamos a hacer en el archivo Punto.cpp
        void setX(int valorX); // Establecer el valor de X (Darle un valor a ese atributo desde otra clase)
        void setY(int valorY); // Con estos metodos le damos valor a los atributos sin acceder directamente a ellos 

        // Obtener los valores de los atributos
        int getX();
        int getY();
};