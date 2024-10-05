
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){

    int sum = 0;

    for(int i=1; i<=10; i++){
        sum += pow(i, 2);  
    }

    cout<<"La suma de los cuadrados de los 10 primeros numeros es: "<<sum;

    getch();
    return 0;
}