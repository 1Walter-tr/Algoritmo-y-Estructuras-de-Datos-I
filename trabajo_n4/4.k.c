/*4.Un supermercado dispone de la siguiente información relacionada con sus productos: código de producto,
descripción, precio de costo y precio sugerido. Se solicita escribir un programa que permita ingresar los
datos del producto (código de producto, descripción, precio de costo) y calcular el precio sugerido (aplicar
el 30% del precio de costo). El programa debe incluir la declaración de una estructura compuesta que
permita modelar los datos de los productos. El programa finaliza cuando el usuario ingresa -1 en el código
del producto.*/
#include <stdio.h>
#include <string.h>

struct Mercado{
  int codigoProducto;
  char descripcionProducto[50];
  float precioCosto;
};

struct Mercado ingresoDatos();
float aplicarDescuento(struct Mercado p);
void mostrarDatos(struct Mercado p);

int main(){
  struct Mercado p;
  p = ingresoDatos();

  mostrarDatos(p);
  return 0;
}

struct Mercado ingresoDatos(){
  struct Mercado p;

  printf("Ingrese el codigo del producto: ");
  scanf("%d",&p.codigoProducto);
  printf("Ingrese la descripcion del producto: ");
  scanf("%s",p.descripcionProducto);
  printf("Ingrese el precio de costo: ");
  scanf("%f",&p.precioCosto);

  return p;
}

float aplicarDescuento(struct Mercado p){
  p.precioCosto = p.precioCosto * 0.70;

  return p.precioCosto;
}

void mostrarDatos(struct Mercado p){
  float precioDescuento = aplicarDescuento(p);
  printf("EL codigo del producto es: %d\n",p.codigoProducto);
  printf("La descripcion del producto es: %s\n",p.descripcionProducto);
  printf("El precio del producto es: %.2f\n",p.precioCosto);
  printf("El precio final es: %.2f\n",precioDescuento);
}