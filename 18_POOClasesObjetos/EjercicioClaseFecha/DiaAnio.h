class DiaAnio{

    private:
        int dia;
        int mes;
    
    public:
        DiaAnio(int dia, int mes){
            this->dia=dia;
            this->mes= mes;
        }
        // Vamos a trabajar con objetos dinamicos
        bool igual(DiaAnio& a);
        void visualizar();
};