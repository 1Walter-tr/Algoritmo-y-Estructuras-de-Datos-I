/*consignaEdad*/
#include <stdio.h>

int main() {
    int edad; /*Declaramos una variable para la edad de una persona*/

    printf("Ingrese su edad (Tiene que ser un valor positivo): ");/*Se pide el ingreso de la edad, que sea un numero positivo*/
    scanf("%d",&edad);

    while (edad <= 0){/*Si el numero ingresado es menor igual a 0, es decir un numero negativo, se le volvera a pedir al usuario que ingrese nuevamente el valor positivo*/
        printf("Error. Ingrese nuevamente su edad: ");/*Dentro del bucle de while formulamos la pregunta que se quiere hacer al usuario ya que no se cumplio la consigna*/
        scanf("%d",&edad);
    }

    printf("Edad ingresada correctamente: %d\n", edad);/*Una vez que se cumple la condicion, es decir el usuario ingreso un numero positivo, se muestra el mensaje que queremos por pantalla*/

    return 0;
}