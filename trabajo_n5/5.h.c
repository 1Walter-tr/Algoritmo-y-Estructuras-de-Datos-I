/*Un supermercado cuenta con el importe total facturado en cada mes del año 2023 en sus 6 sucursales.
Desea conocer el mayor monto de venta y a qué sucursal corresponde, generar un vector cuyos elementos sean la suma de
ventas mensuales de cada sucursal, a fin de obtener la venta anual por sucursal.
Mostrar en pantalla las ventas de cada sucursal en cada mes, junto al total anual de la sucursal.*/
#include <stdio.h>
#define SUCURSALES 3
#define MESES 2

void ingresoDatos(float ganancias[SUCURSALES][MESES]);
void mostrarMeses(float ganancias[SUCURSALES][MESES]);
void encontrarMesMayor(float ganancias[SUCURSALES][MESES]);
void calculoSucursal(float ganancias[SUCURSALES][MESES]);

int main(){
  float ganancias[SUCURSALES][MESES];

  ingresoDatos(ganancias);
  mostrarMeses(ganancias);
  encontrarMesMayor(ganancias);
  calculoSucursal(ganancias);

  return 0;
} 

void ingresoDatos(float ganancias[SUCURSALES][MESES]){
  for(int i = 0; i < SUCURSALES; i++){
    printf("Sucursal %d\n",i+1);
    for(int j = 0; j < MESES; j++){
      printf("Mes %d: ",j+1);
      scanf("%f",&ganancias[i][j]);
    }
  }
}

void mostrarMeses(float ganancias[SUCURSALES][MESES]){
  for(int i = 0; i < SUCURSALES; i++){
    printf("Sucursal %d\n",i+1);
    for(int j = 0; j < MESES; j++){
      printf("Mes %.2f\n\n",ganancias[i][j]);
    }
  }
  printf("\n\n");
}

void encontrarMesMayor(float ganancias[SUCURSALES][MESES]){
  float mayor = ganancias[0][0];
  int posicionSucursal = 0;
  int posicionMes = 0;

  for(int i = 0; i < SUCURSALES; i++){
    for(int j = 0; j < MESES; j++){
      if(ganancias[i][j] > mayor){
        mayor = ganancias[i][j];
        posicionSucursal = i+1;
        posicionMes = j+1;
      }
    }
  }
  printf("La sucursal con mayor ingresos en un mes es la %d\n",posicionSucursal);
  printf("Corresponde al mes %d\n\n",posicionMes);
}

void calculoSucursal(float ganancias[SUCURSALES][MESES]){
  float mayorSuma = 0; //Guarda la suma mas alta encontrada de una sucursal
  int sucursalMayor = 0; //Guarda el numero de sucursal encontrada

  for(int i = 0; i < SUCURSALES; i++){
    float suma = 0;
    for(int j = 0; j < MESES; j++){
      suma+=ganancias[i][j];
    }
    if(i == 0 || suma > mayorSuma){
      mayorSuma = suma; //Guardamos la suma mas alta
      sucursalMayor = i + 1; //Guardamos que sucursal tiene esa suma
    }
  }

  printf("La sucursal con mayor ganancia es la sucursal %d con un total de %.2f",sucursalMayor,mayorSuma);
}