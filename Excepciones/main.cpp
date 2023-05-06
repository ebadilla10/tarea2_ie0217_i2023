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
#include <stdexcept>
#include <vector>
#include "exceptions.hpp"

int main() {

  // disparar excepcion personalizada
  try {

    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  // disparar excepcion out_of_range
  std::vector<int> vector1 = { 11, 6, 3, 8, 5 };
    try {
        // Accesar una posicion no existente
        int eigth = vector1.at(8); 
    } catch(const std::out_of_range& e) {
        std::cerr << "Error: Index out of range " << e.what() << std::endl;
    }

    // disparar excepcion invalid_argument
    try{
        // Pasar letras en vez de numeros
        int value = std::stoi("ABC");
    } catch(const std::invalid_argument& e) {
        std::cerr << "Error: Invalid argument in " << e.what() << std::endl;
    }

    // disparar excepcion bad_alloc
    try {
        // crear un array muy grande
        std::vector<int> vector2(30700008709);
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: Memory allocation failed " << e.what() << std::endl;
    }

  return 0;
}
