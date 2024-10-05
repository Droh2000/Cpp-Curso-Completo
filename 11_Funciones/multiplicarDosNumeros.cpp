#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

float mult(float x, float y);

int main(){
    float x = 145.36, y = 456.369;

    cout<<"La multiplicacion es: "<<mult(x,y)<<endl; 

    system("pause");
    return 0;
}

float mult(float x, float y){
    return x * y;
}