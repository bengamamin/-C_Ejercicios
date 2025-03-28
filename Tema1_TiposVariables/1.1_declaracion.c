// Subtema 1.1 – Declaración y Asignación

#include <stdio.h>

// Ejercicio 1
void ejercicio1() {
    int edad = 25;
    printf("Edad: %d\n", edad);
}

// Ejercicio 2
void ejercicio2() {
    float altura = 1.75;
    printf("Altura: %.2f\n", altura);
}

// Ejercicio 3
void ejercicio3() {
    char letra = 'A';
    printf("Letra: %c\n", letra);
}

// Ejercicio 4
void ejercicio4() {
    int x;
    x = 10;
    printf("x: %d\n", x);
}

// Ejercicio 5
void ejercicio5() {
    int edad = 30;
    printf("Edad: %d\n", edad);
}

// Ejercicio 6
void ejercicio6() {
    int a = 1, b = 2, c = 3;
    printf("a=%d, b=%d, c=%d\n", a, b, c);
}

// Ejercicio 7
void ejercicio7() {
    unsigned int puntos = 100;
    printf("Puntos: %u\n", puntos);
}

// Ejercicio 8
void ejercicio8() {
    short s = 30000;
    long l = 1000000;
    printf("short: %d, long: %ld\n", s, l);
}

// Ejercicio 9
void ejercicio9() {
    const float PI = 3.1416;
    printf("PI: %.4f\n", PI);
}

// Ejercicio 10
void ejercicio10() {
    int numeroDeEstudiantes = 35;
    printf("Estudiantes: %d\n", numeroDeEstudiantes);
}

// Ejercicio 11
void ejercicio11() {
    int base = 5, altura = 10;
    int area = base * altura;
    printf("Área: %d\n", area);
}

// Ejercicio 12
void ejercicio12() {
    int vidas = 3;
    vidas = vidas - 1;
    printf("Vidas restantes: %d\n", vidas);
}

// Ejercicio 13
void ejercicio13() {
    char inicial = 'L';
    printf("Inicial: %c\n", inicial);
}

// Ejercicio 14
void ejercicio14() {
    const float PI = 3.14;
    float radio = 2.5;
    float area = PI * radio * radio;
    printf("Área del círculo: %.2f\n", area);
}

// Ejercicio 15
void ejercicio15() {
    {
        int secreto = 42;
        printf("Secreto: %d\n", secreto);
    }
}

// main para ejecutar pruebas
int main() {
    ejercicio1();
    // activá los siguientes uno por uno si querés probar todos
    // ejercicio2();
    // ejercicio3();
    // ...
    return 0;
}
