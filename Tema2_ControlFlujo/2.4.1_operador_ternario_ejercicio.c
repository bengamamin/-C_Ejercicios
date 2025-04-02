// Archivo: Tema2_ControlFlujo/2.4_operador_ternario_ejercicios_completos.c

#include <stdio.h>

void ejercicio1() {
    // Mostrar si una persona es mayor o menor de edad
    int edad;
    printf("Edad: ");
    scanf("%d", &edad);
    printf("Resultado: %s\n", (edad >= 18) ? "Mayor de edad" : "Menor de edad");
}

void ejercicio2() {
    // Verificar si un número es par o impar
    int num;
    printf("Número: ");
    scanf("%d", &num);
    printf("%d es %s\n", num, (num % 2 == 0) ? "par" : "impar");
}

void ejercicio3() {
    // Mostrar el mayor de dos números
    int a, b;
    printf("Dos números: ");
    scanf("%d %d", &a, &b);
    int mayor = (a > b) ? a : b;
    printf("Mayor: %d\n", mayor);
}

void ejercicio4() {
    // Mensaje según nota
    float nota;
    printf("Nota: ");
    scanf("%f", &nota);
    printf("%s\n", (nota >= 7.0) ? "Aprobado" : "Reprobado");
}

void ejercicio5() {
    // Verificar si un número está en un rango
    int x;
    printf("Número: ");
    scanf("%d", &x);
    printf("Resultado: %s\n", (x >= 10 && x <= 20) ? "Dentro del rango" : "Fuera del rango");
}

void ejercicio6() {
    // Operación matemática dentro del ternario
    int a, b, resultado;
    printf("Dos enteros: ");
    scanf("%d %d", &a, &b);
    resultado = (a > b) ? (a - b) : (b - a);
    printf("Diferencia: %d\n", resultado);
}

void ejercicio7() {
    // Asignación condicional de cadena (punteros)
    int activo;
    printf("¿Está activo? (1/0): ");
    scanf("%d", &activo);
    char *estado = (activo) ? "Encendido" : "Apagado";
    printf("Estado: %s\n", estado);
}

void ejercicio8() {
    // Acción directa dentro del ternario (NO recomendable en producción)
    int edad;
    printf("Edad: ");
    scanf("%d", &edad);
    (edad >= 18) ? printf("Acceso permitido\n") : printf("Acceso denegado\n");
}

int main() {
    ejercicio1();
    return 0;
}
