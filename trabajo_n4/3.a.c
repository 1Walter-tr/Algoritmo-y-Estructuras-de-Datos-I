/*Escribir un programa que disponga de la declaración de un tipo de dato tNumeroReal que permita 
renombrar al tipo de dato float. Declarar una variable del tipo tNumeroReal, asignarle un valor e 
imprimir por pantalla su contenido.*/
#include <stdio.h>
#include <string.h>//Biblioteca para acceder a funciones de tipo cadena

typedef int tNumeroReal;

int main(){
  tNumeroReal numero = 10;

  printf("El valor asignado a la variable es: %d\n",numero);

  return 0;
}