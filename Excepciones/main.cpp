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
 * @brief Función principal del programa.
 * 
 * @return int 
 */

int main() {
    /**
     * @brief Imprime el mensaje de error de la excepción capturada.
     * 
     */
  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
    /**
     * @brief Imprime el mensaje de logic error por la division entre 0.
     * 
     */
  float a = 10.0, b = 0.0;
  try {
    std::cout << "Resultado: " << dividir(a, b) << std::endl;
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

    /**
     * @brief Imprime el mensaje de domain error por realizar la raiz cuadrada de un numero negativo,
     * lo cual causa un cambio de dominio a complejos.
     */

    try {
    double x = -2.0;
    double y = std::sqrt(x);
    std::cout << "La raíz cuadrada de " << x << " es " << y << std::endl;
  } catch (std::domain_error& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

    /**
     * @brief Imprime el mensaje de invalid algument por tratar de convertir unos caracteres char a int 
     * siendo un argumento invalido para esta conversion.
     */

    try {
    std::string str = "abc";
    int num = convertir_entero(str);
    std::cout << "Número convertido: " << num << std::endl;
  } catch (std::invalid_argument& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}
