#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int m1[3][3] = {{2,0,1},{3,0,0},{5,1,1}};
    int m2[3][3] = {{1,0,1},{1,2,1},{1,1,0}};
    int m3[3][3], suma, i=0, j=0, k=0, l=0;
    /*
    for (int i = 0; i < 3; i++){
        suma = 0;
        k=0;
        for(int j = 0; j < 3; j++){
            suma += m1[i][j]*m2[k][l];
            k++;
        }
        l++;
    }*/
    int cont = 0;
    bool reset = false;
    while(true){
        if(cont==3){
           reset = true; 
           if(i==2 && j>=2){
                break;
            }
        }
        if(reset){
            reset = false;
            l=0;
            i++;
            cont=0;
            cout<<endl;
        }
        suma = 0;
        k = 0;
        for(j = 0; j < 3; j++){
            suma += m1[i][j]*m2[k][l];
            k++;
        }
        cout<<"["<<suma<<"] ";
        l++;
        cont++;
    }
    cout<<endl;
    // Algoritmo del video
    int c[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            c[i][j] = 0;
            for (int k = 0; k < 3; k++){
                c[i][j] = c[i][j] + m1[i][k]*m2[k][j];
            }
            
        }
    }
    cout<<"Mattris resultante: "<<endl;
    

    getch();
    return 0;
}