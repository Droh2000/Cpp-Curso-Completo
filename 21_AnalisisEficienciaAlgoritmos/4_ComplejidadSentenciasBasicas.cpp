/*
                    Complejidad de las sentencias basicas de C++

    Con sentencias basicas nos referimos a bucles, condicionales, funciones y NO deben haber recursivdad

    Al analizar la complejidad de un metodo no recursivo, se han de aplicar las porpiedades de la notacion O
    y las siguientes consideraciones relativas al orden que tienen las sentencias, fundamentalmente a las
    estructuras de control

        * Las sentencias de asignacion, son de orden constante O(1) -> Orden de Magnitud 1
            Con estas sentencias nos referimos a asignar un valor a una variable
        * La complejidad de una sentencia de seleccion es el maximo de las complejidades 
            del bloque IF y de bloque ELSE (Con esto de seleccion nos refirimos a un condicional
            y esto sera igual a la complejidad maxima que tenga dentro del bloque IF mas el bloque ELSE)
        * La complejidad de una sentencia de seleccion multiple (switch) es el maximo de
            las complejidades de cada uno de los bloques CASE (La complejidad sera la suma de la complejidad
            que hay en sus bloques CASE)
        * Para calcular la complejidad de un bucle, (condicional o automatico), se ha de estimar
            el numero maximo de iteraciones para el peor caso; entonces la complejidad del bucle
            es el producto del numero de iteraciones por la complejidad de las sentencias que forman
            el cuerpo del bucle. Entonces si tenemos un bucle y dentro de este, hay bastantes operaciones
            en las cuales hay condicionales dentro entonces la complejidad maxima de ese bucle va a ser igual 
            a la multiplicacion del numero de iteraciones que en el peor caso daria el bucle por la complejidad
            de las sentencias que esten dentro de ese bucle
        * La complejidad de un bloque se calcula como la suma de las complejidades de cada sentencia del bloque
            Por bloque nos referimos a una funcion, metodo y la complejidad maxima es la suma de los bloques 
            pequeños
    
            Todos estos calculos nos darian la funcion de eficiencia y para calcular la Notacion O solo nos haria falta
            ver la couta superior de toda esa funcion de eficiencia

        * La complejidad de la llamada a una funcion es de orden 1, complejidad constante. Es necesario 
            considerar la complejidad de la funcion de llamada

*/