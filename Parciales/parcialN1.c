/*La empresa YPF necesita un programa para gestionar las ventas  de combustible realizadas en el día. Por cada cliente se registran 
los siguientes datos: Número de atención, código de tipo de Combustible: (1- Súper, 2-Infinia, 3-Diesel) e importe facturado.
Se necesita obtener un listado de los clientes que cargaron nafta Súper  y que pagaron más de $ 50.000. Ejemplo de salida en pantalla: 
*** Nro de atención: 25 - Importe facturado: $55.000 ***
Al finalizar la jornada, se debe realizar un cierre de caja e informar la cantidad de clientes que cargaron combustible en el
 día, el importe total facturado y el porcentaje que representa la cantidad de clientes que cargaron nafta súper sobre el total de clientes.
El formato del informe debe ser el siguiente (Utilizar una constante para el título): 
  Estación de Servicio YPF*/
#include <stdio.h>
#define TITULO "Servicio YPF"

int ingresoNroAtencion();
float ingresoMontoPagar();
int ingresoTipoCombustible();

int main(){
  int opcion;
  int nroAtencion;
  float montoPagar;
  int tipoCombstible;
  int cantPersonas = 0;
  int cantPersonasSuper = 0;
  int cantClientesSuper = 0;
  float totalFacturado = 0; 
  
  do{
    printf("1-Ingresar cliente\n");
    printf("2-Mostrar listado de personas que cargaron super y monto superior a 50000\n");
    printf("3-Mostrar total facturado en el dia caja\n");
    printf("4-Cerrar el programa\n");
    printf("Elija una de las opciones establecidas: ");
    scanf("%d",&opcion);

    switch(opcion)
    {
    case 1:
      nroAtencion = ingresoNroAtencion();
      montoPagar = ingresoMontoPagar();
      tipoCombstible = ingresoTipoCombustible();

      cantPersonas++;
      totalFacturado+=montoPagar;
      printf("***Datos cliente***\n\n");
      printf("Nro de atencion: %d\n",nroAtencion);
      printf("Monto a pagar: %.2f\n",montoPagar);
      printf("Tipo de combustible: %d\n",tipoCombstible);
      printf("\n\n***********************\n\n");
      if(tipoCombstible==1 && montoPagar > 50000){
        cantPersonasSuper++;
      }
      
      if(tipoCombstible==1){
        cantClientesSuper++;
      }
      break;
    case 2:
      printf("La cantidad de personas que cumple con el requisito es de: %d\n",cantPersonas);
      break;
    case 3:
      printf("****%s****\n",TITULO);
      printf("El tota facturado es de %.2f\n",totalFacturado);
      if(cantPersonas == 0){
          printf("\nNo se ingresaron clientes.\n");
        }else{
          float porcentaje = (cantClientesSuper * 100.0) / cantPersonas;
          printf("Porcentaje de clientes que cargaron SUPER: %.2f%%\n", porcentaje);
        }
      break;
    case 4:
      printf("Saliendo...\n");
      break;
    default:
      printf("Opcion invalida. Elija una de las opcion predeterminada\n");
      break;
    }
  }while(opcion!=4);


  return 0;
}

int ingresoNroAtencion(){
  int nroAtencion;  
  printf("Ingrese su numero de atencion: ");
  scanf("%d",&nroAtencion);

  return nroAtencion;
}

float ingresoMontoPagar(){
  float monto;
  printf("Ingrese el monto a pagar: ");
  scanf("%f",&monto);

  return monto;
}

int ingresoTipoCombustible(){
  int tipoCombustible;
  printf("Ingrese el metodo de pago (1-Super, 2-Infinia, 3-Diesel): ");
  scanf("%d",&tipoCombustible);

  return tipoCombustible;
}
