salida.

00000000 t add_abs
00000023 T main
         U printf
00000000 r val1
00000004 R val2
00000000 d val3
00000004 D val4

El archivo tiene 3 columnas.
1. Posicion de memoria
2. descriptor
	Minuscula: Las entradas cuyos descriptores estan en minuscula solo pueden ser llamados por funciones internas (locales).
	Mayuscula: se puede ver/acceder desde afuera.
	U: undefine. Funciones que no estan definidas 
	T: texto, una funcion.
	R: son espacios de memoria de solo lectura --> los valores definidos con const
	D: son espacios de memoria variable --> pueden ser modificadas.

En esta altura el objeto esta en binario pero aun no se pude ejecutar.

3. Entrada. es el nombre de la funcion o variable.
