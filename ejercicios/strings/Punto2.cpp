#include <iostream>
#include <cctype>  
#include <limits>
using namespace std;

int main() {
    string texto;
    string vocal_input;
    char vocal;
    int contador = 0;

    cout << "Ingrese una cadena: ";
    cin >> texto;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Ingrese la vocal que desea contar (deje en blanco para contar 'a'): ";
    getline(cin, vocal_input);

    if (vocal_input.empty()) {
        vocal = 'a';
    } else {
        vocal = tolower(vocal_input[0]);
    }

    vocal = tolower(vocal);

    for (int i = 0; i < texto.length(); i++) {
        if (tolower(texto[i]) == vocal) {
            contador++;
        }
    }

    cout << "Longitud de la cadena: " << texto.length() << endl;
    cout << "La vocal '" << vocal << "' aparece " << contador << " veces." << endl;

    return 0;
}