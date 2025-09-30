#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;

    if (a > b) {
        cout << "El primer número es mayor que el segundo." << endl;
    } else if (a < b) {
        cout << "El primer número es menor que el segundo." << endl;
    } else {
        cout << "Los dos números son iguales." << endl;
    }
    
    return 0;
}