#include <stdio.h>

void menu();

int main(){
  int opcion;
  
  menu();
  scanf("%d",&opcion);

  switch(opcion)
  {
  case 1:
    printf("*****PRUEBA 1********\n");
    break;
  case 2:
    printf("Saliendo...\n");
    break;
  default:
    printf("Incorrecto\n");
    break;
  }

}

void menu(){
  printf("1-Ingresar cliente\n");
  printf("2-Cerrar programa\n");
  printf("Elija una de las opciones establecidas: ");
}