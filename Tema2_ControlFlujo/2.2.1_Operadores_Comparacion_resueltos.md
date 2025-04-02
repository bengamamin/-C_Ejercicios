Archivo: Tema2_ControlFlujo/2.2_operadores_comparacion_ejercicios.c

#include <stdio.h>

void ejercicio1() {
    // Comparar dos números y mostrar si son iguales
    int a, b;
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    if (a == b) {
        printf("Son iguales\n");
    } else {
        printf("Son diferentes\n");
    }
}

void ejercicio2() {
    // Verificar si un número es mayor que otro
    int x, y;
    printf("Ingrese dos números: ");
    scanf("%d %d", &x, &y);
    if (x > y) {
        printf("%d es mayor que %d\n", x, y);
    } else {
        printf("%d no es mayor que %d\n", x, y);
    }
}

void ejercicio3() {
    // Verificar si un número está entre 10 y 50
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    if (n >= 10 && n <= 50) {
        printf("Está entre 10 y 50\n");
    } else {
        printf("No está en el rango\n");
    }
}

void ejercicio4() {
    // Verificar si dos números son diferentes
    int a, b;
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    if (a != b) {
        printf("Son distintos\n");
    } else {
        printf("Son iguales\n");
    }
}

void ejercicio5() {
    // Evaluar si la edad es mayor o igual a 18
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    if (edad >= 18) {
        printf("Eres mayor de edad\n");
    } else {
        printf("Eres menor de edad\n");
    }
}

int main() {
    ejercicio1();
    return 0;
}
