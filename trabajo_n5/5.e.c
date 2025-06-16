/*La empresa JetSmart posee datos de la cantidad de pasajeros de sus vuelos realizados diariamente en el
mes de enero 2024 en su recorrido Corrientes-CABA. El gerente de la empresa desea saber el promedio
de pasajeros que volaron en este mes y la mayor cantidad de pasajeros en un vuelo y a que día
corresponde.
*Nota:
- Utilizar un vector para almacenar cantidad de pasajeros, y luego procesarlas.*/
#include <stdio.h>
#define MES 3

void ingresoDatos(int pasajeros[]);
void encontrarMayor(int pasajeros[]);
void promedioPasajeros(int pasajeros[]);

int main(){
  int pasajeros[MES];

  ingresoDatos(pasajeros);
  encontrarMayor(pasajeros);
  promedioPasajeros(pasajeros);

  return 0;
}

void ingresoDatos(int pasajeros[]){
  printf("Ingrese la cantidad de pasajeros que ingresaron\n");
  for(int i = 0; i < MES; i++){
    printf("Dia %d: ",i+1);
    scanf("%d",&pasajeros[i]);
  }
}

void encontrarMayor(int pasajeros[]){
  int mayor = pasajeros[0];
  int posicion;

  for(int i = 0; i < MES; i++){
    if(pasajeros[i] > mayor){
      mayor = pasajeros[i];
      posicion = i + 1;
    }
  }

  printf("Dia con mayor ingreso de pasajeros: %d\n",posicion);
}

void promedioPasajeros(int pasajeros[]){
  float promedio;
  int suma = 0;

  for(int i = 0; i < MES; i++){
    suma+=MES;
  }

  promedio = (float)suma/MES;

  printf("El promedio de pasajeros en el mes es de: %.2f\n",promedio);
}