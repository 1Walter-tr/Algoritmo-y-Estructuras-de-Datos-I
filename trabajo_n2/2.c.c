/*Un local comercial quiere colocar una cinta con una leyenda impresa en una caja rectangular.  
Para determinar la cantidad de cinta a comprar necesita conocer el perímetro de la caja. 
Escriba una función que calcule y devuelva el valor del perímetro. El programa debe permitir 
el ingreso de los datos requeridos: el ancho (lado1) y alto (lado2) de la caja y debe mostrar en 
pantalla los datos de la caja y la cantidad de metros de cinta a comprar.  
Nota: perímetro = 2 * (lado1 + lado2).*/
#include <stdio.h>

float calculoPerimetro(float lado1, float lado2);//Funcion con parametros;

int main(){
  float alto;//Declaramos las variables que remplazaran a los parametros
  float ancho;

  printf("Ingrese el alto de la caja: ");
  scanf("%f",&alto);
  printf("Ingrese el ancho de la caja: ");
  scanf("%f",&ancho);

  float cantCinta = calculoPerimetro(alto,ancho);

  printf("\n****Datos de la caja****\n");
  printf("El alto de la caja es: %.2f\n",alto);
  printf("El ancho de la caja es: %.2f\n",ancho);
  printf("La cantidad de cinta a comprar es: %.2f\n",cantCinta);

  return 0;
}

float calculoPerimetro(float lado1, float lado2){
  float perimetro = 2 * (lado1 + lado2);

  return perimetro;
}