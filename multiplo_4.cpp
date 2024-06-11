//FALTA ENUNCIADO

#include <iostream>

int main() {
    int k = 1;

    std::cout << "Multiplos de 4 entre 1 y 50 usando while:" << std::endl;
    while (k <= 50) {
        if (k % 4 == 0) {
            std::cout << k << std::endl;
        }
        k++;
    }

    return 0;
}
