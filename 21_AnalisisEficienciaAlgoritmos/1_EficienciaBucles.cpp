/*
                    Eficiciencia de Bucles
    
    En general el formato de la eficiencia se puede expresar mediante una funcion:

                    f(n) eficiencia -> Cuando veamos esto en el Texto, esto sera la eficiencia
    
    Es decir la eficiencia del algoritmo se examina como una funcion del numero de elementos 
    a ser procesado

    Bucles Lineales:
        Son bulces que se repiten bastantes veces pero siempre va a haber un iterador dentro
        que suma o resta las mismas cantidades

        En los bucles se repiten las sentencias del cuerpo del bucle un numero determinado de veces
        que determina la eficiencia del mismo. Normalmente en los algoritmos los bucles son el termino 
        dominante en cuanto a la eficiencia

        Ejemplo 1: ¿Cuantes veces se repite el cuerpo del bucle en el siguiente codigo?

                i = 1;
                while(i <= n){
                    // Codigo aplicacion ...
                    i = i + 1;
                }
            
            Este es un bucle lineal porque empeiza en 1 y aumenta de 1 en 1, ademas
            se repite N veses.

            Si "n" es un entero, por ejemplo de valor 100, la respuesta es 100 veces. El numero de
            iteraciones es directamente proporcional al factor del bucle "n". Como la eficiencia es
            directamente proporcional al numero de iteraciones la funcion que expresa la eficiencia 
            es:     f(n) = n -> La funcion de la eficiencia es n porque el bucle se repite "n" veces
            La eficiencia de todo bucle lineal es "n"

        Ejemplo 2; ¿Cuantas veces se repite el cuerpo del bucle en el siguiente codigo?

                i = 1;
                while(i <= n){
                    //Codigo de la aplicacion
                    i = i + 2;
                }
            
            La respuesta no siempre es tan evidente como en el ejemplo anterior. Ahora el contador i
            avanza de 2 en 2, por tanto la respuesta es n/2. En este caso el factor de eficiencia es:
                f(n) = n/2 -> Este es el factor de Eficiencia
        
        Estos son los bucles lineales, donde aumentamos, sumamos o restamos siempre la misma cantidad N veses
        y en los bucles lineales el factor de eficiencia casi siempre va a estar marcada por un "n" dependiendo 
        la cantiadad que afecte al iterador

    Bucles Algoritmicos

        Consideremos un bucle en el que su variable de control se multiplique o divida dentro de dicho
        bucle. ¿Cuantas veces se repetira el cuerpo del bucle en los siguientes segmentos de programa?
        A simple vista hay que darnos cuenta que estos bucles son mucho mas rapido que uno lineal
        porque dara menos vueltas

            i = 1;
            while(i < 1000){
                // Codigo ...
                i = i * 2;
            }

        Este bucle de arriba al final se reptiria 10 veses, esto lo podemos saber sacnado una tabla con el valor
        del iterador aumentandolo conforme sea
            
            i = 1000;
            while(i >= 1){
                // Codigo ...
                i = i / 2;
            }
        
        Este bucle tambien se repite 10 veces.

        En ambos bucles se ejecutan 10 iteraciones. La razon es que en cada iteracion el valor "i" se dobla en el bucle
        de multiplicar y se divide por la mitad en el bucle de divicion. Por consiguiente el numero de iteraciones
        es una funcion de multiplicar o divisor, en este caso 2.

        Si queremos hayar una formula general para saber el numero de iteraciones exactas que vamos a tener
        Asi es como tenemos los datos en este caso para los dos bucles:
            
            Bucle de multiplicar:   2^Iteraciones  < 1000 
            Bucle  de Dividir:      1000/2^Iteraciones  >= 1
        
        Un bucle lineal su eficiencia se basa principalmente en N (El numero de vueltas) que podria tener algunas
        variaciones y en los bucles algoritmicos ya multiplicamos o dividmos y su tiempo de ejecucion es mas rapida

        Generalizando el analisis se puede decir que las iteraciones de los bucles especificados se determinan por
        la siguiente formula:
                                f(n) = log2(n)
    
    Bucles Anidados (Un bucle dentro de otro bucle):

    El total de iteraciones de bucles anidados se determina multiplicando el numero de iteraciones del bucle interno
    por el numero de iteraciones del bucle externo

        NumeroItercionesTotales = IteracionBucleExterno * IteracionBucleInterno
    
    Existen tres tipos de bucles anidados: LINEAL LOGARITMICO, CUADRATICOS DEPENDIENTES y CUADRATICOS
    que con analisis similares a los anteriores nos conducen a las siguientes ecuaciones de eficiencia:

        * Lineal Logaritmica: f(n) = [n log2 n] -> Esto se ven en bucles recursivos (Los que tienen esta formula son muy bueno
                                                    como el ordenamiento QuickShort), la "n" extras en comparacion d ela formula de arriba
                                                    siginifica la cantidad de veses que se va a repetir
        * Dependencia Cuadratica: f(n) = n (n+1) / 2 -> Este seria donde el primer bucle es lineal y dentro otro bucle lineal pero aumentando 
                                                        de dos en dos o disminuyendo de dos en dos
        * Cuadratica:  f(n) = n^2 -> Esta funcion de eficiencia es muy lenta, esta se ve en el ordenamiento burbuja, ordenar por seleccion

*/