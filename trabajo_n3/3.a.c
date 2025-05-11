/*Diseñe un algoritmo que emita el ticket con el importe a pagar 
en un supermercado considerando los datos: cantidad y precio 
del producto. Imprimir el ticket tomando como referencia el 
diseño de este ticket de ejemplo: 
Cant. unidades: 5 - Precio unit.: $ 10.50  
Total: $ 52.50 
¡Gracias por su compra!*/
#include <stdio.h>

int cantidad;
float precio, total;

void ingresarDatos();
float calculoProductos();
void imprimirTicket();

int main(){
    ingresarDatos();
    calcularTotal();
    imprimirTicket();
    return 0;
}

void ingresarDatos(){
    printf("Ingrese la cantidad de unidades: ");
    scanf("%d", &cantidad);
    printf("Ingrese el precio unitario: ");
}

float calcularTotal(){
    total = cantidad * precio;
}

void imprimirTicket(){
    printf("\nCant. unidades: %d - Precio unit.: $ %.2f\n", cantidad, precio);
    printf("Total: $ %.2f\n", total);
    printf("¡Gracias por su compra!\n");
}