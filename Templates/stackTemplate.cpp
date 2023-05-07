/**
 * @file stackTemplate.cpp
 * @brief Este archivo contiene la licencia MIT y se trata de un código fuente de la tarea 2
 * de programación en C++ que tiene como objetivo hacer la revisión de una clase escrita bajo
 * la caracteristica Template, por lo tanto el archivo fuente stackTemplate.cpp contiene la
 * implementación completa de una clase pila mediante templates. Así como una pequeña función main
 * donde es utilizada esta plantilla para el caso del tipo entero.
 *
 * @details
 * Las modificaciones a este archivo son:
 * 1. La documentación de las lineas
 * 2. La revisión de los includes
 * 3. Una nueva instancia donde usa el template dado para otro tipo de dato.
 * 4. Una sentencia, declaración o instrucción que dispararía la excepción out_of_range presente en el template.
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

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <stdexcept>

/**
 * @brief Una clase de plantilla que representa una pila de elementos genéricos.
 *
 * Esta clase de plantilla representa una pila que puede contener cualquier tipo de objeto.
 * Los elementos se agregan a la pila en la parte superior y se eliminan de la pila desde la parte superior.
 */

template <typename T>
class Stack
{
private:
  std::vector<T> data_; ///< El vector que almacena los elementos de la pila.

public:
  /**
   * @brief Agrega un elemento a la parte superior de la pila.
   * @param value El valor del elemento que se va a agregar a la pila.
   */
  void push(T value)
  {
    data_.push_back(value);
  }

  /**
   * @brief Elimina y devuelve el elemento superior de la pila.
   * @return El valor del elemento superior que se eliminó de la pila.
   * @throw std::out_of_range Si la pila está vacía.
   */
  T pop()
  {
    if (data_.empty())
    {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }

  /**
   * @brief Elimina todos los elementos de la pila.
   */
  void clear()
  {
    data_.clear();
  }

  /**
   * @brief Devuelve true si la pila está vacía.
   * @return true si la pila está vacía, false en caso contrario.
   */
  bool empty() const
  {
    return data_.empty();
  }

  /**
   * @brief Devuelve el número de elementos en la pila.
   * @return El número de elementos en la pila.
   */
  std::size_t size() const
  {
    return data_.size();
  }

  /**
   * @brief Aplica una función a cada elemento en la pila.
   * @param func La función que se va a aplicar a cada elemento en la pila.
   *
   * La función debe tomar una referencia no constante al tipo genérico T.
   */
  void foreach (const std::function<void(T &)> &func)
  {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

/**
 * @brief Función principal que demuestra el uso de la clase Stack.
 *
 * Esta función crea una instancia de la clase Stack y agrega tres valores enteros a la pila.
 * Luego, se imprime el tamaño de la pila y se llama a la función foreach para imprimir cada valor
 * de la pila. A continuación, se vacía la pila utilizando la función pop en un bucle while y se
 * imprime cada valor que se elimina de la pila. Si se produce una excepción, se imprime un mensaje
 * de error.
 *
 * @return 0 al finalizar la ejecución del programa.
 */
int main()
{
  Stack<int> s; ///< Una instancia de la clase Stack que contiene valores enteros.
  s.push(2021); ///< Agrega el valor entero a la pila accediendo a método push
  s.push(2054);
  s.push(6524);
  std::cout << "Stack size: " << s.size() << std::endl; ///< Imprime tamaño de pila invoca a método size

  s.foreach ([](int &value)
             { std::cout << "Value: " << value << std::endl; }); ///< Llama función foreach, imprime cada valor de la pila.

  /* Modificación del archivo*/
  Stack<float> s1; ///< Nueva instancia de clase Stack template para otro tipo de dato (float).
  /* líneas utilizando esta nueva instancia*/
  std::cout << "La pila s1, " << (s1.empty() ? "si" : "no") << " está vacia."
            << " Stack size:" << s1.size() << std::endl;
  s1.push(100.1);
  s1.push(200.2);
  std::cout << "Stack1 size: " << s1.size() << std::endl;
  s1.foreach ([](float &value)
              { std::cout << "Value: " << value << std::endl; });
  std::cout << "La pila s1, " << (s1.empty() ? "si" : "no") << " está vacia."
            << " Stack size:" << s1.size() << std::endl;

  /* Instrucciones y declaraciones que disparan la excepción out_of_range presente en el template */
  /*   BORRAR
   s1.clear();
   std::cout << "La pila s1, " << (s1.empty() ? "si" : "no") << " está vacia."
             << " Stack size:" << s1.size() << std::endl;

   float value = s1.pop();                              //< invoca función pop, elimina valor parte superior de la pila y almacena en "value".
   std::cout << "Popped value: " << value << std::endl; ///< Imprime el valor que se eliminó de la pila.
   BORRAR */

  /* Fin de la modificación del archivo */

  try ///< comienzo de un bloque de código donde se espera que ocurran excepciones.
  {
    while (!s.empty()) ///< Mientras la pila no esté vacía, sigue eliminando valores de la pila.
    {
      int value = s.pop();                                 //< invoca función pop, elimina valor parte superior de la pila y almacena en "value".
      std::cout << "Popped value: " << value << std::endl; ///< Imprime el valor que se eliminó de la pila.
    }
    std::cout << "Stack size: " << s.size() << std::endl; ///< Imprime el tamaño de la pila (debería ser cero).
  }
  catch (const std::exception &e) ///< Si se produce una excepción, imprime un mensaje de error.
  {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0; ///< Indica si el programa se ejecutó correctamente.
}
