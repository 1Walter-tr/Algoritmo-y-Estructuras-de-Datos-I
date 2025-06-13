//Uso de funcion bool (Es casi lo mismo que el anterior pero para reforzar la practica)
#include <stdio.h>
#include <stdbool.h>

bool rangoRequerido(int edad);

int main(){
  int edadIngresar;

  printf("Ingrese su edad: ");
  scanf("%d",&edadIngresar);

  if(rangoRequerido(edadIngresar)==true){
    printf("Es mayor de edad\n");
  }else{
    printf("Es menor de edad\n");
  }

  return 0;
}

bool rangoRequerido(int edad){
  return edad >= 18;
}