// Archivo: Tema2_ControlFlujo/2.6_switch_ejercicios.c

#include <stdio.h>

void ejercicio1() {
    // Día de la semana según número (1-7)
    int dia;
    printf("Ingresa un número (1-7): ");
    scanf("%d", &dia);
    switch(dia) {
        case 1: printf("Lunes\n"); break;
        case 2: printf("Martes\n"); break;
        case 3: printf("Miércoles\n"); break;
        case 4: printf("Jueves\n"); break;
        case 5: printf("Viernes\n"); break;
        case 6: printf("Sábado\n"); break;
        case 7: printf("Domingo\n"); break;
        default: printf("Número inválido\n");
    }
}

void ejercicio2() {
    // Convertir número a palabra (1-5)
    int n;
    printf("Número del 1 al 5: ");
    scanf("%d", &n);
    switch(n) {
        case 1: printf("Uno\n"); break;
        case 2: printf("Dos\n"); break;
        case 3: printf("Tres\n"); break;
        case 4: printf("Cuatro\n"); break;
        case 5: printf("Cinco\n"); break;
        default: printf("Fuera de rango\n");
    }
}

void ejercicio3() {
    // Categoría por letra (char)
    char cat;
    printf("Ingresa categoría (A, B, C): ");
    scanf(" %c", &cat);
    switch(cat) {
        case 'A': printf("Categoría Alta\n"); break;
        case 'B': printf("Categoría Media\n"); break;
        case 'C': printf("Categoría Baja\n"); break;
        default: printf("Categoría desconocida\n");
    }
}

void ejercicio4() {
    // Menú de operaciones básicas
    int opcion, a = 10, b = 5;
    printf("1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\nOpción: ");
    scanf("%d", &opcion);
    switch(opcion) {
        case 1: printf("Resultado: %d\n", a + b); break;
        case 2: printf("Resultado: %d\n", a - b); break;
        case 3: printf("Resultado: %d\n", a * b); break;
        case 4:
            if (b != 0) printf("Resultado: %d\n", a / b);
            else printf("División por cero no permitida\n");
            break;
        default: printf("Opción inválida\n");
    }
}

void ejercicio5() {
    // Grado según nota numérica
    int nota;
    printf("Nota (0-10): ");
    scanf("%d", &nota);
    switch(nota) {
        case 10:
        case 9: printf("Excelente\n"); break;
        case 8:
        case 7: printf("Muy bien\n"); break;
        case 6:
        case 5: printf("Regular\n"); break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0: printf("Insuficiente\n"); break;
        default: printf("Nota inválida\n");
    }
}

void ejercicio6() {
    // Switch anidado
    int tipo, opcion;
    printf("1. Usuario\n2. Admin\nTipo: ");
    scanf("%d", &tipo);
    switch(tipo) {
        case 1:
            printf("1. Ver\n2. Editar\nOpción: ");
            scanf("%d", &opcion);
            switch(opcion) {
                case 1: printf("Ver Usuario\n"); break;
                case 2: printf("Editar Usuario\n"); break;
                default: printf("Opción inválida\n");
            }
            break;
        case 2:
            printf("Admin activo\n");
            break;
        default: printf("Tipo inválido\n");
    }
}

void ejercicio7() {
    // Switch sin break (efecto de caída)
    int valor;
    printf("Valor (1-3): ");
    scanf("%d", &valor);
    switch(valor) {
        case 1: printf("Uno\n");
        case 2: printf("Dos\n");
        case 3: printf("Tres\n");
        default: printf("Fin\n");
    }
}

int main() {
    ejercicio1();
    return 0;
}
