#include <stdio.h>
#include <stdbool.h>

// Función que determina si un usuario puede ingresar al evento
bool puedeIngresar(int edad, bool tieneInvitacion) {
    return edad >= 18 || tieneInvitacion; 
    // Retorna `true` si la edad es 18 o más, o si tiene invitación
    // Si ninguna condición se cumple, retorna `false`
}

int main() {
    int edad;
    bool tieneInvitacion;

    // Ingreso de datos
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("¿Tiene invitación? (1 para sí, 0 para no): ");
    scanf("%d", &tieneInvitacion); // Captura `true` (1) o `false` (0)
    //Tenemos como predeterminado que 1 es true y false 0

    // Evaluación de acceso
    if (puedeIngresar(edad, tieneInvitacion)) {
        printf("Puede ingresar al evento.\n");
    } else {
        printf("No tiene acceso al evento.\n");
    }

    return 0;
}