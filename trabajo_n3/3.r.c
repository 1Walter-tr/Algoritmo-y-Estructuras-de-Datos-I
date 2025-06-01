/*La asignatura Algoritmos 1 al final del dictado cuenta con las notas del 1er. y 2do. parcial de todos sus 
alumnos.  Se requiere determinar la categoría que le corresponde a cada uno de ellos: “Promocionó”, 
“Regularizó”, o “Libre”. Se cuenta con los datos nro. de libreta universitaria y las notas el primer y 
segundo parcial. El parcial se aprueba con nota >= 6. Las condiciones para cada categoría son:  - Para promocionar: aprobados los 2(dos) parciales y el promedio de ambos debe ser mayor o igual 
a 7 (siete).  
- Para regularizar: aprobados los 2(dos) parciales. 
- Libre: si desaprueba al menos un parcial. 
Para cada alumno, mostrar:  libreta universitaria, las notas de ambos parciales y la categoría 
correspondiente.  
*Nota: La solución debe incluir:  
- Una función que devuelva true en el caso que el parcial esté aprobado y false en caso contrario. 
- Una función que retorne el promedio de 2 notas que se reciben como parámetros.*/
#include <stdio.h>
#include <stdbool.h>

int ingresoNroLibreta();//Funcion para ingresar la libreta universitaria
float ingresoPrimerParcial();//Funcion para el ingreso de su primera nota
float ingresoSegundoParcial();//Funcion para el ingreso de su segunda nota
bool aprobado(int nota);//Funcion para devolver true si la nota es aprobada
float calcularPromedio(float nota1, float nota);//Funcion para calcular el promedio de las notas

int main(){
  int nroLibreta = ingresoNroLibreta();
  float notaPrimerParcial = ingresoPrimerParcial();
  float notaSegundoParcial = ingresoSegundoParcial();

  printf("Nro de libreta universitaria: %d\n",nroLibreta);
  printf("Nota del primer parcial: %.2f\n",notaPrimerParcial);
  printf("Nota del segundo parcial: %.2f\n",notaSegundoParcial);

  bool primerAprobado = aprobado(notaPrimerParcial);//Decimos que la variable bool sera true si cumple con la funcion
  bool segundoAprobado = aprobado(notaSegundoParcial);//Decimos que la variable bool sera true si cumple con la funcion
  float promedioNotas = calcularPromedio(notaPrimerParcial,notaSegundoParcial);

  if(primerAprobado == true && segundoAprobado == true){
    if(promedioNotas >= 7){
      printf("Promociono la materia\n");
    }else{
      printf("Regularizo la materia\n");
    }
  }else{
    printf("Quedo libre en la materia\n");
  }

  return 0;
}

int ingresoNroLibreta(){
  int nroLibreta;
  printf("Ingrese el numero de su libreta universitaria: ");
  scanf("%d",&nroLibreta);

  return nroLibreta;
}

float ingresoPrimerParcial(){
  float notaPrimerParcial;
  printf("Ingrese la nota de su primer parcial: ");
  scanf("%f",&notaPrimerParcial);

  return notaPrimerParcial;
}

float ingresoSegundoParcial(){
  float notaSegundoParcial;
  printf("Ingrese la nota de su segundo parcial: ");
  scanf("%f",&notaSegundoParcial);

  return notaSegundoParcial;
}

bool aprobado(int nota){//El resultado sera true si la nota es >= 6
  return nota >= 6;
}

float calcularPromedio(float nota1, float nota2){
  float promedio = (nota1 + nota2) / 2.00;

  return promedio;
}