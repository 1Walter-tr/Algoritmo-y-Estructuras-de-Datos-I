/*En este caso estructura secuencial*/

/*Diseñe un algoritmo que emita el ticket con el importe a pagar 
en un supermercado considerando los datos: cantidad y precio 
del producto. Imprimir el ticket tomando como referencia el 
diseño de este ticket de ejemplo: 

Cant. unidades: 5 - Precio unit.: $ 10.50  
Total: $ 52.50 
¡Gracias por su compra!*/
#include <stdio.h>

int cantProductos;
float precioUnitario;

void ingresoDatos();
float calculoProductos();
void mostrarDatos();

int main(){
  ingresoDatos();
  mostrarDatos();

  return 0;
}

void ingresoDatos(){
  printf("Ingrese la cantidad de productos: ");
  scanf("%d",&cantProductos);
  printf("Ingrese el precio unitario: ");
  scanf("%f",&precioUnitario);
}

float calculoProductos(){
  float calculo = cantProductos * precioUnitario;

  return calculo;
}

void mostrarDatos(){
  float totalProductos = calculoProductos();
  printf("\nCant. unidades: %d - Precio unit.: $%.2f\n",cantProductos,precioUnitario);  
  printf("Total: $%.2f\n",totalProductos); 
  printf("¡Gracias por su compra!");
}