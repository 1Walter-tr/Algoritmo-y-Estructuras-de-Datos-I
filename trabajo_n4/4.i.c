/*Declarar una estructura compuesta que permita modelar un registro de películas y series que serán
utilizados por NETFLIX para llevar el control sobre el interés de los clientes (No más de 7 campos). Luego:
- Determinar el tipo y el tamaño de cada campo
- Calcular la longitud del registro
- Asignarle valores, y mostrar por pantalla.*/
#include <stdio.h>
#include <string.h>

struct Catalogo{
  char tipo[50];
  int duracion;
  char genero[50];
  char nombre[50];
};

struct Catalogo asignarDatos();
void mostrarDatos(struct Catalogo netflix);

int main(){
  struct Catalogo netflix;

  netflix = asignarDatos();

  mostrarDatos(netflix);

  printf("Longitud total del registro: %llu\n",sizeof(netflix));

  return 0;
}

struct Catalogo asignarDatos(){
  struct Catalogo netflix;

  strcpy(netflix.tipo, "Pelicula");
  netflix.duracion = 170;
  strcpy(netflix.genero, "Crimen");
  strcpy(netflix.nombre, "Scarface");

  return netflix;
}

void mostrarDatos(struct Catalogo netflix){
  printf("Tipo de filmografia: %s\n",netflix.tipo);
  printf("Duracion: %d\n",netflix.duracion);
  printf("Genero: %s\n",netflix.genero);
  printf("Nombre: %s\n",netflix.nombre);
}