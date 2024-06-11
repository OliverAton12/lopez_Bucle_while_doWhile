//FALTA ENUNCIADO

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));  // Inicializa la semilla para la generación de números aleatorios

    int contador = 0;

    cout << "100 números aleatorios comprendidos entre 15 y 120:" << endl;
    while (contador < 100) {
        int aleatorio = 15 + rand() % 106;  // Genera un número aleatorio entre 15 y 120
        cout << aleatorio << " ";
        contador++;
    }

    cout << endl;

    return 0;
}
