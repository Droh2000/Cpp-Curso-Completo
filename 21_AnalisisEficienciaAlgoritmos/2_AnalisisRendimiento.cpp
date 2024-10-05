/*

                    Analisis de Rendimiento

    La medida del rendimiento de un programa se consigue mediante la complejidad del espacio 
    y del tiempo de un programa (Para saber el analisis de rendimiento del programa se analizan estas dos cosas)

    Complejidad del Espacio

        Es la cantidad de memoria que se necesita para ejecutar hasta la complecion (terminacion).
        El avanze tecnologico proporciona hoy en dia memoria abundante, por esa razon el analisis de algoritmos
        se centra fundamentalmente, en el tiempo de ejecucion.
        (Es la cantidad de memoria que ocupa el programa hasta que finaliza). Actualmente gracias a la tecnologia 
        se centra mas en el tiempo de ejecucion de los programas no en la complejidad del espacio

    Complejidad de Tiempo

        Es la cnatidad de tiempo de computadora que se necesita para ejecutarse. Se utiliza una funcion T(n),
        para representar el numero de unidades de tiempo tomadas por un programa o algoritmo para cualquier
        entrada de tamaño "n"
        (Tiempo en ejecutarse y terminar el programa)

    Ejemplo:
        Vamos a calcular el tiempo de ejecucion lineal de una funcion que calcula una serie de N terminos

            double serie(double x, int n){
                double s;
                int i=0;
                s = 0.0;                    // Tiempo 1
                for(i = 1; i <= n; i++){    // Tiempo 2
                    s += i * x;             // Tiempo 3
                }
                return s;                   // Tiempo 4
            }
            
        Lo que nos vamos a centrar en esta funcion es calcular el tiempo que le va a tomar a la computadora
        ejecutarla, al momento en el que empezamos a poner instruccion de logica empieza a contar el tiempo
        
        Toda esta funcion esta basada en 4 tiempos y para saber el tiempo general tenemos que la funcion T(n)
        del metodo es: 
                        T(n) = t1 + n*t2 + n*t3 + t4
        
        La funcion del tiempo es igual a la suma de todos los timepos, el t1 (es la asignacion de una variable
        que es un tiempo normal), t2 (es un bucle que se repite N veses por eso se multiplica por N que es la 
        cantidad de veses que el bucle va a dar vueltas), el t3 (Es una accion dentro del bucle lo que significa 
        que esta accion tambien se va a repetir N veses) y luego le sumamos el t4.
        
        Entonces solo es la suma de todos los tiempos dandonos cuenta cuanto se demora en cada tiempo

        El tiempo va a crecer a medida que lo hace N, por ello es preferible expresar el tiempo de ejecucion de 
        tal forma que indique el comportamiento que va a tener la funcion con respecto al valor de N
        (Como en esta funcion que va a tener un mayor tiempo dependiendo del valor que tenga N porque si vale 1000 el 
        t2 y t3 van a dar 1000 veses la ejecucion), entonces el valor de N repecute mucho en el tiempo general que 
        nos dara la funcion (Dependiendo del valor de N sera el tiempo en que termine la ejcucion)

        La eficiencia del tiempo esta dada principalmente por los bucles (Cantidad de vueltas que los bucles den)
        Asi como medimos el tiempo de esta funcion, es como se mide el tiempo d eotras funciones

    Considerando todas las reflexiones anteriores, si T(n) es el tiempo de ejecucion de un programa con entrada de
    tamaño n, sera posible valorar T(n) como el numero de sentencias ejecutadas por el programa y la evaluacion se
    podra efectuar desde diferentes puntos de vista.
    (La suma de tiempos esta bien pero N es realmente lo que detemrina cuando tardar la funcion)

    Diferentes puntos de vista que pueden pasar segun el valor de N:
        - Peor Caso: Indica el tiempo peor que se puede tener. Este analisis es perfectamente adecuado para algoritmos
                        cuyo tiempo de respuesta sea critico (El tamano maximo que puede tomar N que son las vueltas 
                        que dan los bucles, cuando tenga que dar la mayor cantidad de vueltas posibles)
                    Lo que pasa es analizar nuestro programa en el peor de los casos y ver como se ejecuta, si sale bien 
                    al ponerlo en practica nos resultara util pero si es malo lo mejor es cambiarlo
        - Mejor Caso: Indica el tiempo mejor que podemos llegar a tener
        - Caso Medio: Se puede computar T(n), como el tiempo medio de ejecucion de programa sobre todas las posibles ejecuciones
                      de entradas de tamano N. el tiempo de ejecucion medio es a veces una medida mas realista de lo que el 
                      rendimiento sera en la practica, pero es, normalmente mucho mas dificil de calcular que el tiempo de ejecucion
                      en el caso pero.
                    Es donde principalmente nuestro programa podra estar en la practica cuando se dispone al usario final y es mas complicado
                    de detemrinar porque es un promedio de los peores casos y mejores casos

*/