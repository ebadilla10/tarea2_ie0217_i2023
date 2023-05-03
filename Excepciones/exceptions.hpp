/**
 * @file exceptions.hpp
 * @brief Definición de la clase MyException
 * 
 * Este archivo contiene la declaración de la clase MyException, que es una
 * subclase de std::exception y se utiliza para lanzar excepciones personalizadas.
 */

#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>

/**
 * @brief Clase para excepciones personalizadas
 * 
 * La clase MyException es una subclase de std::exception y se utiliza para lanzar
 * excepciones personalizadas en el programa. El método what() devuelve una cadena
 * de caracteres con información sobre la excepción lanzada.
 */
class MyException : public std::exception {
public:
  /**
   * @brief Devuelve información sobre la excepción lanzada
   * 
   * Este método devuelve una cadena de caracteres con información sobre la excepción
   * lanzada.
   * 
   * @return const char* Cadena de caracteres con información sobre la excepción lanzada
   */
  const char* what() const throw() {
    return "My custom exception";
  }
};

#endif // EXCEPTIONS_HPP
