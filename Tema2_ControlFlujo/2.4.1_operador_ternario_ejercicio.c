// Archivo: Tema2_ControlFlujo/2.4_operador_ternario_ejercicios.c

#include <stdio.h>

void ejercicio1() {
    // Mostrar si una persona es mayor o menor de edad
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Eres %s\n", (edad >= 18) ? "mayor de edad" : "menor de edad");
}

void ejercicio2() {
    // Verificar si un número es par o impar
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("%d es %s\n", n, (n % 2 == 0) ? "par" : "impar");
}

void ejercicio3() {
    // Mostrar el mayor de dos números
    int a, b;
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    int mayor = (a > b) ? a : b;
    printf("El mayor es: %d\n", mayor);
}

void ejercicio4() {
    // Mostrar mensaje según nota
    float nota;
    printf("Ingrese la nota: ");
    scanf("%f", &nota);
    printf("%s\n", (nota >= 7.0) ? "Aprobado" : "Reprobado");
}

void ejercicio5() {
    // Verificar si un número está en un rango (usando ternario con condición compuesta)
    int x;
    printf("Ingrese un número: ");
    scanf("%d", &x);
    printf("Resultado: %s\n", (x >= 10 && x <= 20) ? "Dentro del rango" : "Fuera del rango");
}

int main() {
    ejercicio1();
    return 0;
}
