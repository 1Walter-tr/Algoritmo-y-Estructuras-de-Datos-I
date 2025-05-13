/*consignaContraseña*/
#include <stdio.h>

int main(){
  int contrasenia = 12345;/*Aca declaramos la contraseña correcta*/
  int contraseniaIngresar;/*Esta seria la que el usuario ingresara*/

  printf("Ingrese la contrasenia: ");/*Se le pide al usuario que ingrese la contraseña*/
  scanf("%d",&contraseniaIngresar);

  while(contraseniaIngresar!=contrasenia){/*Si la contraseña no es igual a la variable contrasenia (que es la que almacena 12345), se seguira insistiendo al usuario que ingrese la contraseña correcta*/
    printf("La contraseña es incorrecta. Ingrese nuevamente: ");
    scanf("%d",&contraseniaIngresar);
  }

  printf("Contrasenia ingresada correctamente\n");/*Una vez que se cumple la condicion es decir la contraseña es correcta, se muestra este mensaje*/

  return 0;
}