
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int arr[5], arr2[5];

    for (int i = 0; i < 5; i++){
        cout <<i+1<<". Ingrese un numero: ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++){
        arr2[i] = arr[i]*2;
    }

    cout << "Los valores del segundo arreglo son: "<<endl;
    for (int i = 0; i < 5; i++){
        cout << arr2[i] << endl;
    }
    
    system("pause");
    return 0;
}