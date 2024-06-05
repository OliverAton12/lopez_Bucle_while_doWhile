#include <iostream>

int main() {
    int numero;

    do {
        std::cout << "Ingrese un numero para obtener su tabla de multiplicar (Ingrese 0 para salir): ";
        std::cin >> numero;

        if (numero != 0) {
            std::cout << "Tabla de multiplicar del " << numero << ":" << std::endl;
            for (int multiplicador = 1; multiplicador <= 12; multiplicador++) {
                std::cout << numero << " x " << multiplicador << " = " << numero * multiplicador << std::endl;
            }
            std::cout << std::endl;
        }

    } while (numero != 0);

    std::cout << "Programa terminado." << std::endl;

    return 0;
}
