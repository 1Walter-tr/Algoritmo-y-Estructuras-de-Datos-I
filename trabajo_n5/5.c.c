/*1. Finalizado el primer parcial de la asignatura AED1, se cuenta con las notas obtenidas por los 1.000
estudiantes que cursan la asignatura. El equipo docente desea analizar el desempeño general de los
alumnos. Para ello, se requiere un programa que:
- Almacene en un vector las notas obtenidas por los estudiantes.
- Calcule e informe:
.El promedio de las notas de los estudiantes que aprobaron el parcial (nota mayor o igual a 6).
.El porcentaje de aprobados sobre el total de alumnos.
- Recorra nuevamente el vector e informe la mayor nota obtenida y su posicion en el arreglo.*/
#include <stdio.h>
#define MAX_ALUMNOS 100 //Definimos una cantidad maxima de alumnos

void ingresoNotas(float notas[], int cantidad); //Funcion para el ingreso de las notas
int contarAprobados(float notas[], int cantidad); //Funcion para contar la cantidad de aprobados
float calculoPromedio(float notas[], int cantidad); //Funcion para calcular el promedio de aprobados
float calculoPorcentaje(int aprobados, int cantidad); //Funcion para calcular el porcentaje de aprobados
int encontrarMayorNota(float notas[], int cantidad); //Funcion para encontrar la mayor nota existente

int main(){
  int cantidad;
  float notas[MAX_ALUMNOS];
  
  printf("Ingrese la cantidad de alumnos que rindieron: "); //Se pide la cantidad de alumnos que rindieron
  scanf("%d",&cantidad);

  ingresoNotas(notas,cantidad);

  int cantidadAprobados = contarAprobados(notas,cantidad);
  float promedioAprobados = calculoPromedio(notas,cantidad);
  float porcentajeAprobados = calculoPorcentaje(cantidadAprobados,cantidad);
  int mayorNota = encontrarMayorNota(notas,cantidad);

  printf("La cantidad de alumnos aprobados es de: %d\n",cantidadAprobados);
  printf("El promedio de las notas de los alumnos aprobados es de: %.2f\n",promedioAprobados);
  printf("El porcentaje de alumnos que aprobo sobre el total es de: %.2f\n",porcentajeAprobados);
  printf("La mayor nota es del alumno: %d\n",mayorNota);

  return 0;
}

void ingresoNotas(float notas[], int cantidad){
  for(int i = 0; i < cantidad; i++){
    printf("Alumno %d, Nota: ",i+1); //Se le pide que ingrese las notas de la cantidad de alumnos ingresados
    scanf("%f",&notas[i]);
  }
}

int contarAprobados(float notas[], int cantidad){
  int conteo=0; //Variable para almacenar la cantidad de aprobados
  for(int i = 0; i < cantidad; i++){
    if(notas[i] >= 6){ //Si la nota es mayor igual a seis, se cuenta un aprobado
      conteo++;
    }
  }

  return conteo;
}

float calculoPromedio(float notas[], int cantidad){
  int suma = 0; //Variable para almacenar todas las suma de los alumnos aprobados
  int conteo = 0; //Funcion para almacenar la cantidad de aprobados
  for(int i = 0; i < cantidad; i++){
    if(notas[i] >= 6){
      suma+=notas[i]; //Sumamos todas las notas de los aprobados
      conteo++; //Se contea a los aprobados
    }
  }

  if(conteo==0){ //Si la cantidad de personas aprobadas es de cero retornamos cero
    return 0;
  }
  return (float)suma/conteo;
  
}

float calculoPorcentaje(int aprobados, int cantidad){
  //La variable aprobados nos almacenara la cantidad de aprobados
  //El total nos almacenara la cantidad de alumnos en total
  float porcentaje = ((float)aprobados / cantidad) * 100;
  //Dividimos la cantidad de aprobados por la cantidad total
  //Luego ese resultado lo multiplicamos por el 100%

  return porcentaje;
}

int encontrarMayorNota(float notas[], int cantidad){
  float mayor = notas[0]; //Tomamos la primera nota como punto de partido
  int posicion = 0; //Tomamos la posicion de la primera nota

  for(int i = 1; i < cantidad; i++){ //Recorremos a cada alumno
    if(notas[i] > mayor){ //Si se encuentra una nota mayor a la primera nota se actualiza
      mayor = notas[i]; //sustituyendo la nueva a la original
      posicion = i + 1; //Se guarda la mayor nota en la variable posicion
    }
  }

  return posicion;
}