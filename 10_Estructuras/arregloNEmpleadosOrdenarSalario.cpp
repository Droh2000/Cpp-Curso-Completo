#include <iostream>
#include <string>
#include<conio.h>

using namespace std;

struct empleado {
    string nombre;
    float salario;
    string area;
};

// Función para intercambiar dos empleados
void intercambiar(empleado &a, empleado &b) {
    empleado temp = a;
    a = b;
    b = temp;
}

// Función para ordenar los empleados por salario (de menor a mayor)
void ordenarPorSalario(empleado *e, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (e[j].salario > e[j + 1].salario) {
                intercambiar(e[j], e[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Ingrese el numero de empleados: ";
    cin >> n;

    if (n <= 0) {
        cout << "El número de empleados debe ser positivo." << endl;
        return 1;
    }

    empleado *e = new empleado[n];

    cout << "Ingrese los datos de los empleados:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin >> e[i].nombre;
        cout << "Salario: ";
        cin >> e[i].salario;
        cout << "Area: ";
        cin >> e[i].area;
    }

    ordenarPorSalario(e, n);

    cout << "Empleados ordenados por salario (de menor a mayor):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nombre: " << e[i].nombre << endl;
        cout << "Salario: " << e[i].salario << endl;
        cout << "Area: " << e[i].area << endl;
    }

    delete[] e;
    getch();
    return 0;
}