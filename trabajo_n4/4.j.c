/*.Crear una estructura compuesta para almacenar datos de super héroes: nombre de super héroe, nombre
terrestre, poder, universo (editorial). Asignarle valores, y mostrar por pantalla.*/
#include <stdio.h>
#include <string.h>

struct Personajes{
  char nombreHeroe[50];
  char nombreHumano[50];
  char poder[50];
  char universo[50];
};

struct Personajes asignarDatos();
void mostrarDatos(struct Personajes superheroes);

int main(){
  struct Personajes superheroes;

  superheroes = asignarDatos();

  mostrarDatos(superheroes);

  printf("Longitud total del registro: %llu\n",sizeof(superheroes));

  return 0;
}

struct Personajes asignarDatos(){
  struct Personajes superheroes;

  strcpy(superheroes.nombreHeroe, "Superman");
  strcpy(superheroes.nombreHumano, "Clark Kent");
  strcpy(superheroes.poder, "Vision de rayos laser");
  strcpy(superheroes.universo, "DC Comics");

  return superheroes;
}

void mostrarDatos(struct Personajes superheroes){
  printf("Nombre de superheroe: %s\n",superheroes.nombreHeroe);
  printf("Nombre terrestre: %s\n",superheroes.nombreHumano);
  printf("Poder: %s\n",superheroes.poder);
  printf("Universo: %s\n",superheroes.universo);
}