#include<iostream>

using namespace std;

class Expediente{
    private:
        int numExpe;

    public:
        Expediente(int numExpe){
            this->numExpe=numExpe;
        }

        Expediente(){}

        ~Expediente(){}

        int getNumExpe(){
            return numExpe;
        }
};