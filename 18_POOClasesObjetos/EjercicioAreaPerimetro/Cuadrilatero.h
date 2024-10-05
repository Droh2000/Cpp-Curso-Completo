class Cuadrilatero{
    private:
        int lado1, lado2;

    public:
        // Cuando sea un cuadrado
        Cuadrilatero(int lado){
            lado1 = lado2 = lado;
        }

        Cuadrilatero(int lado1, int lado2){
            this->lado1 = lado1;
            this->lado2 = lado2;
        }

    int area();
    int perimetro();
};