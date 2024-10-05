#include<iostream>
#include<conio.h>

using namespace std;

int escribeNumeros(int, int);

int main(){

    for (int i = 0; i <= 3; i++){
        cout<<escribeNumeros(i, 3)<<endl;
    }

    getch();
    return 0;
}

int escribeNumeros(int ini, int fin){ // 0 - 3
    if(ini == fin){
        return ini;
    }else{
        return escribeNumeros(ini, fin-1);
    }
}