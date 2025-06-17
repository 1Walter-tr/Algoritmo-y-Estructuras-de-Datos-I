#include <stdio.h>
#include <string.h>
#define MAX_ALUMNOS 3 //Definimos la cantidad de alumnos
#define MAX_NOMBRE 50 //Definimos la cantidad de caracteres por nombre

void ingresoDatos(char comision[][MAX_NOMBRE], int cantidad, int numero);
void encontrarCoincidencias(char com1[][MAX_NOMBRE], char com2[][MAX_NOMBRE], int cantidad);

int main(){
  char comision1[MAX_ALUMNOS][MAX_NOMBRE];
  char comision2[MAX_ALUMNOS][MAX_NOMBRE];

  ingresoDatos(comision1,MAX_ALUMNOS,1); //Ingresamos los nombres para la comision 1
  ingresoDatos(comision2,MAX_ALUMNOS,2); //Ingresamos los nombres para la comision 2

  encontrarCoincidencias(comision1,comision2,MAX_ALUMNOS);

  return 0;
}

void ingresoDatos(char comision[][MAX_NOMBRE], int cantidad, int numero){
  printf("Ingrese los nombres de la comision %d\n",numero);

  //Utilizamos una sola funcion para cargar los datos por diferentes comisiones
  for(int i = 0; i < cantidad; i++){
    printf("Alumno %d, Nombre: ",i+1);
    scanf("%s",comision[i]);
  }
}

void encontrarCoincidencias(char com1[][MAX_NOMBRE], char com2[][MAX_NOMBRE], int cantidad){
  int coincidencias=0;
  //Utilizamos ahora doble for para comparar los nombres entre ambas comisiones
  for(int i = 0; i < cantidad; i++){
    for(int j = 0; j < cantidad; j++){
      if(strcmp(com1[i], com2[j])==0){
        printf("El nombre %s aparece en ambas comisiones\n",com1[i]);
        printf("Comision 1 posicion %d\n",i+1);
        printf("Comision 2 posicion %d\n",j+1);
        coincidencias++;
      }
    }
  }
  if(coincidencias==0){
    printf("No se encontraron coincidencias\n");
  }else if(coincidencias > 0){
    printf("La cantidad de coincidencias es de %d\n",coincidencias);
  }
}