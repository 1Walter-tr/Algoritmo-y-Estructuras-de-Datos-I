/*. Escribir un programa que permita ingresar por teclado una frase y detecte y cuente las letras en
mayúsculas. Recuerde que en ASCII las mayúsculas toman valores decimales comprendidos entre 65 y
90.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarMayusculas(char frase[]);

int main(){
  char frase[200];
  printf("Ingrese la frase: ");
  fgets(frase,200,stdin);

  int cantMayusculas = contarMayusculas(frase);

  printf("La frase es: %s\n",frase);
  printf("La cantidad de mayusculas que hay en la frase es de: %d\n",cantMayusculas);

  return 0;
}

int contarMayusculas(char frase[]){
  int contador=0;

  for(int i = 0; frase[i] != '\0'; i++){
    if(frase[i] >= 65 && frase[i] <= 90){
      contador++;
    }
  }

  return contador;
}