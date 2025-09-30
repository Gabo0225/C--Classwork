#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string texto;
    cout << "Ingrese una palabra o frase: ";
    cin >> texto;
    transform(texto.begin(), texto.end(), texto.begin(), ::tolower);
    cout << "minusculas: " << texto << endl;
    return 0;
}