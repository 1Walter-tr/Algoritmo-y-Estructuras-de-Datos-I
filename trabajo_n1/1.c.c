/*Escribir un programa que inicialice las variables con los siguientes valores (las variables numéricas tienen 
el valor máximo positivo del rango de representación): 
- float     unFloat   = 3.0E+38; 
- double unDouble = 1.7E+308; 
- int        unEntero  = 2147483647; 
- short    unShort    = 32767; 
- char     unCaracter = 'Z'; 
- long     unLong = 2147483647; 
Utilizando el operador sizeof() y la función printf(), imprimir por cada variable su tamaño, su valor, e indicar, con una leyenda, su tipo de dato.*/
#include <stdio.h>

#include <stdio.h>

int main(){
  float unFloat = 3.0E+38;
  double unDoble = 1.7E+308;
  int unEntero = 2147483647;
  char unCaracter = 'Z';
  short unShort = 32767;
  long unLong = 2147483647;

  printf("El tamaño de la variable de tipo: \n");
  printf("float         es %zu bytes y su valor es %e\n", sizeof(unFloat), unFloat);
  printf("double        es %zu bytes y su valor es %E\n", sizeof(unDoble), unDoble);
  printf("int           es %zu bytes y su valor es %d\n", sizeof(unEntero), unEntero);
  printf("short         es %zu bytes y su valor es %d\n", sizeof(unShort), unShort);
  printf("char          es %zu bytes y su valor es %c\n", sizeof(unCaracter), unCaracter);
  printf("long          es %zu bytes y su valor es %ld\n", sizeof(unLong), unLong);

  return 0;
}
