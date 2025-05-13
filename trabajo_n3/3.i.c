/*Calcular e informar el promedio de los números impares menores o iguales a 20*/
#include <stdio.h>
#define N 20;//Declaramos una constante

int main(){
  int sumaImpares = 0;//Tendra la suma de los impares
  int cantidadImpares = 0;//Tendra la cantidad de numeros impares

  for(int i = 1; i <= 20; i+=2){//En vez de incrementar de uno en uno incrementara de dos en dos
    sumaImpares = sumaImpares + i;//Hacemos que nos sume todos los valores de i (que serian todos impares)
    cantidadImpares++;//Hacemos que en cada iteracion nos cuente la cantidad de impares que hay
  }

  float promedio = (float)sumaImpares / cantidadImpares;//Calculamos el promedio de los impares

  printf("La suma de los impares menores o iguales a 20 es: %d\n",sumaImpares);
  printf("El promedioi de los impares es: %.2f\n",promedio);
  printf("La cantidad de impares es: %d\n",cantidadImpares);

  return 0;
}