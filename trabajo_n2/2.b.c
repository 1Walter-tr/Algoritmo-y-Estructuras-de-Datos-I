/*Escribir una funcion que imprima el mismo mensaje*/
#include <stdio.h>

void imprimirMensaje();//Prototipo de funcion

int main(){
  imprimirMensaje();//Se llama a la funcion

  return 0;
}

void imprimirMensaje(){//Se declara el cuerpo de la funcion
  printf("Hola mundo...\n");
}