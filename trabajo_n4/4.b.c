/*Escribir un programa que disponga de la declaración de un tipo de dato tCaracter que permita
renombrar al tipo de dato char. Declarar una variable del tipo tCaracter, asignarle un valor e imprimir
por pantalla su contenido.*/
#include <stdio.h>
#include <string.h>

typedef char tCaracter;

int main(){
  tCaracter letra = 'A';

  printf("El caracter asignado a la variable: %c\n",letra);

  return 0;
}