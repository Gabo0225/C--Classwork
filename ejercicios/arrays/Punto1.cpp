#include <iostream>
using namespace std;

int main() {
    int arr[5], suma = 0;
    double promedio;

    cout << "Ingrese 5 números: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        suma += arr[i];  
    }

    promedio = suma / 5.0; 
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
