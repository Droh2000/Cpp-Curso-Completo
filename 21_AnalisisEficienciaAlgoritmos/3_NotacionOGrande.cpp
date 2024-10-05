/*

                    Notacion O-Grande

    La alta velocidad de las computadoras actuales hace que la medida exacta de la eficiencia de un
    algoritmo no sea una preocupacion vital en el diseño pero si el orden general de magnitud de la misma

    Como las computadoras actuales pueden procesar mucha informacion en poco tiempo entonces hace que la 
    eficencia en espacio de un algoritmo ya no sea una preocupacion tan vital como lo era antes, pero de
    todas formas si hay que tener en cuenta que:

    El algoritmo debe ser lo mas eficientemente posible para que donde se ejecute tanto el espacio como tiempo
    se lo mejor (Algo muy a tener en cuenta es la magnitud de la eficiencia que tienen los algoritmos)

    Si el analisis de dos algoritmos muestra que uno ejecuta 25 iteraciones mientras que otro ejecuta 40,
    entonces la practica muestra que ambos son muy rapidos, entonces ¿Como valorar las diferencias? Ahora 
    bien, si un algoritmo realiza 25 iteraciones y otro 25000 iteraciones, entonces debemos estar preocupados
    por la rapidez o la lentitud de uno y otro  (En este caso si hay mucha diferencia entre los dos algoritmos)

    Anteriormente se ha expresado mendiante la formula f(n) el numero de sentencias ejecutadas para n datos.
    El factor dominante que se debe considerar para determinar el orden de magnitud de la formula es el 
    denominado FACTOR DE EFICIENCIA (Nosotros vamoa a tener nuestra funcion de eficiencia que puede tener varias
    operaciones como vimos anteriromente, pero realmente lo que nos va a importar es determinar cual es la magnitud
    de toda esa funcion, es decir el FActor de Eficiencia)

    Por consiguiente no se necesita determinar la medida completa de la eficiencia, basta con calcular el factor
    que determina la magnitud. Este factor se define como "O GRANDE" que representa "ESTA EN EL ORDEN DE" y se 
    expresa como O(n), es decir "EN EL ORDEN DE N" (Lo que vamos a ver a partir de ahora es que ya no tomaremos la
    funcion completa de la eficiencia sino que vamos a tratar de determinar el factor que determina la magnitud, es
    decir la mayor magnitud de nuestra eficiencia y eso se hace con la NOTACION O GRANDE).

    La notacion O indica la cota superior del tiempo de ejecucion de un algoritmo o programa (Mayor magnitud que debe
    tener la funcion). Asi en lugar de decir que un algoritmo emplea un tiempo de 4n-1 en procesar un array de longitud 
    N, se dira que emplea un tiempo O(n) que se lee "O grande de N" o bien "O de n" y que informalmente se significa 
    "Algunos tiempos constantes N" (En este ejemplo con esta funcion de eficienca "4n-1" nesecitamos calcular la mayor 
    magnitud que va a tener que en este caso es solo N por tanto la notacion de magnitud es solo O(n) para la funcion de eficiencia)

    Determinar la Notacion O

    La notacion O grande se puede obtener a partir de f(n) utilizando los siguientes pasos:
        1. En cada termino establecer el coeficiente del termino en 1 (Tomando como ejemplo "4n-1", el 4 es el coeficiente del termino,
            En toda funcion de eficiencia siempre hay un coeficiente que acompaña a N, y esos coeficientes se transforman en 1)
        2. Mantener el termino mayor de la funcion y descartar los restantes. (Solo nos interesa la couta superiro y vamos a descartar 
            todo lo restante) Los terminos se ordenan de menor a mayor como lo siguente:
                - Log2n -> Es lo mas eficiente que existe y en terminos de magnitud es el menor
                - n     
                - nlog2n 
                - n^2    
                - n^3
                - n^K ... -> Asi pueden seguir en la potencia que sea
                - 2^n
                - n!    -> ESte es el menos eficiente
            Estas son todas las magnitudes posibles que podemos tener en las funciones de eficiencia,
            entonces cuando se nos dice mantener el termino mayor de la funcion significa aqui que el
            mayor es "n!" y el menor es "log2n", las funciones de eficiencia pueden estar combinadas
            con estas diferentes magnitudes, lo que se trata para detemrinar la notacion o es tomar 
            la couta superior (La mayor magnitud de la funcion)

        Ejemplo 1: Calcular la funcion O grande de la siguiente funcion de eficiente

                        f(n) = n (n+1) / 2
            
            Cuando recien comenzamos a aprender esto, para determinar esto son solo usar la vista no se puede resolver
            entonces lo resolvemos a mano:

                        n^2 + n / 2  =  n^2/2 + n/2 = 1/2 n^2 + 1/2 n
        
            Los coeficientes del termino los transformamos en 1 (Serian los dos medios)
            por lo tanto nos queda: n^2 + n    
        
            Tomar la mayor magnitud: n^2

            La notacion O correspondiente es: O(f(n)) = O(n^2) 

        Ejemplo 2: Calcular la funcion O grande de la siguiente funcion de eficiencia:

                f(n) = aj n^k + aj-1 n^k-1 + aj-2 n^k-2 + ... + a2 n^2 + a1 n + a0
            
            k y j van disminuyendo

            Los coeficientes del termino se transforman en 1:
                (Serian todas las a) 

                f(n) = n^k + n^k-1 + n^k-2 + ... + n^2 + n + 1 (Este 1 es el n^0 que estaba arriba pero no se puso)
            
            Tomar la mayor magnitud: f(n) = n^k

            La notacion O correspondiente es: O(f(n)) = O(n^k)

    Con esto vemos que no hace falta calcular toda la funcion de eficiencia sino que realmente solo importa la couta superior
    que es la mayor magnitud de la funcion, esto es lo que nos va a determinar que tan eficiente o no sera nuestro algoritmo


    Propiedades de la Notacion O:

    De la definicion compceptual vista anteriormente de la notacion O se deducen las siguientes 
    propiedades:
        1. Siendo "c" una constante, si "c" multiplica una notacion O: c*O(f(n)) = O(f(n))
            La "c" se convierte en uno
            Ejemplo:
                Si f(n) = 3n^4, entonces f(n) = 3*O(n^4) = O(n^4) -> Es como lo coeficientes que se convierten en uno
        2. Si tenemos O(f(n))+O(g(n)) [Dos funciones de eficiencia diferente] = O(f(n) + g(n))
            Ejemplo: si f(n) = 2e^n y g(n) = 2n^3, Aplicando la propiedad tenemos:
            O(f(n)) + O(g(n)) = O(f(n)+ g(n)) = O(2e^n + 2n^3) -> Como el siguiente paso de eso es que los coeficientes
            se transformaban en uno, entonces = O(e^n + n^3) y despues sacamos la couta superior y de ambos
            la mayor y nos queda al final es: O(e^n)
        3. Si tenemos una funcion "Maximo" y esta engloba: Maximo(O(f(n), O(g(n)))) -> Con este tipo de funcion sera
            igual a: O(Maximo(f(n), g(n)))
            Ejemplo:
                Maximo(O(log n), O(n)) = O(Maximo(log n, n)) = O(n) -> Tomando la couta superior seria n y no Log n
        4. O(f(n)) * O(g(n)) = O(f(n) * g(n)) -> Si estan separadas las funciones las junta
            Ejemplo:
                si f(n) = 2n^3 y g(n) = n, entonces:
                O(f(n)) * O(g(n)) = O(f(n) * g(n)) = O(2n^3 * n) = O(n^4) -> Cuando teniamos una suma siempre tomamos la couta superior
                    pero en este caso NO ES UNA SUMA, es una multiplicacion entonces se hace la operacion (2n^3 * n = 2n^4) y ya 
                    el coeficiente se convierte en uno por eso al final la mayor magnitud nos queda n^4
        5. O(loga n) = O(logb n) para a, b > 1  -> Ejemplo: si tenemos O(log2 n) = O(log3 n) porque
                Las funciones logaritmicas son de orden logaritmico, independientemente de la base del logaritmo
                entonces no importa la base que el logaritmo tenga en nuestras funciones al final solo nos interesa 
                si es una funcion logaritmica
        6. O(log n!) = O(n * logn) -> Es una equivalencia, si encontramos una podemos remplazarlo por el otro
        7. Para k > 1, de supongamos que tenemos: O(SUMATORIO desde i=1 hasta N para i^k) = O(n^k+1) -> Como vemos hay un sobre
                equivalente (Podemos remplazar uno por otro, siempre y cuando el K sea mayor a uno)
        8. O(SUMATORIA desde i=1 hasta N de log i) es igual a O(n * log n) -> Otra equivalencia
*/