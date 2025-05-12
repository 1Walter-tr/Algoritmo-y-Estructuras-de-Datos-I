/*Se dispone de un termómetro para medir con exactitud la temperatura en un determinado lugar. Se 
desea una aplicación que permita ingresar un valor de temperatura y muestre un mensaje que indique 
la sensación térmica, considerando los rangos siguientes: 
Rango de temperatura 
[-10, 10) 
Sensación térmica 
Mucho frío 
[10, 15) 
[15, 25) 
Poco frío 
Temperatura normal 
[25, 30) 
[30, 45) 
Poco calor 
Mucho calor*/
#include <stdio.h>

void rangoTemperaturas(float temperatura);

int main(){
  float temperatura;

  printf("Ingrese la temperatura actual: ");
  scanf("%f",&temperatura);

  rangoTemperatura(temperatura);

  return 0;
}

void rangoTemperatura(float temperatura){
  if(temperatura >= -10 && temperatura < 10){
    printf("Mucho frio\n");
  }else if(temperatura >= 10 && temperatura < 15){
    printf("Poco frio\n");
  }else if(temperatura >= 15 && temperatura < 25){
    printf("Temperatura normal\n");
  }else if(temperatura >= 25 && temperatura < 30){
    printf("Poco calor\n");
  }else if(temperatura >= 30 && temperatura < 45){
    printf("Mucho calor\n");
  }

}