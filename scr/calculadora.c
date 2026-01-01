#include "../inc/calculadora.h"
#include <stdio.h>

float sumar(float a, float b) { return a + b; }
float restar(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) {
    if (b == 0) {
        printf("Error : division por 0\n");
        return 0;
    }
    return a / b;
}