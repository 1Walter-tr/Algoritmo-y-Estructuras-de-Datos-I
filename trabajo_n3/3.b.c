/*Diseñe un algoritmo para calcular y mostrar el porcentaje de partidos de fútbol ganados por un club en un campeonato, conociendo los datos: cantidad de partidos jugados y cantidad de partidos ganados por el club.*/
#include <stdio.h>

int partidosJugados, partidosGanados;

void ingresoDatos();
float calculaPorcentaje();
void mostrarDatos();

int main(){
  ingresarDatos();
  mostrarResultado();
  
  return 0;
}

void ingresarDatos() {
    printf("Ingrese la cantidad de partidos jugados: ");
    scanf("%d", &partidosJugados);
    printf("Ingrese la cantidad de partidos ganados: ");
    scanf("%d", &partidosGanados);
}

float calcularPorcentaje(){
  float porcentaje = (float)partidosGanados / partidosJugados * 100;
    
  return porcentaje;
}

void mostrarDatos(){
  float porcentaje = calcularPorcentaje();
  
  printf("\nPartidos jugados: %d\n", partidosJugados);
  printf("Partidos ganados: %d\n", partidosGanados);
  printf("Porcentaje de victorias: %.2f%%\n", porcentaje);
}