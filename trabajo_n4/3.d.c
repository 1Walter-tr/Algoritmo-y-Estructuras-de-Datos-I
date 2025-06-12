/*2. El formato de presentación de un artículo científico exige que el título no exceda la cantidad de 20
palabras y esté escrito en mayúsculas. Escribir un programa que ingrese por teclado el título del trabajo
(el título termina con un punto). Escriba una función que reciba como parámetro el título y retorne la
cantidad de palabras que contiene. Además, utilice otra función que convierta el título a mayúsculas. Al
final muestre en pantalla el título en mayúscula e indique con una leyenda si excede las 20 palabras*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarPalabras(char titulo[]);
void convertirMayusculas(char titulo[]);

int main(){
  char titulo[200];

  printf("Ingrese el titulo del articulo (finaliza con un punto): ");
  fgets(titulo,200,stdin);

  int longitud = strlen(titulo);//Guardamos la cantidad de caracteres del titulo en la variable
  if(titulo[longitud-1] != ' '){//Verificamos si al final de la cadena no hay un punto
    titulo[longitud] = '.';//Si es asi agreagamos un punto al final de la cadena
    titulo[longitud+1] = '\0';//Se agrega el caracter nulo para cerra correctamente la cadena
  }

  int cantidadPalabras = contarPalabras(titulo);
  convertirMayusculas(titulo);

  printf("Titulo en mayusculas: %s\n",titulo);
  printf("Cantidad de palabras: %d\n",cantidadPalabras);

  if(cantidadPalabras>20){
    printf("El titulo se excedio en la cantidad de palabras\n");
  }else{
    printf("El titulo no se excedio en palabras\n");
  }
  
  return 0;
}

int contarPalabras(char titulo[]){
  int contador = 0;//Inicializamos un contador que seria la cantidad de palabras

  for(int i = 0; titulo[i] != '.'; i++){//Recorremos toda la frase hasta encontrar el punto final
    if(titulo[i] == ' '){
      contador++;//Cuando hay un espacio en blanco es porque hay otra palabra nueva
    }
  }

  return contador + 1;//Retornamos la cantidad de palabras mas uno ya que la primera palabra no nos cuenta porque no tiene espacio en blanco
}

void convertirMayusculas(char titulo[]){
  for(int i = 0; titulo[i] != '\0'; i++){//Recorremos toda la frase hasta que haya un caracter nulo
    titulo[i] = toupper(titulo[i]);//Accedemos a cada letra de la frase para convertirla en mayuscula
  }
}