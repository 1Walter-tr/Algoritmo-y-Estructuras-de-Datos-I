/*Para otorgar un préstamo, un banco evalúa el sueldo del solicitante. Si el sueldo es mayor o igual a 
$100000, se autoriza un préstamo de hasta $300000. Para sueldos inferiores, sólo se autoriza un 
préstamo de hasta el 75% de sus ingresos. El banco desea tener un programa que permita ingresar el 
monto del sueldo del solicitante y muestre en pantalla una leyenda indicando el monto de préstamo 
autorizado.*/
#include <stdio.h>

float sueldo;

void ingresoDatos();
void salidaDatos();

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}

void ingresoDatos(){
  printf("Ingrese el monto de su sueldo: ");
  scanf("%f",&sueldo);
}

void salidaDatos(){
  if(sueldo >= 100000){
    printf("El prestamo autorizado es de hasta: $300000\n");
  }else{
    float resultado = sueldo * 0.75;
    printf("El prestamo autorizado es de hasta: $%.2f\n",resultado);
  }
}