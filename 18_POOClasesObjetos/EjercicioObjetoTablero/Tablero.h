
class Tablero{

    private:
        int x, y;

    public:
        Tablero(int x,int y){
            this->x=x;
            this->y=y;
        }

        void moverArriba(int);
        void moverAbajo(int);
        void moverIzquierda(int);
        void moverDerecha(int);
        int getX();
        int getY();
};