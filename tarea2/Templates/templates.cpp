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


#include <iostream> /*Entradas y Salidas en la consola*/
#include <vector> /*Almacenar los valores o elementos en la pila*/
#include <algorithm> /*usar foreach*/
#include <stdexcept> /*usar excepciones con la pila vacía*/
#include <functional> /*definir funciones que se van a usar en cada elemento de la pila*/


//Se usa una plantilla TEMPLATE para la clase que se llama stack y esta se puede.
//Usar con diferentes tipos de datos por ejemplo un int o un double.
template<typename T>
class Stack {

//La clase tiene un vector de tipo T del template que almacena los elementos de la pila.
//Se llama data_.
private:
  std::vector<T> data_;

public:
  //Métodos de la clase.

  //Esta función agrega un elemento a la pila.
  void push(T value) {
    data_.push_back(value);
  }

  //Esta función elimina el último elemento de la pila.
  //Si la pila está vacía tira una excepción.
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }

  //Se usa para limpiar la pila.
  void clear() {
    data_.clear();
  }
  //Se usa para ver si la pila está vacía.
  bool empty() const {
    return data_.empty();
  }
  //Se usa para ver el tamano de la pila.
  std::size_t size() const {
    return data_.size();
  }
  //Esta función aplica una función que se pasa como argumento a cada valor de la pila.
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

int main() {
  //Se crea una instancia de la clase que se llama s
  //Almacena datos de tipo entero.
  Stack<int> s;

  //Se usa push para meter los enteros en la pila.
  s.push(2021);
  s.push(2054);
  s.push(6524);

  std::cout << "Stack size: " << s.size() << std::endl;

  //Se llama a foreach para que itere en todos los valores de la pila.
  //Aplica una función para imprimir cada elemento en la terminal.
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  //loop para vaciar la pila con el método pop.
  //Si la pila está vacía y se usa pop se dispara una exepción que se queda en el bloque catch
  //Se imprime un mensaje de error en la terminal si se dispara esa excepción.
  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }


  std::cout << " \n Ejemplo #2 \n" << std::endl;


  //Se hace lo mismo solo que con un dato de tipo double.

  //1.Se insertan elementos en la pila.
  //2.Se pasa por todos los elementos y los imprime en la terminal.
  //3.Vacía la pila y también imprime su tamano.

  Stack<double> s2;
  //s2.push(3.14);
  //s2.push(2.718);
  
  std::cout << "Stack size: " << s2.size() << std::endl;
  
  s2.foreach([](double& value) {
    std::cout << "Value: " << value << std::endl;
  });
  
  try {
    while (s2.empty()) {
      double value = s2.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s2.size() << std::endl;
      
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  
    return 0;
  }
  

