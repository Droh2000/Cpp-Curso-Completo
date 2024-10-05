
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num[100], n;

    cout << "Ingrese el numero de elementos que tendra el arreglo: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << i+1 << ". Ingrese el valor: ";
        cin >> num[i];
    }    
    
    for (int i = 0; i < n; i++){
        cout << i << " -> " << num[i]<<endl;
    }

    getch();
    return 0;
}