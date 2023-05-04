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

// Este código implementa la creación de la clase MyException. La clase MyException hereda los métodos y miembros de la clase 'std::exception'. 
class MyException : public std::exception {
public: // Posee permisos públicos
  // Se sobreescribe el método what() y se devuelve un puntero a una cadena de caracteres (const char*) que describe la excepción
  const char* what() const throw() { 
    return "My custom exception"; 
  }
};

// Creación de la función prinicipal del prorgrama 
int main() {

  // Se llama al bloque try-catch para el debido manejo de excepciones. 
  try {
    throw MyException();
    // La exepción es capturada en el bloque 'catch(std::exception& e)'
  } catch (std::exception& e) { // Captura cualquier excepción de tipo std::exception o cualquier subclase de std::exception
    std::cout << "Error: " << e.what() << std::endl; // Al ejecutarse el programa, se lanza la excepción MyException y se muestra el mensaje "Error: My custom exception" 
  }

  // Finaliza el programa
  return 0;
}
