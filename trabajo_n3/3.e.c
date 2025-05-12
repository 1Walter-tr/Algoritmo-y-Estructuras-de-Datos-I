/*Con el objeto de conseguir fondos para el viaje de egresados, los alumnos de 6to. año organizaron un 
baile. El precio de las entradas es de $750 con una consumición, y de $500 sin consumición. Si la venta 
es anticipada, se realiza un descuento del 20% al valor de la entrada. Se requiere un programa para la 
emisión de la entrada. La entrada debe mostrar si la venta fue anticipada (‘S’ / ‘N’), el tipo de entrada 
(1-con consumición, 2-sin consumición) y el importe a pagar.
*Nota: prestar atención al ingreso de datos de tipo char.*/
#include <stdio.h>

float precio;
int tipoEntrada;
char tipoVenta;

void ingresoDatos();
void salidaDatos();

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}

void ingresoDatos(){
  printf("La venta fue anticipada (s-si, n-no): ");
  scanf(" %c",&tipoVenta);
  printf("La entrada es (1-con consumicion, 2-sin consumicion): ");
  scanf("%d",&tipoEntrada);
}

void salidaDatos(){
  if(tipoEntrada == 1){
    precio = 750;
  }else if(tipoEntrada == 2){
    precio = 500;
  }

  if(tipoVenta == 's' || tipoVenta == 'S'){
    precio = 0.20 * precio;
  }

  printf("Venta anticipada: %c\n",tipoVenta);
  printf("Tipo entrada: %d\n",tipoEntrada);
  printf("Precio a pagar: %.2f\n",precio);
}