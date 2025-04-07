// =================== 2.8 do while – Ejercicios resueltos ===================

#include <stdio.h>
#include <string.h>

void ejercicio1() {
    // Validar que un número sea mayor a 0
    int num;
    do {
        printf("Ingrese un número positivo: ");
        scanf("%d", &num);
    } while (num <= 0);
    printf("Número válido: %d\n", num);
}

void ejercicio2() {
    // Pedir letras hasta que se ingrese 'x'
    char letra;
    do {
        printf("Ingrese una letra (x para salir): ");
        scanf(" %c", &letra);
    } while (letra != 'x');
    printf("Saliste con 'x'\n");
}

void ejercicio3() {
    // Pedir clave hasta que sea correcta
    char clave[10];
    do {
        printf("Ingrese la clave (1234): ");
        scanf("%s", clave);
    } while (strcmp(clave, "1234") != 0);
    printf("Clave correcta\n");
}

void ejercicio4() {
    // Menú interactivo
    int opcion;
    do {
        printf("\nMenú:\n");
        printf("1. Saludar\n");
        printf("2. Despedir\n");
        printf("3. Salir\n");
        printf("Elija una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: printf("¡Hola!\n"); break;
            case 2: printf("¡Adiós!\n"); break;
            case 3: printf("Saliendo...\n"); break;
            default: printf("Opción inválida\n");
        }
    } while(opcion != 3);
}

void ejercicio5() {
    // Leer números hasta que el usuario diga "no"
    int num, suma = 0;
    char respuesta[4];
    do {
        printf("Ingresa un número: ");
        scanf("%d", &num);
        suma += num;
        printf("¿Desea continuar? (si/no): ");
        scanf("%s", respuesta);
    } while(strcmp(respuesta, "no") != 0);
    printf("Suma total: %d\n", suma);
}

int main() {
    ejercicio1();
    // ejercicio2();
    // ejercicio3();
    // ejercicio4();
    // ejercicio5();
    return 0;
}
