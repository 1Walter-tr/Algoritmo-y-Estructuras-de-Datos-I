/*Diseñe un algoritmo para calcular y mostrar el porcentaje de partidos de fútbol ganados por un club en un 
campeonato, conociendo los datos: cantidad de partidos jugados y cantidad de partidos ganados por el 
club*/
#include <stdio.h>

int cantJugados;
int cantGanados;

void ingresoDatos();
float calculoPorcentaje();
void mostrarDatos();

int main(){
  ingresoDatos();
  mostrarDatos();

  return 0;
}

void ingresoDatos(){
  printf("Ingrese la cantidad de partidos jugados: ");
  scanf("%d",&cantJugados);
  printf("Ingrese la cantidad de partidos ganados: ");
  scanf("%d",&cantGanados);
}

float calculoPorcentaje(){
  float porcentaje = (float)cantGanados / cantJugados * 100;

  return porcentaje;
}

void mostrarDatos(){
  float porcentajeGanados = calculoPorcentaje();
  printf("El porcentaje de partidos ganados es: %.2f%%\n",porcentajeGanados);
}