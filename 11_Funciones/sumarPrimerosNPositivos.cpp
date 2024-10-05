#include<iostream>
#include<conio.h>

using namespace std;

/*
    Sumar los primeros n enteros positivos

    suma(n) = 1          , si n=1 -> Caso Base
              n+suma(n-1), si n>1 -> Caso General
*/

int suma(int);

int main(){
    // El numero que se le pase no puede ser 0 ni negativo
    cout<<"Suma: "<<suma(3)<<endl;

    getch();
    return 0;
}

int suma(int n){
    if(n == 1){
        n = 1;
    }else{
        n = n + suma(n-1);
    }
    return n;
}