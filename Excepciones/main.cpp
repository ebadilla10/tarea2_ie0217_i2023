/**
 * @file main.cpp
 * @brief Este archivo contiene la licencia MIT y el archivo contiene propiamente Función principal para demostrar el uso
 * de la clase MyException.
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

#include "exceptions.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <fstream>

/**
    @brief Función principal para demostrar el uso de la clase MyException.
    @return int Valor de retorno de la función.
*/
int main()
{
    MyException ex;

    try // Inicia un bloque try para capturar excepciones.
    {
        throw MyException(); // Lanza una excepción de la clase MyException.
    }
    catch (std::exception &e) // Captura una excepción de la clase std::exception (o de una subclase de ella).
    {
        std::cout << "Error: " << e.what() << std::endl; // Muestra en la consola el mensaje de la excepción capturada.
    }

    // Example for std::logic_error
    try
    {
        ex.no_such_function_error("some_function");
    }
    catch (std::logic_error &e)
    {
        std::cout << "Error: " << e.what() << " - " << e.what() << std::endl;
    }

    // Example for std::out_of_range
    std::vector<int> vec;
    try
    {
        if (vec.empty())
        {
            ex.empty_vector_error();
        }
        else
        {
            vec.erase(vec.begin());
        }
    }
    catch (std::out_of_range &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Example for std::runtime_error
    try
    {
        std::ifstream file("nonexistent_file.txt");
        if (!file)
        {
            ex.file_not_found_error("nonexistent_file.txt");
        }
    }
    catch (std::runtime_error &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0; // Retorna el valor 0 indicando que la ejecución del programa finalizó correctamente.
}