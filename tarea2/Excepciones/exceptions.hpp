#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP //Se usa para evitar problemas de crear un archivo doble

#include <stdexcept> // Incluimos la librería para usar las excepciones de la STL


//Esta clase hereda de std::exception
class MyException : public std::exception {
public:
//define una función que se llama what()
//what() devuelve un string que describe la excepción.
  const char* what() const throw() {
    return "My custom exception";
  }
};




//Estas 3 excepciones heredan de las excepciones estandar de STL
//Tienen un constructor que alamcena un string como argumento
class OutOfRangeException : public std::out_of_range {
public:
  OutOfRangeException(const char* msg) : std::out_of_range(msg) {}
};

class InvalidArgumentException : public std::invalid_argument {
public:
  InvalidArgumentException(const char* msg) : std::invalid_argument(msg) {}
};

class LengthErrorException : public std::length_error {
public:
  LengthErrorException(const char* msg) : std::length_error(msg) {}
};

#endif // EXCEPTIONS_HPP

