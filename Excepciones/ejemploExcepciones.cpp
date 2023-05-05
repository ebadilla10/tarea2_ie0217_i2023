#include <iostream>
#include <string>

void ejemploExcepciones(int numero) {
    if (numero < 0) {
        throw std::invalid_argument("El número debe ser positivo"); // Si se prueba un número negativo se lanza la excepción invalid_argument
    } else if (numero > 10) {
        throw std::out_of_range("El número es demasiado grande"); // Si se prueba un número mayor que 10 se lanza la excepción out_of_range
    } else if (numero == 5) {
        throw std::logic_error("El número no puede ser 5"); //  Si se prueba un número igual a 5 se lanza la excepción logic error
    } else {
        std::cout << "El número ingresado es válido: " << numero << std::endl;
    }
}

int main() {
    try {
        ejemploExcepciones(-2); // Se prueba un número negativo
    } catch (std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl; // Existe la excepción invalid_argument
    }

    try {
        ejemploExcepciones(15); // Se prueba un número mayor que 10
    } catch (std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl; // Existe la excepción out_of_range
    }

    try {
        ejemploExcepciones(5); // Se prueba el número 5
    } catch (std::logic_error& e) {
        std::cerr << "Error: " << e.what() << std::endl; // Existe la excepción logic_error
    }

    return 0;
}