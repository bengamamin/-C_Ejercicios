// 1. Mostrar dirección con &
#include <stdio.h>
void ejercicio1() {
    int a = 10;
    printf("Dirección de a: %p\n", &a);
}

// 2. Crear puntero y mostrar su valor
void ejercicio2() {
    int a = 20;
    int *p = &a;
    printf("Valor apuntado por p: %d\n", *p);
}

// 3. Modificar valor con puntero
void ejercicio3() {
    int a = 5;
    int *p = &a;
    *p = 50;
    printf("Nuevo valor de a: %d\n", a);
}

// 4. Tamaño del puntero y valor apuntado
void ejercicio4() {
    int x = 7;
    int *p = &x;
    printf("sizeof(ptr): %lu\n", sizeof(p));
    printf("sizeof(*ptr): %lu\n", sizeof(*p));
}

// 5. Intercambio con punteros
void ejercicio5() {
    int a = 4, b = 9;
    int *p1 = &a, *p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("a = %d, b = %d\n", a, b);
}

// 6. Puntero sin inicializar
void ejercicio6() {
    int *p;
    printf("Puntero sin inicializar: %p\n", p); // Advertencia: valor indefinido
}

// 7. Dirección y contenido de varios tipos
void ejercicio7() {
    int a = 3;
    float f = 2.5;
    char c = 'Z';

    printf("int: %p -> %d\n", &a, a);
    printf("float: %p -> %.2f\n", &f, f);
    printf("char: %p -> %c\n", &c, c);
}

// 8. Puntero a puntero
void ejercicio8() {
    int x = 100;
    int *p = &x;
    int **pp = &p;

    printf("Valor: %d\n", **pp);
    printf("Dirección original: %p\n", *pp);
}

// 9. RAM visual (variable -> dirección -> valor)
void ejercicio9() {
    int x = 8;
    int *p = &x;

    printf("[x: %p] = %d\n", &x, x);
    printf("[p: %p] -> [%p] = %d\n", &p, p, *p);
}

// 10. Función que modifica valor por puntero
void cambiar(int *n) {
    *n = 123;
}
void ejercicio10() {
    int a = 0;
    cambiar(&a);
    printf("Nuevo valor de a: %d\n", a);
}

int main() {
    ejercicio1(); ejercicio2(); ejercicio3();
    ejercicio4(); ejercicio5(); ejercicio6();
    ejercicio7(); ejercicio8(); ejercicio9();
    ejercicio10();
    return 0;
}
