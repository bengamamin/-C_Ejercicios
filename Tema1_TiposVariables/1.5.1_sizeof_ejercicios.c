// archivo: 1.5_sizeof_ejercicios.c
#include <stdio.h>

struct Persona {
    char nombre[30];
    int edad;
    float altura;
};

int main() {
    int x = 5;
    float y = 3.14;
    char c = 'A';
    int arreglo[10];
    struct Persona p;

    printf("sizeof(int): %lu\n", sizeof(int));
    printf("sizeof(float): %lu\n", sizeof(float));
    printf("sizeof(char): %lu\n", sizeof(char));
    printf("sizeof(x): %lu\n", sizeof(x));
    printf("sizeof(y): %lu\n", sizeof(y));
    printf("sizeof(c): %lu\n", sizeof(c));
    printf("sizeof(arreglo): %lu\n", sizeof(arreglo));
    printf("sizeof(arreglo[0]): %lu\n", sizeof(arreglo[0]));
    printf("Total elementos en arreglo: %lu\n", sizeof(arreglo) / sizeof(arreglo[0]));
    printf("sizeof(struct Persona): %lu\n", sizeof(struct Persona));
    printf("sizeof(p): %lu\n", sizeof(p));

    return 0;
}
