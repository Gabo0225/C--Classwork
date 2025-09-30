#include <iostream>
using namespace std;

int main() {
    double numero, porcentaje;
    cout << "Ingrese un número: ";
    cin >> numero;
    cout << "Ingrese el porcentaje: ";
    cin >> porcentaje;
    
    double resultado = (numero * porcentaje) / 100;
    
    cout << porcentaje << "% de " << numero << " es: " << resultado << endl;
    
    return 0;
}