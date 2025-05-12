/* Un supermercado desea ofrecer un beneficio para atraer clientes. Decide realizar una bonificación de 
15% al total de la compra si ésta es mayor o igual a $5000 y la forma de pago es en efectivo o se 
compran más de 10 productos (Utilice una sola expresión lógica). El ticket debe mostrar la bonificación 
y la forma de pago en el detalle. Las formas de pago disponibles son (c-tarjeta de crédito / d-tarjeta 
de débito / e-efectivo).  
*Nota:  
- Prestar atención al ingreso de datos de tipo char 
- Reutilizar la solución del programa correspondiente al ejercicio

Cant. unidades: 7 - Precio unit.: $ 1000  
Total: $ 7000.00 
Forma de pago: c 
Bonificación: $ 0.00 
Total a pagar: $ 7000.00 
¡Gracias por su compra!

Cant. unidades: 7 - Precio unit.: $ 1000  
Total: $ 7000.00 
Forma de pago: e 
Bonificación: $ 700.00 
Total a pagar: $ 6300.00 
¡Gracias por su compra!*/
#include <stdio.h>

int cantProductos;
float precioUnitario;
char metodoPago;

void ingresoDatos();
float precioTotal();
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
  printf("Elija su metodo de pago (c-tarjeta de credito, d-tarjeta de debito, e-efectivo): ");
  scanf(" %c",&metodoPago);
}

float precioTotal(){
  float precio = cantProductos * precioUnitario;

  return precio;
}

void salidaDatos(){
  float precioPorCantidad = precioTotal();

  float descuento = precioPorCantidad * 0.15;

  float precioBonificacion = precioPorCantidad - descuento;

  printf("******************************************\n\n");
  printf("Cantidad de productos: %d - ",cantProductos);
  printf("Total: %.2f\n",precioPorCantidad);
  printf("Precio unitario: %.2f\n",precioUnitario);
  printf("Metodo de pago: %c\n",metodoPago);
  if(precioBonificacion >= 5000 && (metodoPago == 'e' || cantProductos >= 10)){
    printf("Bonificacion: %.2f\n",descuento);
    printf("Precio final: %.2f\n",precioBonificacion);
  }else{
    printf("Bonificacion: $0.0\n");
    printf("Precio final: %.2f\n",precioPorCantidad);
  }
  printf("Gracias por su compra\n");
  printf("\n\n**************************************");
}