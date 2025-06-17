/*.El río Paraná presenta una histórica bajante en todo su cauce, y no se registran valores similares durante
abril desde hace más de 130 años. El nivel del agua apenas alcanza los 70 centímetros en algunos
sectores. Esta situación produce grandes pérdidas económicas, debido a que afecta en gran medida al
transporte fluvial. Las autoridades del gobierno desean conocer información de las alturas del río, a
efectos de relacionarlas con las pérdidas producidas. La Prefectura cuenta con los datos de la altura
máxima mensual del río Paraná, organizadas en dos series:
- Serie1: mayo/18 a abril/19
- Serie 2: mayo/19 a abril/20
Se requiere un informe con lo siguiente:
- cuál fue la menor altura en cada una de las dos series, y en qué mes ocurrió
- en qué serie se dio la menor altura.*/
#include <stdio.h>
#define SERIES 2
#define MESES 2

//Usamos paremetros para la altura y una constante de los meses que tenemos
void ingresoDatos(float altura[SERIES][MESES], const char meses[MESES][15]);
void encontrarMenor(float altura[SERIES][MESES], const char mes[MESES][15]);

int main(){
  float altura[SERIES][MESES];
  const char meses[MESES][15] = {"Mayo/18", "Abril/19"}; //Declaramos cuales meses tenemos

  ingresoDatos(altura,meses);
  encontrarMenor(altura,meses);

  return 0;
}

void ingresoDatos(float altura[SERIES][MESES], const char mes[MESES][15]){
  for(int i = 0; i < SERIES; i++){
    printf("Ingrese la altura de la serie %d\n",i+1);
    for(int j = 0; j < MESES; j++){
      printf("Mes %s: ",mes[j]);
      scanf("%f",&altura[i][j]);
    }
  }
}

void encontrarMenor(float altura[SERIES][MESES], const char mes[MESES][15]){
  float menor = altura[0][0];
  int posicionSerie = 0;
  int posicionMes = 0;

  for(int i = 0; i < SERIES; i++){
    for(int j = 0; j < MESES; j++){
      if(altura[i][j] < menor){
        menor = altura[i][j];
        posicionSerie = i+1;
        posicionMes = j; //Almacenamos la posicion j en la variable 
      }
    }
  }
  printf("La serie con menor medida es la serie: %d\n",posicionSerie);
  printf("Corresponde al mes: %s\n",mes[posicionMes]); //LLamamos a mes con indice j que lo almacena posicionMes
}