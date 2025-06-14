/*Crear un programa en lenguaje C que utilice matrices bidimensionales para registrar la cantidad de personas que ingresaron en diferentes sucursales a lo largo de varios meses.
El programa debe:
Solicitar al usuario que ingrese la cantidad de personas que asistieron a cada sucursal durante cada mes.
Mostrar los datos ingresados en forma tabular, con las filas representando los meses y las columnas representando las sucursales.
Calcular y mostrar el total de personas que asistieron en cada sucursal sumando los valores mes a mes.*/
#include <stdio.h>
#define MESES 3
#define SUCURSALES 2

void ingresoDatos(int matriz[MESES][SUCURSALES]);
void salidaDatos(int matriz[MESES][SUCURSALES]);
void sumaSucursales(int matriz[MESES][SUCURSALES]);

int main(){
  int matriz[MESES][SUCURSALES];

  ingresoDatos(matriz);
  salidaDatos(matriz);
  sumaSucursales(matriz);

  return 0;
}

void ingresoDatos(int matriz[MESES][SUCURSALES]){
  printf("Ingrese la cantidad de personas que ingresaron\n");
  for(int i = 0; i < MESES; i++){
    for(int j = 0; j < SUCURSALES; j++){
      printf("Sucursal %d, Mes %d: ",i+1,j+1);
      scanf("%d",&matriz[i][j]);
    }
  }
}

void salidaDatos(int matriz[MESES][SUCURSALES]){
  for(int i = 0; i < MESES; i++){
    printf("Columna %d: ",i+1);
    for(int j = 0; j < SUCURSALES; j++){
      printf("%d\t",matriz[i][j]);
    }
    printf("\n\n");
  }

  sumaSucursales(matriz);
}

void sumaSucursales(int matriz[MESES][SUCURSALES]){
  //Como queremos sumar las filas de las columnas es decir el total de cada columna
  for(int j = 0; j < SUCURSALES; j++){ //Recorremos cada columna
    int suma = 0;
    for(int i = 0; i < MESES; i++){ //En cada columna, recorremos las filas de arriba hacia abajo
      suma+=matriz[i][j]; //Vamos sumando estos valores de la misma manera que la recorremos es decir de arriba abajo
      printf("Columna %d: Cantidad de personas: %d\n",j+1,suma);
    }
  }
}