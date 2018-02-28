
Pasos de GCC (wrapper)
 **** 1 ****
1. Pre-procesador
2. Compilación I: de C a assembler
3. Compilación II: de assembler a lenguaje de máquina
4. Linkeo: de lenguaje de máquina a ejecutable

1. El preprocesador permite evitar no tener que definir y declarar todas las funcion y los macros que usamos que ya estan definidas explicitamente el la librerias llamadas por el include, etc.
El preprocesador se encargar de las directivas # (includes macros) (es obligatorio en C y no en fortran)
2.  Compilación I se divide en 3 etapas. Globalmente se genera codigo en assembler a partir de codigo en C por gcc o fortran Gnu
	2.1. Front end: Genera una representacion intermedia a partir del analisis sintactico, semantico y lexico.
	2.2 Middle end: Optimiza la representacion intermedia
	2.3 back end: Genera codigo assembler y optimaza por hardware (depende de la arquitectura del procesador)
3. Compilación II Genera codigo en leguaje de maquina a partir de codigo en assemble (la traduccion es directa a rtaves de un diccionario).
	Al final del 3er paso tenenos un obj. en binario que no se puede ejecuatar aun.
4. LINKEO Introduce modificaciones final para poder ejecutar el codigo.
	El linkeo puede ser de dos tipos:
		LINKEO estatico: Pega el codigo binario de las funciones  "faltante" del objeto en nuestro ejecutable, Tambien resuelve los saltos en las posiciones de memoria.
		LINKEO dinamco: El codigo de las funciones utilizadas en nuestro ejecutable permanece en la biblioteca sin ser incorporado este(el ejecutable). El ejecutable carga en memoria la biblioteca y ejecuta el codigo utilizado cuando se corre el programa.

 **** 2 ****
El preprocesador declara las funciones incluidas y los macros. mediante "#"
En este caso. 
			

 **** 3 ****
En la funcion :main de archivo .asm la funcion add_ans aparece debaja de la funcion :main como :add_ans

 **** 4 ****
000000003d T add_numbers
0000000000 T main
           U printf 

El archivo esta dividido en 3 columnas.
1. Posicion de memoria
2. descriptor
	2.0 Las entradas cuyos descriptores estan en minuscula solo pueden ser llamados por funciones internas (locales).
	U: undefine
	T: texto, una funcion.
	Mayuscula: se puede ver desde afuera.
En esta altura el objeto esta en binario pero aun no se pude ejecutar.

3. Entrada. es el nombre de la funcion o variable.

 **** 5 ****
decoradores -> 

soname --> indica que la funcion debe ser cargada desde un libreria local.


