/*🎯 Objetivo general:
Desarrollar un programa en lenguaje C que registre información de los visitantes a Disneyland, clasificados por tipo de atracción, tipo de pase y edad. El sistema debe generar estadísticas al final del día y mostrar mensajes especiales según ciertos criterios.
📋 Requisitos del programa:
1. Ingreso de datos del visitante:
Por cada visitante, se debe ingresar lo siguiente:
Código de atracción a la que asistió:  P'-Pirates of the Caribbean, 'S'- Space Mountain, 'T'-Tea Cups
Código de pase que posee:  V'→Pase VIP, 'R'→Pase Regular
Edad del visitante (entero positivo).
2. Mensajes especiales
Si el visitante NO eligió la atracción 'P' y su pase es VIP, se debe mostrar en pantalla:
🎉 ¡Disfrute su experiencia exclusiva VIP!
3. Estadísticas a registrar:
Total de visitantes.
Total de menores de edad (menores de 18 años).
Porcentaje de menores sobre el total.
Mostrar al final un informe con todos estos datos, usando una función que calcule el porcentaje de menores.
*** INFORME FINAL DEL DÍA ***
Total de visitantes: 10  
Cantidad de menores: 3  
Porcentaje de menores: 30.00%*/
#include <stdio.h>
#define DISNEYLAND "Resumen del dia. Parque de atracciones Disneyland"

int ingresoNroVisitante();
char ingresoCodigoAtraccion();
char ingresePase();
int ingreseEdad();
float calculoPorcentajeMenores(int cantVisitantes, int cantMenores);

int main(){
  int opcion;
  int nroIngresante;
  char codigoAtraccion;
  char pase;
  int edad;
  int cantVisitantes=0;
  int cantMenores=0;
  float porcentajeMenores;

  do{
    printf("1- Ingresar cliente\n");
    printf("2- Mostrar informe del dia\n");
    printf("3- Cerrar programa\n");
    printf("Elija una de las opciones establecidas: ");
    scanf("%d",&opcion);

    switch(opcion){
      case 1:
        nroIngresante=ingresoNroVisitante();
        codigoAtraccion=ingresoCodigoAtraccion();
        pase=ingresePase();
        edad=ingreseEdad();

        cantVisitantes++;

        if ((codigoAtraccion != 'P' && codigoAtraccion != 'p') && (pase == 'V' || pase == 'v')){
          printf("Numero de visitante: %d\n",nroIngresante);
          printf("***Disfrute de su experiencia exclusiva VIP***\n");
        }

        if(edad < 18){
          cantMenores++;
        }
        break;
      case 2:
        porcentajeMenores=calculoPorcentajeMenores(cantVisitantes,cantMenores);
        printf("*****%s*****\n\n",DISNEYLAND);
        printf("Total de visitantes: %d\n",cantVisitantes);
        printf("Total de menores: %d\n",cantMenores);
        printf("Porcentaje de menores: %.2f\n\n",porcentajeMenores);
        printf("************\n");
        break;
      case 3:
        printf("Cerrando...\n");
        break;
      default:
        printf("Incorrecto. Ingrese una de las opciones establecidas\n");
        break;
    }
  }while(opcion!=3);
  
  return 0;
}

int ingresoNroVisitante(){
  int nroVisitante;
  printf("Ingrese el numero del visitante: ");
  scanf("%d",&nroVisitante);

  return nroVisitante;
}

char ingresoCodigoAtraccion(){
  char codigoAtraccion;
  printf("Ingrese el codigo de atraccion (P: Pirates, S: Space Mountain, T: Tea Cups): ");
  scanf(" %c",&codigoAtraccion);

  return codigoAtraccion;
}

char ingresePase(){
  char pase;
  printf("Ingrese el codigo de pase (V: VIP, R: regular): ");
  scanf(" %c",&pase);

  return pase;
}

int ingreseEdad(){
  int edad;
  printf("Ingrese su edad: ");
  scanf("%d",&edad);

  return edad;
}

float calculoPorcentajeMenores(int cantVisitantes, int cantMenores){
  if(cantVisitantes==0){
    return 0.0;
  }

  float resultado = ((float)cantMenores/cantVisitantes) * 100;

  return resultado;
}