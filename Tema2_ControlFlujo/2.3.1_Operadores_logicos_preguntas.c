// Archivo: Tema2_ControlFlujo/2.3_operadores_logicos_ejercicios.c

#include <stdio.h>

void ejercicio1() {
    // Verificar si una persona puede votar (mayor de edad y tiene cédula)
    int edad;
    char tieneCedula;
    printf("Edad: ");
    scanf("%d", &edad);
    printf("¿Tiene cédula? (s/n): ");
    scanf(" %c", &tieneCedula);

    if (edad >= 18 && tieneCedula == 's') {
        printf("Puede votar\n");
    } else {
        printf("No puede votar\n");
    }
}

void ejercicio2() {
    // Verificar si un número está fuera del rango [10, 50]
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (num < 10 || num > 50) {
        printf("Fuera del rango\n");
    } else {
        printf("Dentro del rango\n");
    }
}

void ejercicio3() {
    // Verificar si un usuario puede entrar (mayor de edad o con pase especial)
    int edad;
    char pase;
    printf("Edad: ");
    scanf("%d", &edad);
    printf("¿Tiene pase especial? (s/n): ");
    scanf(" %c", &pase);
    if (edad >= 18 || pase == 's') {
        printf("Puede entrar\n");
    } else {
        printf("Acceso denegado\n");
    }
}

void ejercicio4() {
    // Negar una condición: si NO tiene clave correcta
    int clave;
    printf("Ingrese su clave (4321): ");
    scanf("%d", &clave);
    if (!(clave == 4321)) {
        printf("Clave incorrecta\n");
    } else {
        printf("Acceso permitido\n");
    }
}

void ejercicio5() {
    // Combinación de varias condiciones
    int edad;
    float nota;
    printf("Edad: ");
    scanf("%d", &edad);
    printf("Nota final: ");
    scanf("%f", &nota);

    if ((edad >= 18 && nota >= 7.0) || nota == 10.0) {
        printf("Aprueba\n");
    } else {
        printf("No aprueba\n");
    }
}

int main() {
    ejercicio1();
    return 0;
}
