
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int num[] = {2,2,2,2,2}, multi = 1;

    for (int i = 0; i < 5; i++){
        multi *= num[i];
    }

    cout << "La multiplicacion de sus elementos es: "<<multi<<endl;

    system("pause");
    return 0;
}