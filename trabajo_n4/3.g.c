#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool esPalindromo(char palabra[]);

int main(){
  char palabra[100];

  printf("Ingrese la palabra: ");
  scanf("%s",palabra);

  if(esPalindromo(palabra)){//Si es true nos da el mensaje
    printf("La palabra es palindromo\n");
  }else{//Si no es true nos da el otro mensaje
    printf("La palabra no es palindromo\n");
  }

  return 0;
}

bool esPalindromo(char palabra[]){
  int longitud = strlen(palabra);//Guardamos la cantidad de caracteres que hay en la variable

  for (int i = 0; i < longitud / 2; i++) { 
  //Iniciamos desde 0 hasta la mitad de la palabra para asi comparar de dos en dos

    if (palabra[i] != palabra[longitud - i - 1]) { 
    //Iniciamos la comparacion desde el principio que seria palabra[i] (0)
    //Hasta la ultima letra desde el final que seria palabra[longitud - i - 1] (5-0-1)
        return false; //Detenemos el programa de inmediato si hay una diferencia
    }
}

//Si el programa llega hasta aca sin haber ejecutado return false, significa que todas las comparaciones fueron iguales.
//En ese caso, podemos concluir que la palabra SI es un palíndromo.

  return true;
}