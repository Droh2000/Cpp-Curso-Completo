
#include<iostream>

using namespace std;

// Otra libreria para que no cierre nuestro .exe
#include<stdlib.h>

int main(){

    int i;

    i = 10;

    do{
        cout << i << endl;
        i--; // Decremente de 10 a 1
    }while(i >= 1);

    system("pause");
    return 0;
}