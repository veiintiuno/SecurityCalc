#include <stdio.h>
#include <string.h>
#include "../inc/calculadora.h"

int main() {
    int opcion;
    float a, b;
    int continuar = 1;
    char historial[5][100] = {0};
    int historial_index = 0;
    
    while (continuar == 1) {
        printf("Bienvenido a la calculadora, introduce el numero de la operacion que desea:\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Ver historial\n");
        printf("6. Salir\n");
        scanf("%d", &opcion);
        
        if (opcion == 6) {
            printf("Saliendo de la calculadora...\n");
            break;
        }
        
        if (opcion == 5) {
            printf("Tus últimas operaciones:\n");
            for (int i = 0; i < 5; i++) {
                if (strlen(historial[i]) > 0) {
                    printf("%d: %s\n", i+1, historial[i]);
                }
            }
            printf("Continuar? (1=Si, 0=No): \n");
            scanf("%d", &continuar);
            continue;
        }
        
        printf("Introduce los dos numeros: ");
        scanf("%f %f", &a, &b);
        
        if (opcion == 1) {
            float resultado = sumar(a, b);
            printf("El resultado es %.2f\n", resultado);
            char operacion_str[100];
            sprintf(operacion_str, "%.2f + %.2f = %.2f", a, b, resultado);
            strcpy(historial[historial_index], operacion_str);
            historial_index = (historial_index + 1) % 5;
        } else if (opcion == 2) {
            float resultado = restar(a, b);
            printf("El resultado es %.2f\n", resultado);
            char operacion_str[100];
            sprintf(operacion_str, "%.2f - %.2f = %.2f", a, b, resultado);
            strcpy(historial[historial_index], operacion_str);
            historial_index = (historial_index + 1) % 5;
        } else if (opcion == 3) {
            float resultado = multiplicar(a, b);
            printf("El resultado es %.2f\n", resultado);
            char operacion_str[100];
            sprintf(operacion_str, "%.2f * %.2f = %.2f", a, b, resultado);
            strcpy(historial[historial_index], operacion_str);
            historial_index = (historial_index + 1) % 5;
        } else if (opcion == 4) {
            if (b == 0) {
                printf("Error: division por 0\n");
            } else {
                float resultado = dividir(a, b);
                printf("El resultado es %.2f\n", resultado);
                char operacion_str[100];
                sprintf(operacion_str, "%.2f / %.2f = %.2f", a, b, resultado);
                strcpy(historial[historial_index], operacion_str);
                historial_index = (historial_index + 1) % 5;
            }
        } else {
            printf("Opcion no valida\n");
        }
        
        printf("Continuar? (1=Si, 0=No): \n");
        scanf("%d", &continuar);
    }
    
    return 0;
}