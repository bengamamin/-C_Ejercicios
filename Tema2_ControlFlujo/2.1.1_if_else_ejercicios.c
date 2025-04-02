// Archivo: Tema2_ControlFlujo/2.1_if_else_ejercicios.c

#include <stdio.h>

void ejercicio1() {
    // Verificar si un número es positivo
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("El número es positivo.\n");
    }
}

void ejercicio2() {
    // Verificar si un número es par o impar
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Es par.\n");
    } else {
        printf("Es impar.\n");
    }
}

void ejercicio3() {
    // Verificar si un número es positivo, negativo o cero
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("Positivo\n");
    } else if (num < 0) {
        printf("Negativo\n");
    } else {
        printf("Es cero\n");
    }
}

void ejercicio4() {
    // Determinar si una persona es niño, adolescente o adulto
    int edad;
    printf("Ingrese la edad: ");
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
    // Comparar dos números e indicar el mayor
    int a, b;
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("El mayor es: %d\n", a);
    } else if (b > a) {
        printf("El mayor es: %d\n", b);
    } else {
        printf("Son iguales\n");
    }
}

void ejercicio6() {
    // Verificar si una nota está entre 0 y 100
    int nota;
    printf("Ingrese una nota: ");
    scanf("%d", &nota);
    if (nota >= 0 && nota <= 100) {
        printf("Nota válida\n");
    } else {
        printf("Nota inválida\n");
    }
}

void ejercicio7() {
    // Verificar si un año es bisiesto
    int anio;
    printf("Ingrese un año: ");
    scanf("%d", &anio);
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        printf("Es bisiesto\n");
    } else {
        printf("No es bisiesto\n");
    }
}

void ejercicio8() {
    // Validar una contraseña simple
    int clave;
    printf("Ingrese la clave (1234): ");
    scanf("%d", &clave);
    if (clave == 1234) {
        printf("Acceso concedido\n");
    } else {
        printf("Clave incorrecta\n");
    }
}

void ejercicio9() {
    // Verificar si un número está dentro del rango 10-50
    int n;
    printf("Número: ");
    scanf("%d", &n);
    if (n >= 10 && n <= 50) {
        printf("Dentro del rango\n");
    } else {
        printf("Fuera del rango\n");
    }
}

void ejercicio10() {
    // Verificar si una letra es vocal
    char letra;
    printf("Ingrese una letra: ");
    scanf(" %c", &letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("Es una vocal\n");
    } else {
        printf("No es vocal\n");
    }
}

int main() {
    ejercicio1();
    return 0;
}
