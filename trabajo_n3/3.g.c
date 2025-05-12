/*Una farmacia desea emitir el ticket de compra en función de la cantidad y precio del producto vendido, 
y el tipo de producto (P-Perfumería, F-Farmacia y L-Limpieza). Necesita una aplicación para calcular el 
valor de la compra, aplicando una bonificación de acuerdo con el tipo de producto: Perfumería 5%, 
Farmacia 10%, Limpieza 15%. El ticket debe mostrar el importe a pagar y el porcentaje de bonificación, 
con la leyenda “% bonificado: XX”.*/
#include <stdio.h>

int cantProductos;
float precioUnitario;
char tipoProducto;
float descuento;

void ingresoDatos();
float calculoTotal();
void salidaDatos();

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}

void ingresoDatos(){
  printf("Ingrese la cantidad de productos: ");
  scanf("%d",&cantProductos);
  printf("Ingrese el precio unitario: ");
  scanf("%f",&precioUnitario);
  printf("Ingrese el tipo de producto (P-Perfumería, F-Farmacia y L-Limpieza): ");
  scanf(" %c",&tipoProducto);
}

float calculoTotal(){
  float resultado = cantProductos * precioUnitario;

  return resultado;
}

void salidaDatos(){
  float resultado = calculoTotal();
  float totalDescuento = resultado * (1 - descuento);

  switch(tipoProducto)
  {
  case 'P':
  case 'p':
    descuento = 0.05;
    break;
  case 'F':
  case 'f':
    descuento = 0.10;
    break;
  case 'L':
  case 'l':
    descuento = 0.15;
    break;
  default:
    printf("Tipo de producto invalido\n");
    break;
  }

  printf("Cantidad de productos: %d\n",cantProductos);
  printf("Precio unitario: %.2f\n",precioUnitario);
  printf("Tipo de producto (P-Perfumería, F-Farmacia y L-Limpieza): %c\n",tipoProducto);
  printf("Total sin descuento: %.2f\n",resultado);
  printf("Bonificacion: %.2f\n",descuento * 100);
  printf("Importe a pagar: %.2f\n",totalDescuento);

}