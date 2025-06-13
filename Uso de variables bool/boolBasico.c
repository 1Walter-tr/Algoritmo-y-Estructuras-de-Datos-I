//En este caso se usa una variable bool que solo tendra un caso ya que es un uso basico
#include <stdio.h>
#include <stdbool.h>

int main(){
  bool miVariable = true;

  if(miVariable == true){
    printf("La variable es true\n");
  }else{
    printf("La variable es false\n");
  }//Nunca imprimira este mensaje porque la variable tiene el valor de true y no se cambia

  return 0;
}