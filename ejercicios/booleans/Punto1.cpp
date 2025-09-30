#include <iostream>
using namespace std;

int main() {
    int numero;
    bool Rango;

    cout << "Ingrese un número: ";
    cin >> numero;

    Rango = (numero >= 10 && numero <= 20);

    cout << "¿Está dentro del rango [10, 20]? " 
         << (Rango ? "Sí" : "No") << endl;

    return 0;
}