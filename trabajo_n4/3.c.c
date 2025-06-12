/*.Para emitir los certificados de aprobación de un curso de Python, se dispone de una planilla en la que se
informan en columnas diferentes el nombre y el apellido de los participantes. Escribir un programa que
lea dos datos de tipo cadena, correspondientes al nombre y apellido, respectivamente. Utilice una
función que reciba como parámetro el nombre y el apellido y concatene en una sola cadena el apellido y
nombre, separados por coma. Mostrar en pantalla la nueva cadena y la longitud de la misma. El
programa termina cuando el usuario indique una condición de fin de ingreso de datos.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ingresoDatos(char nombre[], char apellido[]);
void concatenarCadenas(char nombre[], char apellido[], char nombreApellido[]);

int main(){
  char nombre[50];
  char apellido[50];
  char nombreApellido[100];


  while(1){

    ingresoDatos(nombre,apellido);


    if(strcmp(nombre, "fin") == 0 || strcmp(nombre, "fin") == 0){
      break;
    }

    concatenarCadenas(nombre,apellido,nombreApellido);

    printf("Nombre completo: %s\n",nombreApellido);
    printf("La longitud de la cadena es: %llu\n",strlen(nombreApellido));
  }

  printf("Programa finalizado\n");

}

void ingresoDatos(char nombre[], char apellido[]){
  printf("Ingrese el nombre (o fin para salir): ");
  scanf("%s",nombre);

  if(strcmp(nombre, "fin") != 0){//Verificamos si nombre es distinto a fin (!=0) seguimos con pedir el apellido
    printf("Ingrese el apellido: ");
    scanf("%s",apellido);
  } 
}

void concatenarCadenas(char nombre[], char apellido[], char nombreApellido[]){
  strcpy(nombreApellido, apellido);
  strcat(nombreApellido, ", ");
  strcat(nombreApellido, nombre);
}