
#include<iostream>
#include<stdlib.h>
#include<random>

using namespace std;

int main(){

    float temp, ini = 0, tempMax = 0, tempMin = 1, media, suma = 0;

    for(int i=1; i<=24; i++){
        ini = rand() % 100 + 1;
        if(i % 4 == 0){
            temp = ini;
            cout<<"Temperatura: "<<temp<<endl;
            if(temp > tempMax){
                tempMax = temp;
            }

            if(temp < tempMin){
                tempMin = temp;
            }

            suma += temp;
        }
    }

    cout << "La tempera maxima es: "<< tempMax<< endl;
    cout << "La tempera minima es: "<< tempMin<< endl;
    media = suma / 6;
    cout << "El promedio de las temperaturas es: "<<media;


    system("pause");
    return 0;
}