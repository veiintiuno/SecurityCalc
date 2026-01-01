#include <stdio.h>
#include "../inc/calculadora.h"

int main() {
    int opcion;
    float a, b;
    int continuar = 1;
    while (continuar ==1) {
    printf("Bienvenido a la calculadora, introduce el numero de la operacion que desea:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Salir\n");
    scanf("%d", &opcion);
    
    if(opcion == 5){
        printf("Saliendo de la calculadora...\n");
        break;
    }

    printf("Introduce los dos numeros: ");
    scanf("%f %f", &a, &b);
    
    if (opcion == 1) {
        printf("El resultado es %.2f\n", sumar(a, b));
    } else if (opcion == 2) {
        printf("El resultado es %.2f\n", restar(a, b));
    } else if (opcion == 3) {
        printf("El resultado es %.2f\n", multiplicar(a, b));
    } else if (opcion == 4) {
         if (b == 0) {
        printf("Error: division por 0\n");
        } else {
        float resultado = dividir(a, b);
        printf("El resultado es %.2f\n", resultado);
    }
    } else {
        printf("Opcion no valida\n");
    }
    printf("Continuar? (1=Si, 0=No): \n");
    scanf("%d", &continuar);
}
    return 0;  
}