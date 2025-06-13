/*consignaSuma*/
#include <stdio.h>

int main(){
  int numero;
  int suma = 0;/*Hacemos que la variable inicialice en 0 porque se ira acumulando*/
  
  printf("Ingrese un numero positivo: ");/*Se le pide al usuario que ingrese un numero positivo*/
  scanf("%d",&numero);

  while(numero>=0){/*Si el numero es positivo se seguira llamando al while*/
    suma = suma + numero;/*Por ejemplo al empezar seria suma = 0, se ingresa el 10, seria 0 + 10, ingresamos el otro numero, seria 10 + 20, y asi hasta que el usuario ingrese un numero negativo para terminar la operacion*/
    printf("Ingrese otro numero positivo para continuar o un numero negativo para terminar: ");
    scanf("%d",&numero);
  }

  printf("La suma total de los numeros es: %d\n",suma);/*Una vez que el usuario termine con un numero negativo se mostrara la suma de todos los numeros*/

  return 0;
}