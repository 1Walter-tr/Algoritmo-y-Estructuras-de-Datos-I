/*Hacer una matriz de un solo arreglo donde se ingrtesen la cantidad de alumnos que rindieron el parcial para luego ingresar sus notass y contar la cantidad de personas que aprobaron con nota mayor igual a seis*/
#include <stdio.h>
#define MAX_ALUMNOS 100 //Declaramos la cantidad maxima de alumnos, solo por seguridad ingresamos un numero alto

void ingresoDatos(int notas[], int cantidad); //Declaramos con parametros las notas para los alumnos con arreglo
int contarAprobados(int notas[], int cantidad); //Declaramos con parametros las notas para asi verificar el aprobado

int main(){
  int cantidad; //Variable que almacenara la cantidad de alumnos

  printf("Ingrese la cantidad de alumnos que rindieron el parcial: ");
  scanf("%d",&cantidad); //Se le pide al usuario que lo ingrese

  int notas[MAX_ALUMNOS]; //Las notas tendran el arreglo de la maxima cantidad de alumnos

  ingresoDatos(notas,cantidad); //Se ingresan la cantidad de alumnos

  int cantAprobados = contarAprobados(notas,cantidad); //Contamos la cantidad de alumnos aprobados

  printf("La cantidad de aprobados es de: %d\n",cantAprobados); //Se muestra el mensaje

  return 0;
}

void ingresoDatos(int notas[], int cantidad){
  for(int i = 0; i < cantidad; i++){ //Recorremos el arreglo hasta la cantidad que ingreso el usuario
    printf("Ingrese la nota del alumno %d: ",i+1);
    scanf("%d",&notas[i]); //La nota se guarda el en arreglo
  }
}

int contarAprobados(int notas[], int cantidad){
  int contador=0;
  for(int i = 0; i < cantidad; i++){ //Recorremos el arreglo hasta la cantidad que ingreso el usuario
    if(notas[i] >= 6){ //Verificamos si el alumno saco una nota mayor igual a seis
      contador++; //Si es asi nos incrementa el contador
    }
  }

  return contador; //Retornamos el contador que almacena la cantidad de alumnos aprobados
}