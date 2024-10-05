#include<iostream>
#include<conio.h>

using namespace std;

template <class tipoN>
tipoN maximo(tipoN num1,tipoN num2,tipoN num3);
//void pedirDatos();

int main(){

    int n1=4, n2=2, n3=5;
    cout<<"El maixmo es: "<<maximo(n1,n2,n3)<<endl;
    float n4=145.36, n5=456.369, n6=785.36;
    cout<<"El maixmo es: "<<maximo(n4,n5,n6)<<endl;
    double n7=478.356, n8=589.36974,n9=102.36;
    cout<<"El maixmo es: "<<maximo(n7,n8,n9)<<endl;
    long n10=4689.56154, n11=29865.16188, n12=8965742;  
    cout<<"El maixmo es: "<<maximo(n10,n11,n12)<<endl;

    getch();
    return 0;
}

template <class tipoN>
tipoN maximo(tipoN num1,tipoN num2,tipoN num3){
    if((num1 >= num2) && (num1 >= num3)){
        return num1;
    }else if((num2 >= num1) && (num2 >= num3)){
        return num2;
    }else{
        return num3;
    }
}