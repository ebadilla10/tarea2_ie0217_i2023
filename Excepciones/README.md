### Universidad de Costa Rica
#### IE-0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería

Primer semestre del 2023

---
* Estudiante: **Valeria Mora Torres**
* Carné: **B75122**
* Grupo: **2**

# Tipos de excepciones

### std::out_of_range

Esta excepción se lanza cuando se intenta acceder a un índice de un contenedor que está fuera del rango válido. Es posible capturar esta excepción y tomar medidas para evitar el acceso fuera de rango **[1]**.

### std::invalid_argument

Esta excepción se lanza cuando se proporciona un argumento inválido a una función. Es posible capturar esta excepción y tomar medidas para evitar que la función continúe su ejecución con un argumento inválido **[2]**.

#### std::logic_error

Esta excepción se utiliza para errores lógicos que ocurren durante la ejecución del programa, como por ejemplo una operación matemática que no tiene sentido o un puntero nulo utilizado de forma incorrecta **[3]**. 


### Referencias

**[1]** Cppreference. (2022). std::out_of_range. [Online]. Disponible en: https://en.cppreference.com/w/cpp/error/out_of_range

**[2]** Cppreference. (2022). std::invalid_argument. [Online]. Disponible en: https://en.cppreference.com/w/cpp/error/invalid_argument

**[3]** Cppreference. (2022). std::logic_error. [Online]. Disponible en: https://en.cppreference.com/w/cpp/error/logic_error

# Instrucciones de ejecución

Hay dos formas de ejecutar el programa:
* Ubicado dentro de la carpeta Excepciones, se debe agregar en una nueva terminal la siguiente línea de comando:

```
g++ -o exceptions.exe .\exceptions.cpp  
```

Seguidamente ejecute el archivo .exe generado, esto agregando en la terminal la siguiente línea de comando: 

```
.\exceptions.exe
```

*  También puede compilar y ejecutar por medio del comando:

```
make
```


