#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));

    int aleatorio = 1 + rand() % 50;
    cout << endl << "El numero generado es: " << aleatorio;

    bool adivinaste = false;
    int oportunidades = 0;
    int num_usuario;

    do {
        cout << endl << "Ingrese un numero: ";
        cin >> num_usuario;

        if (num_usuario < aleatorio) {
            cout << endl << "Ingresaste el: " << num_usuario << ". Debes ingresar uno mayor.";
        } else if (num_usuario > aleatorio) {
            cout << endl << "Ingresaste el: " << num_usuario << ". Debes ingresar uno menor.";
        } else {
            adivinaste = true;
            cout << endl << "FELICIDADES, GANASTE LA BELA EN LA PUCE ESMERALDAS :)";
        }

        oportunidades++;

    } while (oportunidades < 3 && !adivinaste);

    if (!adivinaste) {
        cout << endl << "Lo siento, se acabaron las oportunidades. El numero era: " << aleatorio << ". Mejor suerte la proxima vez.";
    }

    return 0;
}
