/*3. El Ministerio de Salud de la Argentina lleva un registro diario de nuevos casos de COVID 19 de los últimos
3 meses: marzo, abril y mayo. Cuenta con los datos mes, día y cantidad de nuevos casos. Necesita
conocer el total de casos nuevos en cada mes. Además, desea saber la mayor cantidad de casos nuevos y
a que día y mes corresponde.
Mostrar en pantalla las cantidades diarias en cada mes, junto al total mensual de la sucursal.
*Nota:
- Utilizar una matriz para almacenar la cantidad de casos por mes y día.
- Utilizar un vector para obtener el total mensual de casos.*/
#include <stdio.h>
#define  MES 3
#define DIAS 2

void ingresoDatos(int pacientes[MES][DIAS]);
void sumarContagios(int pacientes[MES][DIAS], int contagiosMes[MES]);
void mostrarInforme(int pacientes[MES][DIAS], int contagiosMes[MES]);


int main(){
  int pacientes[MES][DIAS];
  int contagioMes[MES];
  
  ingresoDatos(pacientes);
  sumarContagios(pacientes,contagioMes);
  mostrarInforme(pacientes,contagioMes);

  return 0;
}

void ingresoDatos(int pacientes[MES][DIAS]){
  for(int i = 0; i < MES; i++){
    printf("Ingrese los contagios del mes %d\n",i+1);
    for(int j = 0; j < DIAS; j++){
      printf("Dia %d: ",j+1);
      scanf("%d",&pacientes[i][j]);
    }
  }
}


void sumarContagios(int pacientes[MES][DIAS], int contagiosMes[MES]){
  for(int i = 0; i < MES; i++){
    contagiosMes[i] = 0;
    for(int j = 0; j < DIAS; j++){
      contagiosMes[i]+=pacientes[i][j];
    }
  }
}

void mostrarInforme(int pacientes[MES][DIAS], int contagiosMes[MES]){
  for(int i = 0; i < MES; i++){
    printf("**Mes %d**\n\n",i+1);
    for(int j = 0; j < DIAS; j++){
      printf("Dia %d: %d\n",j+1,pacientes[i][j]);
    }
    printf("\n");
  }

  printf("***Suma total de cada mes***\n");

  for(int i = 0; i < MES; i++){
    printf("Mes %d: Contagios: %d\n",i+1,contagiosMes[i]);
  }
}