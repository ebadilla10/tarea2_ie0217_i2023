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

/**

@file MyException.hpp
@brief Declaración de la clase MyException
Este archivo contiene la declaración de la clase MyException, la cual es una clase
derivada de std::exception. Esta clase define una excepción personalizada y solo
implementa el método what().
*/
/**

@class MyException
@brief Clase que define una excepción personalizada
La clase MyException define una excepción personalizada derivada de std::exception.
Solo se implementa el método what() para retornar un mensaje de error personalizado.
*/
/**

@brief Retorna un mensaje de error personalizado
Este método retorna un mensaje de error personalizado de tipo const char*.
@return const char* Mensaje de error personalizado.
@throw Esta función no lanza excepciones.
*/
#include <iostream>
#include "MyException.hpp"

const char* MyException::what() const throw(){
return "My custom exception";
}


