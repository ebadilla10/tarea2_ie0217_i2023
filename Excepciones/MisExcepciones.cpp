#include <stdexcept>
#include <iostream>
#include <vector>

void divide(int numerador, int denominador) {
    if (denominador == 0) {
        throw std::invalid_argument("Denominador no puede ser cero.");
    }
    int resultado = numerador / denominador;
    std::cout << "Resultado: " << resultado << std::endl;
}

int main() {
    try {
        divide(10, 0);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

        std::vector<int> numeros = {1, 2, 3};
    try {
        std::cout << numeros.at(3) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    bool resultado = true;
    try {
        if (resultado) {
            throw std::logic_error("El resultado debería ser falso.");
        }
    } catch (const std::logic_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}