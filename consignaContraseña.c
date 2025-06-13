#include <stdio.h>

int ingresoDatos(); // Función que devuelve el número de personas
void mostrarCantidad(int cantidad); // Función para mostrar el valor

int main(){
    int cantidadPersonas = ingresoDatos(); // Guardamos el retorno
    mostrarCantidad(cantidadPersonas); // Pasamos el valor a la función de muestra
    return 0;
}

int ingresoDatos(){
    int cantidad;
    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &cantidad);
    return cantidad; // Retornamos el valor ingresado
}

void mostrarCantidad(int cantidad){
    printf("La cantidad de personas ingresadas es: %d\n", cantidad); // Mostramos el valor
}