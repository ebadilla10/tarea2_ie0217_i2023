/**

@file MyException.hpp
@brief Definición de la clase MyException
Este archivo define la clase MyException, que hereda de std::exception y tiene
un método "what" para retornar un mensaje personalizado de error.
*/

#ifndef MY_EXCEPTION_H
#define MY_EXCEPTION_H

#include <iostream>

using namespace std;

/**
@brief Clase MyException
La clase MyException hereda de std::exception y tiene un único método, "what",
que retorna un mensaje personalizado de error.
*/
class MyException: public std::exception {
  public:

    /**
    @brief Retorna un mensaje personalizado de error
    Este método retorna un mensaje personalizado de error, que indica que
    ha ocurrido una excepción de tipo MyException.
    @return const char* Mensaje personalizado de error
    */
    const char* what() const throw();
};
#endif