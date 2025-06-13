/*Un supermercado desea calcular el valor total de la compra a partir de los siguientes datos de los 
productos comprados por un cliente: cantidad, precio unitario y descripción. Se debe tener en cuenta 
que un cliente puede comprar varios productos distintos. El cajero ingresará -1 como valor de cantidad 
para indicar que terminó de ingresar los productos de un cliente. Se debe Imprimir el importe total a 
pagar con el formato que se muestra a continuación: 
******************************** 
TOTAL A PAGAR: $ 1800.00 
******************************** 
¡Gracias por su compra! 
A medida que se ingresan los datos de un producto de la compra se debe mostrar el subtotal en la 
pantalla, de la siguiente manera: 
Ejemplo 1:    
2 X $ 18.00  
Jabón en Polvo Ala $ 36.00*/
#include <stdio.h>
#include <string.h>

struct SuperMercado{
  int cantidad;
  float precioUnitario;
  char descripcion[50];
};

struct SuperMercado ingresoDatos();
float totalPagar(struct SuperMercado p);
void mostrarDatos(struct SuperMercado p);

int main(){
  struct SuperMercado p;
  int opcion;

  printf("1. Ingresar producto\n");
  printf("-1. Cerrar programa\n");
  printf("Elija una de las opciones establecidas: ");
  scanf("%d",&opcion);

  while(opcion==1){
    p = ingresoDatos();
    mostrarDatos(p);
    printf("1. Ingresar producto\n");
    printf("-1. Cerrar programa\n");
    printf("Elija una de las opciones establecidaas: ");
    scanf("%d",&opcion);
  }

  return 0;
}

struct SuperMercado ingresoDatos(){
  struct SuperMercado p;

  printf("Ingrese la cantidad de productos: ");
  scanf("%d",&p.cantidad);
  printf("Ingrese el precio unitario: ");
  scanf("%f",&p.precioUnitario);
  printf("Ingrese la descripcion del producto: ");
  scanf("%s",p.descripcion);

  return p;
}

float totalPagar(struct SuperMercado p){
  float total = p.cantidad * p.precioUnitario;

  return total;
}

void mostrarDatos(struct SuperMercado p){
  float precioFinal = totalPagar(p);
  printf("Cantidad de productois: %d\n",p.cantidad);
  printf("Precio unitario: %.2f\n",p.precioUnitario);
  printf("Descripcion del producto: %s\n",p.descripcion);
  printf("El total a pagar es de: %.2f\n",precioFinal);
}