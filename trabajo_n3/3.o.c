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

int cantidadProductos;
float precioUnitario;
char descripcionProducto[50];

void ingresoDatos();
void mostrarSubtotal();
void mostrarTotal();

int main(){
  int opcion;
  
  printf("1. Ingresar producto\n");
  printf("-1. Cerrar programa\n");
  printf("Elija una de las opciones: ");
  scanf("%d",&opcion);

  while(opcion==1){
    ingresoDatos();
    mostrarSubtotal();
    printf("1. Ingresar producto\n");
    printf("-1. Cerrar programa\n");
    printf("Ingrese las siguientes opciones: ");
    scanf("%d",&opcion);
  }

  mostrarTotal();
  
}

void ingresoDatos(){
  printf("Ingrese la cantidad de productos: ");
  scanf("%d",&cantidadProductos);
  printf("Ingrese el precio unitario: ");
  scanf("%f",&precioUnitario);
  printf("Ingrese la descripcion del producto: ");
  scanf("%s",descripcionProducto);
}

void mostrarSubtotal(){
  float subtotal = cantidadProductos * precioUnitario;
  printf("*****TICKET*****\n\n");
  printf("%d x $%.2f\n",cantidadProductos, subtotal);
  printf("%s: %.2f\n\n",descripcionProducto, subtotal);
  printf("********************\n\n");
}

void mostrarTotal(){
  float total = cantidadProductos * precioUnitario;
  printf("*********************************\n");
  printf("TOTAL A PAGAR: %.2f\n", total);
  printf("*********************************\n");
  printf("Gracias por su compra\n");
}