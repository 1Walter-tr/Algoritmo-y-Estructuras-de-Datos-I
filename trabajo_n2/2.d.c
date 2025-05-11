/*La maestra de la Sala Verde del jardín maternal Bichito de Luz, quiere pintar las figuras 
circulares de madera con las que juegan los niños (todas del mismo tamaño). Una vez que 
sepa toda el área a cubrir, en la pinturería le indicarán la cantidad necesaria de pintura. Para 
ello necesita saber el área del círculo de las figuras. Escriba una función que calcule y devuelva el valor del área. El programa debe permitir el ingreso de la cantidad de figuras y el valor del 
radio, y debe mostrar en pantalla la cantidad de figuras y el total de la superficie a cubrir. 
Nota: área de círculo= PI * r2*/
#include <stdio.h>

float calculoArea(float radio);

int main(){
  int cantFiguras;
  float radio;

  printf("Ingrese la cantidad de figuras: ");
  scanf("%d",&cantFiguras);
  printf("Ingrese el radio: ");
  scanf("%f",&radio);

  float totalCubrir = calculoArea(radio);

  printf("\nCantidad de figuras: %d\n",cantFiguras);
  printf("Total de la superficie a cubrir: %.2f\n",totalCubrir);

  return 0;
}

float calculoArea(float radio){
  float areaCirculo = 3.14 * radio * radio;

  return areaCirculo;
}