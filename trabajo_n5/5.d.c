/*Generar un vector A con 10 elementos de tipo char. A continuación, a partir del vector A, generar un
vector B con los mismos elementos, pero en orden inverso. Luego imprimir simultáneamente ambos
vectores.
*Nota:
- Utilizar una función para generar el vector B
- Utilizar otra función para mostrar ambos vectores simultáneamente*/
#include <stdio.h>
#define TAMANIO 100

void ingresoVectorA(int vectorA[], int cantidad);
void invertirVector(int vectorA[], int vectorB[], int cantidad);
void mostrarVectores(int vectorA[], int vectorB[], int cantidad);

int main(){
  int vectorA[TAMANIO];
  int vectorB[TAMANIO];
  int cantidad;

  printf("Inserte la cantidad de valores que desea ingresar: ");
  scanf("%d",&cantidad);

  ingresoVectorA(vectorA,cantidad);
  invertirVector(vectorA,vectorB,cantidad);
  mostrarVectores(vectorA,vectorB,cantidad);

  return 0;
}

void ingresoVectorA(int vectorA[], int cantidad){ //Ingresamos los valores del vector A
  printf("Ingrese los valores del vector\n");
  for(int i = 0; i < cantidad; i++){
    printf("Elemento %d: ",i+1);
    scanf("%d",&vectorA[i]);
  }
}

void invertirVector(int vectorA[], int vectorB[], int cantidad){
  for(int i = 0; i < cantidad; i++){
    vectorB[i] = vectorA[cantidad - 1 - i]; //Vamos tomando los valores desde la ultima fila
    //Para asi invertirlos uno a uno
  }
}

void mostrarVectores(int vectorA[], int vectorB[], int cantidad){ //Mostramos ambos vectores
  printf("Valores del Vector A\n");
  for(int i = 0; i < cantidad; i++){
    printf("%d\t",vectorA[i]);
  }
  printf("\n\n");

  printf("Valores del Vector B\n");
  for(int i = 0; i < cantidad; i++){
    printf("%d\t",vectorB[i]);
  }
}