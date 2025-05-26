/*Para verificar si las personas están autorizadas a circular en el marco de la pandemia, una aplicación 
requiere el ingreso de la terminación del DNI y el día de la semana en números (1-Lunes 2-Martes 3
Miércoles 4-Jueves 5-Viernes 6-Sábado 7-Domingo). Las terminaciones pares pueden circular los días 
lunes, miércoles y viernes, y las impares, los martes, jueves y sábados. El día domingo no puede circular 
nadie. Mostrar por pantalla los datos y una leyenda que indique “Autorizado” o “No autorizado”, según 
corresponda.
Utilice una función que reciba como parámetro la terminación del DNI y devuelva verdadero si la 
terminación es par y falso, en caso contrario.  La aplicación debe continuar funcionando hasta que se 
indique lo contrario. */
#include <stdio.h>
#include <stdbool.h>

int ingresoDni();
bool esPar(int dni);
int ingresoDia();

int main(){
  int dni;
  int dia;
  int opcion;

  do{
    printf("1-Ingresar cliente\n");
    printf("2-Cerrar programa\n");
    printf("Ingrese una de las opciones: ");
    scanf("%d",&opcion);
    
    switch(opcion)
    {
    case 1:
      dni = ingresoDni();
      dia = ingresoDia();
      
      printf("Dia de la semana: %d\n",dia);
      printf("Terminacion del dni: %d\n",dni);

      if((esPar(dni) == true) && (dia == 1 || dia == 3 || dia == 5)){
        printf("Autorizado\n");
      }else if((esPar(dni) == false) && (dia == 2 || dia == 4 || dia == 6)){
        printf("Autorizado\n");
      }else{
        printf("No autorizado\n");
      }
      break;
    case 2:
      printf("Saliendo...\n");
      break;
    default:
      printf("Incorrecto. Ingrese una de las opciones establecidas\n");
      break;
    }
  }while(opcion!=2);

  return 0;
}

int ingresoDni(){
  int dni;
  printf("Ingrese la terminacion de su dni: ");
  scanf("%d",&dni);

  return dni;
}

bool esPar(int dni){
  return dni % 2 == 0;
}

int ingresoDia(){
  int dia;
  printf("Ingrese el dia de la semana (1-Lunes, 2-Martes, 3-Miercoles, 4-Jueves, 5-Viernes, 6-Sabado, 7-Domingo): ");
  scanf("%d",&dia);

  return dia;
}