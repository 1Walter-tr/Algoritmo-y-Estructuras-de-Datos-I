/*.Definir los campos necesarios para modelar un registro de alumnos de la FaCENA (Facultad de Ciencias
Exactas y Naturales y Agrimensura) que serán utilizados por el sistema SIU Guaraní. Luego, determinar el
tipo y el tamaño de cada campo. Por último, calcular la longitud del registro.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Registro{
  long dni;
  char apellido[50];
  char nombre[50];
  short edad;
  short codigoLocalidad;
  short codigoMateria;
};

struct Registro ingresoDatos();
void mostrarDatos(struct Registro alumnos);

int main(){
  struct Registro alumnos = ingresoDatos();

  mostrarDatos(alumnos);

  return 0;
}

struct Registro ingresoDatos(){
  struct Registro alumnos;

  printf("Ingrese su dni: ");
  scanf("%ld",&alumnos.dni);

  fflush(stdin);

  printf("Ingrese su apellido: ");
  fgets(alumnos.apellido,sizeof(alumnos.apellido),stdin);

  printf("Ingrese su nombre: ");
  fgets(alumnos.nombre,sizeof(alumnos.nombre),stdin);

  printf("Ingrese su edad: ");
  scanf("%hd",&alumnos.edad);

  printf("Ingrese su codigo de localidad: ");
  scanf("%hd",&alumnos.codigoLocalidad);

  printf("Ingrese el codigo de la materia que cursa: ");
  scanf("%hd",&alumnos.codigoMateria);

  return alumnos;
}

void mostrarDatos(struct Registro alumnos){
  system("cls");

  printf("DNI: %ld\n",alumnos.dni);
  printf("Identificador: dni\n");
  printf("Tipo de dato: long\n");
  printf("Longitud: 4\n\n");

  printf("Apellido: %s",alumnos.apellido);
  printf("Identificador: apellido\n");
  printf("Tipo de dato: char[]\n");
  printf("Longitud: 50\n\n");

  printf("Nombre: %s",alumnos.nombre);
  printf("Identificador: nombre\n");
  printf("Tipo de dato: char[]\n");
  printf("Longitud: 50\n\n");

  printf("Edad: %hd\n",alumnos.edad);
  printf("Identificador: edad\n");
  printf("Tipo de dato: short\n");
  printf("Longitud: 2\n\n");

  printf("Codigo de localidad: %hd\n",alumnos.codigoLocalidad);
  printf("Identificador: codigoLocalidad\n");
  printf("Tipo de dato: short\n");
  printf("Longitud: 2\n\n");

  printf("Codigo de materia cual cursa: %hd\n",alumnos.codigoMateria);
  printf("Identificador: codigoMateria\n");
  printf("Tipo de dato: short\n");
  printf("Longitud: 2\n\n");

  printf("Longitud del registro = 4 + 50 + 50 + 2 + 2 + 2 = 110\n");
}