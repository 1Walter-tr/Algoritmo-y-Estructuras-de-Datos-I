/*Crear un algoritmo donde el usuario indique si llego a la meta (1) o no (0) para terminar el programa*/
#include <stdio.h>
#include <stdbool.h>

int main() {
  bool llegueAlaMeta = false;
  int respuesta; //Creamos una variable para recibir la respuesta del usuario

  while(llegueAlaMeta == false){//Mientras que llegar a la meta sea false el while se seguira llamando 
      printf("Continuar avanzando\n");
      printf("Llegaste a la meta (1 para si, 0 para no): ");
      scanf("%d", &respuesta);

      if (respuesta == 1){//Decimos que si es igual a 1 llegue a la meta se convierte en true asi el while termina
          llegueAlaMeta = true;
      }
  }

  printf("Se llego a la meta\n");

  return 0;
}