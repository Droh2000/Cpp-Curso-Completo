/*

    Ejercicio 1: Determinar la complejidad de la Funcion:
        La complejidad de toda la funcion depende de sus condicionales

            double mayor(double x, double y){
                if(x > y){       -> O(1) El primer condicional tendra la complejidad de lo que tenga dentro
                    return x;       El RETURN es solo de orden 1
                }else{           -> O(1) Para el ELSE es el misma caso, la complejidad dependera de lo que tenga adentro
                    return y;
                }
            }

        La complejidad de la funcion mayor() es: O(1) + O(1) = O(1)
        Nos O(1) porque tomamos la de la couta superior
    
    Ejercicio 2:
        La complejidad de esta funcion principalmente va a estar por el bucle

            void mostrarArreglo(double x[], int n){
                int j;
                for(j=0; j<n; j++){    -> O(n) porque este bucle va a dar N vueltas y empieza desde 0
                    cout<<x[j]<<endl;  -> O(1) La complejidad dentro del bucle, aqui solo se imprimen los elementos
                }
            }

        La complejidad general de un bucle es la multiplicacion de las vueltas que da el bucle
        mas la complejidad que haya dentro del bucle, por lo tanto:
        Es: O(n) * O(1) = O(n) 

    Ejercicio 3:

            double suma(double d[], int n){
                int k=0, s=0;       -> O(1) Al crear variables no tienen complejidad pero al asignar valores
                                        si la tienen y asignar valores es una complejidad de orden 1
                                        Aqui estamos creando y asignando valores al mismo tiempo 
                while(k < n){       -> ¿Cuantas vueltas va a dar el Bucle? No lo sabemos porque solo depende de
                                        la condicion "k<n", mientras no sepamos con cuanto aumenta "k" no podemos
                                        decir que de N vueltas porque puede dar menos, asi que continuemos analizando
                                        internamente en el bucle
                    s += d[k];      -> O(1) Tenemos una suma iterativa de todos o algunos elementos del arreglo, esto es
                                        una asignacion
                    if(k==0){       -> En este bucle de condicion tenemos como se manipula el iterador y esto es lo que nos
                                        va a determinar cuantas vueltas va a dar el bucle.
                                        Anteriormente habiamos visto en Eficiencia de Bucles que en los tipos de bucles algoritmicos
                                        el iterador aumentaba multiplicando o dividiendo, puees en este caso es practicamente lo mismo
                        k = 2;      -> El iterador K cuando empieza vale hasta 2 (La primera vez que entre vale 0 una vez)
                    }else{
                        k *= 2;     -> Las proximas veses se van a estar multiplicando por 2 el valor de K, entonces esto no va a dar N vueltas
                                        porque no es un bucle lineal, esto es un bucle algoritmico y la complejidad de este tipo de bucles es
                                        O(log 2 n) esto es mas rapido que un bucle lineal
                    }               -> Los condicionales IF y ELSE solo tienen asignaciones, por tanto los dos bloques son de orden
                                        O(1) y O(1) cada uno
                }
                return s;           -> O(1) este es solo un 1 que no afecta en al operacion final
            }   
        La complejidad de la funcion suma() es (La suma de todas las complejidades encontradas): 
            O(1) + O(log2 n) * O(1), como es un bucle se multiplica toda la complejidad encontrada
            = O(log2 n) -> Esto obtendriamos sacando la couta superior
            Recordemos las propiedades de la Notacion O que cuando tenemos complejidad logaritmica
            no importa la base del logaritmo, entonces la complejidad general sera:
            O(Log n)

    Ejercicio 4:

            void transpuesta(float d[][M], int n){
                int i, j;
                for(i=n-2, i>0; i--){          * Cuando tengamos dos bucles anidados lo mejor es analizar primero el bucle mas interno
                                                  Despues de eso, analizemos cuantas vueltas dara el bucle que al ver el -- quiere decir que es
                                                  un bucle lineal, disminuyendo de uno en uno, lo que significa que:
                                                  O(n) -> N vueltas
                    for(j=i+1; j<n; j++){      * Antes de analizar el bucle interno lo primero es analizar la complejidad que contiene adentro
                                                 Despues ahora si vemos cuantas vueltas da el bucle, con el simple hecho de ver un ++ quiere decir
                                                 que es un bucle lineal, esto queire decir que va a dar:
                                                 O(n) -> dara n vueltas porque aumenta de uno en uno
                        float t;
                        t = d[i][j];           -> O(1) estas son asignaciones
                        d[i][j] = d[j][i];     -> O(1) estas son asignaciones
                        d[j][i] = t;           -> O(1) estas son asignaciones
                    }
                }
            }
        Recordemos que si tenemos bucles anidados la complejidad de toda la funcion que contiene sera igual a la multiplicacion de todo
        por lo tanto: O(n) * O(n) * O(1) (Solo se pone un O(1) porque no afecta si multiplicamos mas)
        Dandonos: O(n^2) -> Esta es una complejidad cuadratica como habiamos visto

    Asi es como nos damos cuenta que tan eficientes son o no nuestros algoritmos, mas adelante estos analizisis los veremos utilizando 
    mayormente en los algoritmos recursivos o donde usemos bastantes bucles anidados
    Esto es solo una forma de hacer los programas lo mas eficientes pocibles
*/