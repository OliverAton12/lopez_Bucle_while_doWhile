//FALTA ENUNCIADO
//FALTAN CAPTURAS DE PANTALLA

#include <iostream>
using namespace std;

int main() {
    int num, n, cont;
    cout << "Ingrese un entero: ";
    cin >> num;

    cont = 0;
    n = 1; // Inicializamos n con 1

    while (n <= num) {
        n *= 10;
        cont++;
    }

    cout << endl << cont;
    return 0;
}
//En resumen, el programa calcula y muestra la cantidad de dígitos del número ingresado por el usuario.
