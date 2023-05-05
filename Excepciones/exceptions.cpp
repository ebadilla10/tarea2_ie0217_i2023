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

// Tarea 2 Elias Alvarado Vargas B80372
// Parte Excepciones

// En el siguiente codigo se presenta como crear una excepcion en C++,
// y luego como poder usarla utilizando un bloque try, entonces la excepcion
// es lanzada y capturada en el bloque que se tiene en el main.

// Se incluye biblioteca iostream para tener acceso a los dispositivos estandar de entrada
// y salida.
#include <iostream>

// En el siguiente bloque se presenta una clase denominada MyException, que hereda de la 
// clase exception.
class MyException : public std::exception {

// Ahora a partir de la clase MyException, tiene un retorno de caracteres que menciona
// My custom exception, donde lo que pasa es que ha lanzado un tipo de excepcion personalizada
// what() la cual es publica 
public:
  const char* what() const throw() {
    return "My custom exception";
  }
};

// Ahora en la funcion main se presenta en el siguiente bloque
int main() {


// Ahora se tiene la palabra clave throw que lanza una excepcion 
// de la clase My Exception, y en el catch realiza la captura de 
// cualquier excepcion capturada, en este caso es la palabra que
// retorna por el metodo que se menciono antes what() de la clase MyException
  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}
