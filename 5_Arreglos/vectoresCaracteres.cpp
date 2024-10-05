
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    char vocales[] = {'a','e','i','o','u'};
    char letras[] = {'a','b','c','d','e'};
    char unido[10];

    int j = 0;
    for (int i = 0; i < 10; i++){
        if(i<5){
            unido[i] = vocales[i];
        }
        if(i>=5){
            unido[i] = letras[j];
            j++;
        }
    }

    cout << "Arreglo juntado: "<<endl;
    for (int i = 0; i < 10; i++){
        cout<<i<<" -> "<<unido[i]<<endl;
    }
    
    getch();
    return 0;
}