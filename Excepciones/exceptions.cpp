/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

#include <iostream>
#include <vector>
#include <stdexcept>
#include "exceptions.hpp"


const char* MyException::what() const throw() {
  return "My custom exception";
}


/**
 * @brief Función principal que lanza una excepción personalizada y la maneja.
 * 
 * @return 0 si todo sale bien.
*/
int main() {

  /* Uso de la excepción out_of_range: se comprueba si un numero esta fuera
  del rango valido del vector*/
  std::vector<int> vec{1, 2, 3};
  try {
    int x = 5; 
    if (x >= vec.size()) {
      throw std::out_of_range("El indice esta fuera del rango valido del vector");
  }
  } catch (std::out_of_range& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  /* Uso de la excepción invalid_argument: se comprueba si un argumento es inválido */
  int num;
  try {
    num = -1;
    if (num <= 0) {
      throw std::invalid_argument("El numero debe ser positivo.");
    }
  }
  catch (const std::invalid_argument& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  /* Uso de la excepción logic_error: se comprueba si hay errores lógicos */
  int x = 5;
  int y = 0;
  try {
    if (y == 0) {
    throw std::logic_error("No se puede dividir por cero.");
    }
    int result = x / y;
  } catch (const std::logic_error& e) {
     std::cerr << "Error: " << e.what() << std::endl;
  }


  /* Se intenta lanzar una excepción  MyException dentro de un bloque try-catch. Si se lanza la excepción, 
  se captura con una referencia a std::exception en el bloque catch y se imprime
  el mensaje personalizado "My custom exception" utilizando la función what().*/
  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
  

  return 0;
}
