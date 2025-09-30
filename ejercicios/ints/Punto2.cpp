#include <iostream>
using namespace std;

int main() {
    int n;
    bool es_primo = true;

    cout << "Ingrede un numero entero: ";
    cin >> n;

    if (n <= 1) {
        es_primo = false;
    } else {
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                es_primo = false;
                break;
            }
        }
    }
    if (es_primo)
        cout << "El numero " << n << " es primo" << endl;
    else
        cout << "El numero " << n << " no es primo" << endl;

    return 0;
}