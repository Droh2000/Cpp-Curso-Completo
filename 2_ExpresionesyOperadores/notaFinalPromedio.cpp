/*
    La calificacion final de un estudiante es el promedio de tres notas

    - La nota de practicas cuentan 30% del total
    - La nota teorica cuentan un 60%
    - La nota de participacion cuentan el 10% restante

*/

#include<iostream>

using namespace std;

int main(){

    float practicas, teoricas, parti, nota = 0;

    cout << "Ingrese la nota de practicas: ";
    cin >> practicas;

    cout << "Ingrese la nota teorica: ";
    cin >> teoricas;

    cout << "Ingrese la nota de perticipacion: ";
    cin >> parti;

    practicas *= 0.3;
    teoricas *= 0.6;
    parti *= 0.1;

    nota = practicas + teoricas + parti;

    cout << "La nota final es: " << nota;

    return 0;
}