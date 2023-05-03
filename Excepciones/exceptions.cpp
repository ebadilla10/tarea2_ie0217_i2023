/**
 * @file exceptions.cpp
 * @brief Función principal del programa
 * 
 * Este archivo contiene la función principal del programa, que lanza una excepción
 * personalizada de la clase MyException y la captura para imprimir información sobre ella.
 */

#include <iostream>
#include "exceptions.hpp"
#include <stdexcept> // Incluimos la librería <stdexcept> para poder utilizar las excepciones estándar
/**
 * @brief Función principal del programa
 * 
 * Esta función es la primera en ejecutarse cuando se inicia el programa. Lanza una
 * excepción personalizada de la clase MyException y la captura para imprimir información
 * sobre ella.
 * 
 * @return int Código de salida del programa
 */

 
/**
 * @brief Función que lanza una excepción de tipo std::logic_error
 */
void funcionExcepcionLogica() {
  throw std::logic_error("Ha ocurrido un error lógico"); // Lanzamos una excepción de tipo std::logic_error
}

/**
 * @brief Función que lanza una excepción de tipo std::runtime_error
 */
void funcionExcepcionTiempoEjecucion() {
  throw std::runtime_error("Ha ocurrido un error en tiempo de ejecución"); // Lanzamos una excepción de tipo std::runtime_error
}

/**
 * @brief Función que lanza una excepción de tipo std::invalid_argument
 */
void funcionExcepcionArgumentoInvalido() {
  throw std::invalid_argument("El argumento proporcionado es inválido"); // Lanzamos una excepción de tipo std::invalid_argument
}

/**
 * @brief Función principal del programa
 */
int main() {

  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
  try {
    funcionExcepcionLogica(); // Llamamos a la función que lanza una excepción de tipo std::logic_error
  } catch (std::exception& e) { // Capturamos la excepción y la manejamos
    std::cout << "Excepcion capturada: " << e.what() << std::endl; // Imprimimos un mensaje de error en la consola
  }

  try {
    funcionExcepcionTiempoEjecucion(); // Llamamos a la función que lanza una excepción de tipo std::runtime_error
  } catch (std::exception& e) { // Capturamos la excepción y la manejamos
    std::cout << "Excepcion capturada: " << e.what() << std::endl; // Imprimimos un mensaje de error en la consola
  }

  try {
    funcionExcepcionArgumentoInvalido(); // Llamamos a la función que lanza una excepción de tipo std::invalid_argument
  } catch (std::exception& e) { // Capturamos la excepción y la manejamos
    std::cout << "Excepcion capturada: " << e.what() << std::endl; // Imprimimos un mensaje de error en la consola
  }

  return 0;
}
