// Tarea 2 Elias Alvarado Vargas

// Codigo contiene 3 tipos de excepciones incluidas de la libreia estandar
// de c++, donde sobresale la excepcion logica, excepcion de longitud y excepcion
// de dominio
// Es importante destacar que para todos los casos investigados, se usa para las 
// excepciones el bloque que tiene try, catch para asi poder capturar y manejar
// la excepcion presentada para el caso que se tenga.

#include <iostream>
#include <stdexcept>
#include <string>

int main() {

    // Para esta primera excepcion, lo que se realiza es que la excepcion de logica para poder lanzar una 
    // excepcion teniendo un mensaje personalizado que para el caso de que ambas variables de 
    // tipo booleanas sean verdaderas
    try {
        // Se tienen las variables ´x´ y `y` en tipo booleanas y se declaran como true
        bool x = true, y = true;
        if (x && y) {
            throw std::logic_error("Se esperaba que x o y fueran falsos");
        }
    } catch (const std::logic_error& e) {
        std::cout << "Excepcion de logica: " << e.what() << std::endl;
    }

    // En el siguiente bloque de codigo se presenta la segunda excepcion, donde sobresale la 
    // excepcion de longitud para detectar el acceso de un fuera de rango sobre un elemento 
    // en la una palabra o cadenas de caracteres
    try {
        std::string str("Hola mundo!");
        str.at(100); // acceso fuera de rango
    } catch (const std::length_error& e) {
        std::cout << "Excepcion de longitud: " << e.what() << std::endl;
    }

    // Por ultimo en la siguiente excepcion se usa el tipo de excepcion de dominio para poder
    // detectar el error en el proceso matematico de realizar la division de un numero entero por cero
    try {
    } catch (const std::domain_error& e) {
        std::cout << "Excepcion de dominio: " << e.what() << std::endl;
    }
  
    return 0;
}