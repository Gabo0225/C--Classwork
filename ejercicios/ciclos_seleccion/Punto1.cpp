#include <iostream>
using namespace std;

int main() {
    int opcion;
    double num1, num2;

    cout << "Menú de operaciones matemáticas:\n";
    cout << "1. Sumar\n";
    cout << "2. Restar\n";
    cout << "3. Multiplicar\n";
    cout << "Ingrese una opción (1-3): ";
    cin >> opcion;

    cout << "Ingrese dos números: ";
    cin >> num1 >> num2;

    switch(opcion) {
        case 1:
            cout << "Resultado de la suma: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado de la resta: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado de la multiplicación: " << num1 * num2 << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
    }

    return 0;
}