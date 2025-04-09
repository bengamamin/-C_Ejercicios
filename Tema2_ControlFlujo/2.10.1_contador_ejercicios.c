#include <stdio.h>

void ejercicio1() {
    // Contar cuántos números se ingresan
    int contador = 0, num;
    while (contador < 5) {
        printf("Ingresa un número: ");
        scanf("%d", &num);
        contador++;
    }
    printf("Total de números ingresados: %d\n", contador);
}

void ejercicio2() {
    // Acumular suma de 5 números
    int suma = 0, num;
    for (int i = 0; i < 5; i++) {
        printf("Número: ");
        scanf("%d", &num);
        suma += num;
    }
    printf("Suma total: %d\n", suma);
}

void ejercicio3() {
    // Buscar si hay un número par usando bandera
    int encontrado = 0, num;
    for (int i = 0; i < 5; i++) {
        printf("Número: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            encontrado = 1;
        }
    }
    if (encontrado) printf("Hay al menos un número par\n");
    else printf("No se ingresaron números pares\n");
}

void ejercicio4() {
    // Leer números hasta ingresar -1 (centinela)
    int num, suma = 0;
    while (1) {
        printf("Número (-1 para salir): ");
        scanf("%d", &num);
        if (num == -1) break;
        suma += num;
    }
    printf("Suma total: %d\n", suma);
}

void ejercicio5() {
    // Contar cuántos positivos y negativos se ingresan
    int num, positivos = 0, negativos = 0;
    for (int i = 0; i < 6; i++) {
        printf("Número: ");
        scanf("%d", &num);
        if (num > 0) positivos++;
        else if (num < 0) negativos++;
    }
    printf("Positivos: %d, Negativos: %d\n", positivos, negativos);
}
