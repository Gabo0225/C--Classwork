#include <iostream>
using namespace std;

int main() {
    int edad;
    bool mayorDeEdad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    mayorDeEdad = (edad >= 18);

    cout << "¿Eres mayor de edad? " 
         << (mayorDeEdad ? "Sí" : "No") << endl;

    return 0;
}