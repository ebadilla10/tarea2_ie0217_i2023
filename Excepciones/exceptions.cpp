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

#include "exceptions.hpp"

  /**
   * @brief Devuelve un mensaje de error personalizado.
   * 
   * @return const char* 
  */ 

const char* MyException::what() const throw() {
  return "My custom exception";
}

  /**
   * @brief Devuelve un mensaje de logic error.
   * 
   * @return float a / b 
  */ 
float dividir(float a, float b) {
  if (b == 0) {
    throw std::logic_error("No se puede dividir por cero");
  }
  return a / b;
}

 /**
   * @brief Devuelve un mensaje de invalid argument.
   * 
   * @return int
  */ 
int convertir_entero(std::string str) {
  try {
    return std::stoi(str);
  } catch (std::invalid_argument& e) {
    throw std::invalid_argument("El argumento no es un número válido");
  }
}