/*Escribir en C un programa que inicialice una 
variable de tipo float y otra de tipo double. 
Asignarle el valor -123000.567. Formatear la salida 
para que el valor de la variable se visualice: 
- En su formato original 
- Utilizando 2 caracteres para la parte decimal 
- Solo la parte entera*/
#include <stdio.h>

int main(){
  float tFloat = -123000.567;
  double tDouble = -123000.567;

  printf("****Variable float con valor negativo****\n");
  printf("En su formato original: %f\n",tFloat);
  printf("Utilizando 2 caracteres para la parte decimal: %.2f\n",tFloat);
  printf("Solo la parte entera: %d\n\n",(int)tFloat);
  
  printf("****Variable double con valor negativo****\n");
  printf("En su formato original: %lf\n",tDouble);
  printf("Utilizando 2 caracteres para la parte decimal: %.2lf\n",tDouble);
  printf("Solo la parte entera: %d\n\n",(int)tDouble);

  return 0;
}