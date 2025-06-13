//En este caso sigue siendo un uso basico solo que usamos una funcion en vez de una variable
#include <stdio.h>
#include <stdbool.h>

bool esPar(int numero);

int main(){
  int numero;

  printf("Ingrese un numero positivo: ");
  scanf("%d",&numero);

  if(esPar(numero) == true){
    printf("El numero ingresado es par\n");
  }else{
    printf("El numero ingresado es impar\n");
  }

  return 0;
}

bool esPar(int numero){ 
    // En una función `bool`, la condición especificada en el `return` se toma como `true` si se cumple.
    // Si la condición NO se cumple, la función devolverá `false` automáticamente.
    return numero % 2 == 0; 
}