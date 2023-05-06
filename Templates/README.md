# Templates

### 1. Verificar si todos los includes agregados son necesarios para la compilación del código dado. Esto es necesario realizarlo porque en ocasiones se incluyen headers totalmente innecesarios, y si el compilador no posee instrucciones de ignorar los archivos no utilizados, se agregará código extra innecesario.

##### En este caso se procedió a probar eliminando cada uno de los includes y compilando el código. Para el caso de los includes: 'iostream', 'vector', 'algorithm' y 'functional' se presentaban errores cuando alguno de ellos no eran incluidos cada vez que se compilaba el código, por lo que puede concluir que cada uno de éstos es necesario para el funcionamiento del código.

##### Por otro lado, en el caso del include 'stdexcept', sucedió lo contrario. A la hora de no incluirlo en la compilación, el programa funcionó igualmente de manera correcta, sin embargo con esto no se puede descartar que dicha librería sea innecesaria. En este caso es indiferente agregarla porque los valores que se prueban en el Main no generan ningún error que utilice excepciones de la librería. Pero en el momento que la pila está vacía, se lanzará una excepción de tipo "std::out_of_range", por lo que si se elimina esta librería del header se corre el riesgo que el código no compile si se prueba el caso en que la pila se encuentre vacía
