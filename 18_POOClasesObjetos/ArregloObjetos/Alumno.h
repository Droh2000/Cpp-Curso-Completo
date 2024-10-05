/*
    Para crear un arreglo de objetos nesecitamos usar el Constructor por Defecto

    Es aquel que no tiene nigun tipo de parametros ni nada adentro establecido
*/

class Alumno{

    private:
        float calif1, calif2, promedio;

    public:
        // Este es el constructor por defecto
        // Si no definimos sobreCarga de constructor se puede no escribir el porDefecto
        // PERO como abajo definimos otro constructor entonces si estamos obligados a escribir el porDefecto
        // Este nos inicializa los atributos con ceros binarios
        Alumno(){}

        // Igual si tenemos otro constructor el arreglo de objetos no lo usara
        // Solo usaran el constructor por defecto
        Alumno(float c1, float c2){
            calif1 = c1;
            calif2 = c2;
        }

        void pedirDatos();
        void mostrarNotas();
};