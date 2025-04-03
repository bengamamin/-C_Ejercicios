// Archivo: Tema2_ControlFlujo/2.5_if_ejercicios.c

#include <stdio.h>

void ejercicio1() {
    // Pedir un número y decir si es positivo
    int n;
    printf("Número: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("Es positivo\n");
    }
}

void ejercicio2() {
    // Pedir un número y decir si es positivo o negativo
    int n;
    printf("Número: ");
    scanf("%d", &n);
    if (n >= 0)
        printf("Positivo\n");
    else
        printf("Negativo\n");
}

void ejercicio3() {
    // Verificar si un número es múltiplo de 3
    int n;
    printf("Número: ");
    scanf("%d", &n);
    if (n % 3 == 0) {
        printf("Múltiplo de 3\n");
    } else {
        printf("No es múltiplo de 3\n");
    }
}

void ejercicio4() {
    // Pedir una edad y clasificar
    int edad;
    printf("Edad: ");
    scanf("%d", &edad);
    if (edad < 13) {
        printf("Niño\n");
    } else if (edad < 18) {
        printf("Adolescente\n");
    } else {
        printf("Adulto\n");
    }
}

void ejercicio5() {
    // Comparar 3 números e imprimir el mayor
    int a, b, c;
    printf("Tres números: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("Mayor: %d\n", a);
    else if (b >= c)
        printf("Mayor: %d\n", b);
    else
        printf("Mayor: %d\n", c);
}

void ejercicio6() {
    // Pedir una letra y verificar si es vocal
    char letra;
    printf("Letra: ");
    scanf(" %c", &letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("Es vocal\n");
    else
        printf("No es vocal\n");
}

void ejercicio7() {
    // Verificar si un año es bisiesto
    int año;
    printf("Año: ");
    scanf("%d", &año);
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0))
        printf("Es bisiesto\n");
    else
        printf("No es bisiesto\n");
}

int main() {
    ejercicio1();
    return 0;
