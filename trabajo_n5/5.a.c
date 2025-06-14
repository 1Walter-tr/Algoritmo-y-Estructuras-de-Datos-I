/*Hacer una matriz donde se tenga que ingresar los valores por filas y columnas y luego mostrarlas*/
#include <stdio.h>
#define FILAS 3 //Declaramos la cantidad de filas
#define COLUMNAS 2 //Declaramos la cantidad de columnas

void ingresoDatos(int matriz[FILAS][COLUMNAS]); //Funcion para el ingreso de datos con matriz en parametros
void salidaDatos(int matriz[FILAS][COLUMNAS]); //Funcion para mostrar la matriz tambien por parametros

int main(){
  int matriz[FILAS][COLUMNAS]; //Declaramos nuestra matriz ya que tewnemos parametros

  ingresoDatos(matriz);
  salidaDatos(matriz); //Hacemos nuestro paso de parametros

  return 0;
}

void ingresoDatos(int matriz[FILAS][COLUMNAS]){
  for(int i = 0; i < FILAS; i++){ //Iteramos hasta llegar a la ultima fila
    for(int j = 0; j < COLUMNAS; j++){ //Iteramos hasta llegar a la ultima columna
      printf("Ingrese el valor de la columna %d en la fila %d: ",i+1,j+1); //Hacemos +1 ya que empieza desde cero
      scanf("%d",&matriz[i][j]);
    }
  }
}

void salidaDatos(int matriz[FILAS][COLUMNAS]){
  for(int i = 0; i < FILAS; i++){ //Hacemos lo mismo solo que esta vez para mostrar los datos
    printf("Columna: %d\n",i+1);
    for(int j = 0; j < COLUMNAS; j++){
      printf("%d\t",matriz[i][j]);
    }
    printf("\n\n");
  }

}