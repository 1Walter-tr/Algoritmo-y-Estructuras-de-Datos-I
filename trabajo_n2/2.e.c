/*Escribir un programa que contenga las siguientes funciones: 
a) Una función que devuelva la mitad de un número 
mitadDe( 10 ) → 5 
b) Una función que devuelva el doble de un número 
dobleDe( 5 ) → 10  
c) Una función que devuelva el triple de un número 
tripleDe( 5 ) → 15 
d) Una función que devuelva el anterior de un número que recibe 
anteriorDe( 10 ) → 9 
e) Una función que devuelva el posterior de un número que recibe 
posteriorDe( 10 ) → 11 
f) Una función que devuelva el posterior del doble de un número. ¡Podemos utilizar 
funciones que ya hicimos! Pista: Multiplicar un número por 2 y sumar 1.*/
#include <stdio.h>

//Variable global
int numero;

void ingresarNumero();
void mitadDe();
void dobleDe();
void tripleDe();
void anteriorDe();
void posteriorDe();
void posteriorDelDoble();
void mostrarDatos();

int main(){
  ingresarNumero();
  mostrarDatos();

  return 0;
}

void ingresarNumero(){
  printf("Ingrese un número: ");
  scanf("%d", &numero);
}

void mitadDe(){
  printf("Mitad de %d: %.2f\n", numero, (float)numero / 2);
}

void dobleDe(){
  printf("Doble de %d: %d\n", numero, numero * 2);
}

void tripleDe(){
  printf("Triple de %d: %d\n", numero, numero * 3);
}

void anteriorDe(){
  printf("Anterior de %d: %d\n", numero, numero - 1);
}

void posteriorDe(){
  printf("Posterior de %d: %d\n", numero, numero + 1);
}

void posteriorDelDobleDe(){
  printf("Posterior del doble de %d: %d\n", numero, (numero * 2) + 1);
}

void mostrarDatos(){
    mitadDe();
    dobleDe();
    tripleDe();
    anteriorDe();
    posteriorDe();
    posteriorDelDobleDe();
}

