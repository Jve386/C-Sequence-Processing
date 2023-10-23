# C-Sequence-Processing
This repository contains a set of exercises aimed at practicing problem-solving in the context of algorithmic and C programming. Each exercise presents different scenarios outlined in their respective statements, applying concepts related to algorithmic thinking and coding in the C programming language

The app is in Spanish:


Tenemos una secuencia de cotizaciones durante un día de una moneda respecto al dólar remitidas por el banco central de un cierto país, y que tienen la siguiente estructura:

 <t0 c0 t1 c1 t2 c2 ... tn cn -1> donde

ti es un entero positivo que indica la hora en la que se informa de la cotización ci.
ci es un real positivo que indica la cotización respecto al dólar de esa moneda.
 

Los datos están ordenados cronológicamente en la secuencia, y normalmente se informa cada dos horas, pero la frecuencia en facilitar datos puede variar considerablemente si un día hay muchas oscilaciones en la cotización. La finalización de la secuencia la marca la presencia de un -1 como t, cosa que indica que se cierra la cotización hasta que se reabra al día siguiente.
 
En caso de que la secuencia pase el control al que se la someterá, el programa debería mostrar lo siguiente:
-La media de cotización de la moneda durante el día analizado.
-El número de cotizaciones que se han situado por debajo de la primera de estas, que de hecho es la última del día anterior. 
-Finalmente se indicará la tendencia para el día siguiente, la cual se determina por la comparación entre la última de las cotizaciones y tanto la primera, como la penúltima de estas. Por tanto, para que se considere que una cotización está al alza, la última de las cotizaciones ha de ser superior tanto a la primera de la secuencia, como a la penúltima. 

Por otro lado, una secuencia no supera el control si:
-O bien se producen dos cotizaciones consecutivas al alza y la última de estas respecto a la primera supone un incremento de un 10% en la cotización.
-O bien no se supera ese control en el momento en que se registren 3 lecturas seguidas a la baja. 

En el caso de que no se pase el control descrito en el párrafo anterior, el programa debería mostrar la razón por la que no se ha pasado ese control, ya sea una o ambas. 

Se pide que la impresión de una u otra salida se encapsule en una función.
Se pide además no usar un array para la realización del ejercicio, puesto que se desconoce el número de datos que se recogerán y por tanto no podríamos definir con exactitud la dimensión de este.

 

Así pues, el algoritmo, dada la siguiente secuencia:
<2 100 3 99 4 101 6 100 7 101 8 103  -1>

Debería escribir: 

![image](https://github.com/Jve386/C-Sequence-Processing/assets/121095013/c0c5dd8e-735b-4dbb-a3dc-e8ec50692d59)

Ello es debido a que la secuencia ha superado el control, y el programa muestra la media de las cotizaciones registradas así como cuántas de estas han estado por debajo de la primera, y finalmente determina que la cotización está al alza puesto que la última de las cotizaciones es superior tanto a la primera como a la penúltima.
 

En cambio, ante la secuencia:
<2 100 4 100 5 99 6 100 7 105 8 111 9 105 -1>

Debería escribir: 

![image](https://github.com/Jve386/C-Sequence-Processing/assets/121095013/90a0d224-ec2a-4aa3-b391-58c6a12e4e8c)

Puesto que no se ha superado el control dado que se han producido dos lecturas al alza entre la 6 y la 8, y la 8 representa un incremento superior a un 10% respecto a la 6.
 
Nota: La secuencia tendrá al menos un par de lecturas. Recuerda que la impresión de los resultados ha de ser printada mediante una función.



