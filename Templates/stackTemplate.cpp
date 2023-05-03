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
#include <vector>
#include <algorithm>
#include <stdexcept>
// #include <functional>  No es necesaria



/**
 * @brief Plantilla de clase pila
 * 
 * @tparam T Tipo de dato a almacenar en la pila
 */
template<typename T>
class Pila
{
public:
    /**
     * @brief Construct a new Pila object
     * 
     */
    Pila()
    {
        maximo = 10;
        elementos = new T[maximo];
        tope = -1;
    }

    /**
     * @brief Destroy the Pila object
     * 
     */
    ~Pila()
    {
        delete[] elementos;
    }

    /**
     * @brief Agrega un elemento a la pila
     * 
     * @param elemento Elemento a agregar
     */
    void push(T elemento)
    {
        if (tope == maximo - 1) {
            throw std::out_of_range("Pila llena");
        }

        elementos[++tope] = elemento;
    }

    /**
     * @brief Elimina el elemento en el tope de la pila
     * 
     */
    void pop()
    {
        if (tope == -1) {
            throw std::out_of_range("Pila vacia");
        }

        --tope;
    }

    /**
     * @brief Obtiene el elemento en el tope de la pila
     * 
     * @return T Elemento en el tope de la pila
     */
    T top()
    {
        if (tope == -1) {
            throw std::out_of_range("Pila vacia");
        }

        return elementos[tope];
    }

private:
    T* elementos;
    int maximo;
    int tope;
};

/**
 * @brief Función principal del programa
 * 
 * @return int 
 */
int main()
{
    // Creamos una instancia de Pila<int>
    Pila<int> miPila;

    // Agregamos algunos elementos a la pila
    miPila.push(1);
    miPila.push(2);
    miPila.push(3);

    // Eliminamos un elemento de la pila
    miPila.pop();

    // Obtenemos el elemento en el tope de la pila y lo mostramos
    std::cout << "El elemento en el tope de la pila es: " << miPila.top() << std::endl;

    // Creamos una instancia de Pila<std::string>
    Pila<std::string> miPilaDeStrings;

    // Agregamos algunos elementos a la pila de strings
    miPilaDeStrings.push("Hola");
    miPilaDeStrings.push("Mundo");

    // Eliminamos un elemento de la pila de strings
    miPilaDeStrings.pop();

    // Obtenemos el elemento en el tope de la pila de strings y lo mostramos
    std::cout << "El elemento en el tope de la pila de strings es: " << miPilaDeStrings.top() << std::endl;

    // Agregamos un elemento más de los permitidos a la pila de strings para que se lance la excepción out_of_range
    // miPilaDeStrings.push("Excediendo el límite de la pila");
}



















