#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, y;
    cout << "Ingrese un número flotante: ";
    cin >> x;
    cout << "Ingrese el exponente: ";
    cin >> y;
    
    cout << "Resultado: " << pow(x, y) << endl;
    
    return 0;
}