#include <stdio.h>

void ejercicio1() {
    for (int i = 1; i <= 10; i++) printf("%d\n", i);
}

void ejercicio2() {
    for (int i = 10; i >= 1; i--) printf("%d\n", i);
}

void ejercicio3() {
    for (int i = 2; i <= 20; i += 2) printf("%d\n", i);
}

void ejercicio4() {
    int suma = 0;
    for (int i = 1; i <= 100; i++) suma += i;
    printf("Suma total: %d\n", suma);
}

void ejercicio5() {
    int n = 5;
    for (int i = 1; i <= 10; i++) printf("%d x %d = %d\n", n, i, n * i);
}

void ejercicio6() {
    int n;
    printf("Ingresa un número: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) printf("%d x %d = %d\n", n, i, n * i);
}

void ejercicio7() {
    int n, f = 1;
    printf("Ingresa un número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) f *= i;
    printf("Factorial de %d es: %d\n", n, f);
}

void ejercicio8() {
    for (char c = 'A'; c <= 'Z'; c++) printf("%c\n", c);
}

void ejercicio9() {
    for (int i = 3; i <= 100; i += 3) printf("%d\n", i);
}

void ejercicio10() {
    int suma = 0;
    for (int i = 1; i <= 10; i++) suma += i * i;
    printf("Suma de cuadrados: %d\n", suma);
}
