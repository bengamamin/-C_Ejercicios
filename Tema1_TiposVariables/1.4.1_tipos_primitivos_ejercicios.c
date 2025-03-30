// archivo: 1.4_tipos_primitivos_ejercicios.c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // 1. int
    int edad = 25;
    printf("Edad: %d\n", edad);

    // 2. float con decimales
    float pi = 3.1416;
    printf("Valor de pi: %.2f\n", pi);

    // 3. char
    char letra = 'A';
    printf("Letra: %c\n", letra);

    // 4. sizeof
    printf("Tamaño de int: %lu bytes\n", sizeof(int));
    printf("Tamaño de float: %lu bytes\n", sizeof(float));
    printf("Tamaño de char: %lu bytes\n", sizeof(char));

    // 5. short, long, unsigned
    short s = 1000;
    long l = 1000000;
    unsigned int u = 4294967295;
    printf("Short: %hd\n", s);
    printf("Long: %ld\n", l);
    printf("Unsigned: %u\n", u);

    // 6. Límites
    printf("INT_MAX: %d\n", INT_MAX);
    printf("FLT_MAX: %e\n", FLT_MAX);

    // 7. Variables combinadas
    int edad2 = 30;
    float peso = 72.5;
    char inicial = 'B';
    printf("Edad: %d, Peso: %.2f, Inicial: %c\n", edad2, peso, inicial);

    // 8. %u con unsigned
    unsigned int votos = 1500;
    printf("Votos: %u\n", votos);

    // 9. double
    double distancia = 123456.789123;
    printf("Distancia: %.6lf\n", distancia);

    // 10. sizeof todos
    printf("sizeof short: %lu\n", sizeof(short));
    printf("sizeof long: %lu\n", sizeof(long));
    printf("sizeof double: %lu\n", sizeof(double));
    printf("sizeof unsigned int: %lu\n", sizeof(unsigned int));

    return 0;
}
