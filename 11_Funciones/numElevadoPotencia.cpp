#include<iostream>
#include<conio.h>

using namespace std;

int potencia(int, int);

int main(){

    cout<<potencia(3,0)<<endl;

    getch();
    return 0;
}

int potencia(int x, int y){
    int pot;
    if(y == 1){
        pot =  x;
    }else{
        pot = x * potencia(x, y-1);
    }

    return pot;
}