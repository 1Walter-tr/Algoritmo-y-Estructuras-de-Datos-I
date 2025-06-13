/*. Escribir un programa que permita ingresar por teclado una frase (la frase termina con un punto) y cuente
e informe la cantidad de veces que aparece una vocal en la cadena (por ejemplo, cuántas veces aparece
la vocal “a”). La vocal se ingresa por teclado. Resuelva el ejercicio utilizando al menos una función*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarVocales(char frase[], char vocal);

int main(){
  char frase[200];
  char vocal;

  printf("Ingrese la frase: ");
  fgets(frase,200,stdin);

  printf("Ingrese la vocal que desea contar: ");
  scanf(" %c",&vocal);

  int cantVocales = contarVocales(frase,vocal);

  printf("La frase es: %s\n",frase);
  printf("La vocal %c aparece %d veces en la frase\n",vocal,cantVocales);

  return 0;
}

int contarVocales(char frase[], char vocal){
  int contador=0;

  for(int i = 0; frase[i] != '\0'; i++){
    if(frase[i] == vocal){
      contador++;
    }
  }

  return contador;
}