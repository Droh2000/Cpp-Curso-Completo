/*
            Analisis y Eficiencia de Algoritmos

    Algoritmos y Programas (Conceptos orientados a la eficiencia)

    La representacion de la informacion es fundamental en ciencias de la computacion y
    en informatica, el proposito principal de la mayoria de los programas de computadoras
    es almacenar y recuperar informacion, ademas de realizar calculos

    Para manipular la informacion de la mejor manera posible exiten diferentes maneras como 
    las estructuras de datos, trantando de hace que nuestros programas sean lo mas eficientemente
    posibles

    La eficiencia en la programacion es tomar todos los recursos que tenemos disponibles
    y utilizarlos de la mejor manera posible

    De modo practico los requisitos de almacenamiento y tiempo de ejecucion exigen que tales
    programas deban organizar su informacion de un modo que soporte procesamiento eficiente.
    Por estas razones el estudio de estructuras de datos y los algoritmos que los manipulan
    constituyen el nucleo central de la informacion y de la computacion
    (Los requisitos de almacenamiento y tiempo de ejecucion sean lo menor prosibles)

    Algoritmo 
    
    Es un metodo, proceso conjunto de instrucciones utilizadas para resolver un
    problema especifico, un problema que puede ser resuelto mediante muchos algoritmos

    La ventaja de conocer varias soluciones a un problema es que las diferentes soluciones
    pueden ser mas eficientes para vriaciones especificas del problema o para diferentes
    entradas del mismo problema

    Ejemplo:
        - Un algoritmo de ordenacion puede ser mejor para ordenar conjuntos pequeños de numeros 
        - Otro algoritmo puede ser el mejor para ordenar conjuntos grandes de numeros 
        - Un tercero puede ser el mejor para ordenar cadenas de caracteres de longitud variables
        (Por eso es mejor conocer varias soluciones a un problema, donde segun el contexo la eficiencia puede variar)

    Propiedades de los Algoritmos
        - Especificacion precisa de la entrada (Nesecitamos saber el numero exacto y el tipo de entrada exacta de informacion)
        - Especificacion precisa de cada instruccion
        - Exactitud y Correccion (Todo algoritmo debe ser exacto y correcto)
        - Etapas bien definidas y concretas (Un algoritmo concreto es aquel que entendemos y el lenguaje de codificacion tambien lo entiende)
            (Etapas bien definidas quiere decir que cada etapa debe ser finita en tiempo de ejecucion)
        - Numero finito de pasos
        - Algoritmo debe Terminar (Evitar bucles infinitos)
        - Descripcion del resultado o efecto (Al empezar de crear el algoritmo ya debemos de saber exactamente el tipo de resultado y 
            la cantidad de resultados que el algoritmo nos va a generar y el efecto que cuasa el algoritmo cuando termine)

        Ejemplo:
            ¿Es un algoritmo la instruccion siguiente?
                - Escribir una lista de todos los enteros positivos (NO)
                        Es imposible ejecutar la instruccion anterior dado que hay infinitos enteros
                        positivos y por tanto cualquier conjunto de instrucciones que implique esta
                         instruccion no es un algoritmo
    Programas

    Se considera que un programa de computadora es una reprsentacion concreta de un algoritmo en un 
    lenguaje de programacion que nos puede solucionar una o muchas tareas

    Naturalmente hay muchos programas que son ejemplos del mismo algoritmo, dado que cualquier lenguaje
    de programacion moderno se puede uitilizar para implementar cualquier algoritmo (Aunque algunos 
    lenguajes facilitaran su tarea al programador mejor que otros). Por definicion un algoritmo debe
    proporcionar suficiente detalle para que se puedea convertir en un programa cuando se necesite.
    (El algoritmo debe de ser lo mas entendible posible para poder plasmarse en cualquier lenguaje de programacion)

    El diseño de un algoritmo para ser implementado por un programa de computadora debe tener 
    dos caracteristicas principales:
        1. Que sea facil de entender, codificar (Resuelva el problema lo mas sencillo posible) y depurar
        2. Que sonsiga la mayor eficiencia a los recursos de la computadora 

    Idealmente el programa resultante deberia ser el mase eficiente posible. ¿Como medir la eficiencia de 
    un algoritmo o programa? El metodo correspondiente se denomina ANALISIS DE ALGORITMOS y permite medir
    la dificultad inherente a un problema. En este capitulo se desarrollara el concepto y la forma de medir
    la medida de la eficiencia

    Eficaz es solo resolver el problema sin importar como, solo importa llegar a la solucion, tal vez ese algoritmo
    utilizado no es el mas eficiente, lo mejor es resolver los programas eficientes y eficaz

    Eficiencia y Exactitud (Nos referimos a la Eficasia)

    De las caracteristicas antes analizadas que deben complir los algoritmos destacan dos por su importancia en el
    desarrollo de algoritmos y en la construccion de programas: 
    Eficiencia (Tomar los recurssos y hacer el programa de la mejor manera) y Exactitud (Complir con lo que se pide y llegar a la solucion)

    Dos caracteristicas importantes vistas:
        1. Diseñar un algoritmo que sea facil de entender, codificar y depurar
        2. Diseñar un algoritmo que haga un uso eficiente de los recursos de la computaodra

    Idelamente, el programa resultante debe cumplir ambos objetivo, en estos casos se suele decir que tal programa es
    "elegante"

    Eficiencia de un Algoritmo

    Raramente exite un unico algoritmo para resolver un problema determinado. Cuando se comparan dos algoritmos diferentes
    que resuleven el mismo problema, normalmente se encontrara que un algoritmo es un orden de magnitud mas eficiente que
    el otro. En este sentido lo importante es que el programador sea capaz de reconocer y elegir el algoritmo mas eficiente

    ¿Que es Eficiencia?

    La Eficiencia de un algoritmo es la propiedad mediante la cual un algoritmo debe alcanzar la solucion al problema en el
    tiempo mas corto posible y/o utilizando la cantidad mas pequeña posible de recursos fisicos.

    ¿Como medir la eficiencia de un algoritmo o programa informatico?

    Uno de los metodos mas sobresalientes es el analisis de algoritmos. El analisis de algoritmos permite medir 
    la dificultad inherente de un problema (Inherente es que nos pemite medir la dificultad completa del programa)

    Como sabemos un problema tiene como solucion mucho algoritmos entonces debemos descubrir el mejor algoritmo para solucionar el problema

    El analisis de algortimos es de vital importancia tanto antes cuando teniamos computadoras con memoria muy limitada, como ahora que tenemos 
    computadoras que nos pueden procesar muchisimos calculos en segundos, el avanze significa que evolcion tambien el software para ejecutarse
    de forma eficiente en las computadoras actuales, (El software debe de mejorar a la par con el hardware)
*/