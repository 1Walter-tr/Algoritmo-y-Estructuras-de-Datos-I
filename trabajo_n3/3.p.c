/*En este caso de ejemplo de uso de do while es casi lo mismo que while, solo que while hace primero despues pregunta*/
/*Do while pregunta primero despues, solo es esa la diferencia*/
#include <stdio.h>

int cantidadProductos;
float precioUnitario;
char descripcion[50];

void ingresoDatos();
void salidaDatos();

int main(){
  int opcion;
  do{
    printf("1-Ingresar producto\n");
    printf("2-Mostrar producto\n");
    printf("3-Cerrar programa\n");
    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);


    switch(opcion)
    {
    case 1:
      ingresoDatos();
      break;
    case 2:
      salidaDatos();
      break;
    case 3:
      printf("Saliendo...\n");
      break;
    default:
      printf("Incorrecto. Ingrese una de las opciones predeterminadas\n");
      break;
    }
  }while(opcion!=3);

  return 0;
}

void ingresoDatos(){
  printf("Ingrese la cantidad de productos: ");
  scanf("%d",&cantidadProductos);
  printf("Ingrese el precio unitario: ");
  scanf("%f",&precioUnitario);
  printf("Ingrese la descripcion del producto: ");
  scanf("%s",descripcion);
} 

float calcularTotal(){
  float calculo;
  calculo = cantidadProductos * precioUnitario;

  return calculo;
}

void salidaDatos(){
  float total = calcularTotal();

  printf("Cantidad de productos: %d\n",cantidadProductos);
  printf("Precio unitario: %.2f\n",precioUnitario);
  printf("El total a pagar es: %.2f\n",total);
}