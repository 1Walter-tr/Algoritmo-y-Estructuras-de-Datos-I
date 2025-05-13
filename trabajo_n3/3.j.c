/*/*Generar y mostrar la tabla de multiplicar de un número introducido por el teclado.*/
#include <stdio.h>
#define N 10 // Definimos una constante

int main()
{
  int numero;

  printf("Ingrese un numero entero: ");
  scanf("%d", &numero);

  for (int i = 0; i <= N; i++){// El conteo empieza desde 0 hasta N
    printf("%d x %d = %d\n", numero, i, numero * i); // La multiplicacion seria el numero ingresado por la iteracion de uno en uno
  }

  return 0;
}