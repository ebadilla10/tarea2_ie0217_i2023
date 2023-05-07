/**
 * @file stackTemplate.hpp
 * @brief Este archivo contiene la licencia MIT y  las declaraciones donde se crea la clase exception de la
 * librería estándar para crear una excepción personalizada mediante herencia.
 *
 * @details
 * Las modificaciones a este archivo son:
 * 1. Documentar el código, el cual es corto, sin embargo, necesita una explicación.
 * 2. Realizar la división en archivos de encabezado y fuente para una correcta estructura de archivos.
 * 3. Investigue tres distintos tipos de excepciones incluidas en la librería estándar, y utilice estas
 * mediante un pequeño código que dispare dichas excepciones.
 * @par Licencia:
 * @code{.unparsed}
 * Licencia MIT
 *
 * Derechos de autor (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023
 *
 * La licencia MIT es una licencia de software libre permisiva. Este archivo
 * incluye el texto completo de la licencia, que se aplica a cualquier persona
 * que utilice el software y los archivos de documentación asociados.
 *
 * Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
 * software y los archivos de documentación asociados (el "Software"), para
 * utilizar el Software sin restricciones, incluyendo, sin limitación, los
 * derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
 * sublicenciar y/o vender copias del Software, y para permitir a las personas a
 * quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
 * condiciones:
 *
 * El aviso de copyright anterior y este aviso de permiso se incluirán en todas
 * las copias o partes sustanciales del Software.
 *
 * EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
 * IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
 * IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
 * AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
 * DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
 * OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
 * OTROS ACUERDOS EN EL SOFTWARE.
 * @endcode
 *
 * @author Rafael Esteban Badilla Alvarado
 *
 * @par Modificaciones:
 * Modificado por Alex Varela el 2 de mayo de 2023.
 */

#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>

/**
  @brief Clase de excepción personalizada que hereda de std::exception.
*/
class MyException : public std::exception
{
public:
  /**
   @brief Devuelve una cadena de caracteres que describe la excepción.
   Este método es llamado por std::exception::what para obtener la descripción de la excepción.
   @return Cadena de caracteres en formato C que describe la excepción.
   */
  const char *what() const throw();
  void no_such_function_error(const char *function_name);
  void empty_vector_error();
  void file_not_found_error(const char *file_name);
};

#endif