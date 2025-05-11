/* Escribir un programa que: 
- Declare 3 variables char, int y double.  
- Solicitar al usuario el ingreso del valor de las mismas en tiempo de ejecución usando scanf(). 
- Imprimir por pantalla los valores de las 3 variables junto a alguna leyenda descriptiva del 
contenido.*/
#include <stdio.h>

int main(){
  char caracter;
  int nroEntero;
  double nroDouble;

  printf("Ingrese un caracer: ");
  scanf(" %c",&caracter);
  printf("Ingrese un numero entero: ");
  scanf("%d",&nroEntero);
  printf("Ingrese un numero decimal: ");
  scanf("%lf",&nroDouble);

  printf("Su caracter ingresado es: %c\n",caracter);
  printf("Su numero entero ingresado es: %d\n",nroEntero);
  printf("Su numero decimal ingresado es: %.2lf\n",nroDouble);

  return 0;
}