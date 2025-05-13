/*Mostrar los números enteros desde 1 hasta N, sumarlos e informar la suma.*/
#include <stdio.h>
#define N 10 //Definimos una constante para que contendra el valor de 10

int main(){
  int suma;

  for(int i = 0; i < N; i++){
    suma+=i;
    printf("%d\n",i);
  }
  printf("La suma total de los numeros es: %d\n",suma);

  return 0;
}