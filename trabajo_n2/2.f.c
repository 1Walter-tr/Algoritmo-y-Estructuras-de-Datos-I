/*Escribir un programa que contenga una función que reciba el peso y la altura de una 
persona y retorne el valor correspondiente al índice de masa corporal (IMC), que 
se calcula dividiendo el peso (en kilogramos) por la estatura al cuadrado (en metros). La fórmula 
sería: IMC = peso (kg)/ [estatura (m)]2 
imc(64.5, 1.66) → 23.40 
El programa debe incluir una función que solicite al usuario peso y estatura y permita probar la 
función que calcula el IMC.*/
#include <stdio.h>

float peso;
float altura;

void ingresoDatos();
float calculoImc();
void mostrarDatos();

int main(){
  ingresoDatos();
  mostrarDatos();

  return 0;
}

void ingresoDatos(){
  printf("Ingrese su peso: ");
  scanf("%f",&peso);
  printf("Ingrese su altura: ");
  scanf("%f",&altura);
}

float calculoImc(){
  float imc = peso / (altura * altura);

  return imc;
}

void mostrarDatos(){
  float imc = calculoImc();
  printf("Su IMC es de : %.2f\n",imc);
}