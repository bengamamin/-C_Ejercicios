// Archivo: tema1_7_const_ejercicios.c

#include <stdio.h>

void ejercicio1() {
    // 1. Declarar una constante int y mostrar su valor.
    const int EDAD = 25;
    printf("Edad: %d\n", EDAD);
}

void ejercicio2() {
    // 2. Declarar una constante float y usarla en una operación.
    const float PI = 3.1416;
    float radio = 2.5;
    float area = PI * radio * radio;
    printf("Área del círculo: %.2f\n", area);
}

void ejercicio3() {
    // 3. Usar #define para declarar una constante.
    #define MAX_USUARIOS 100
    printf("Máximo de usuarios: %d\n", MAX_USUARIOS);
}

void ejercicio4() {
    // 4. Mostrar diferencia entre #define y const en cuanto a tipo
    #define VALOR 10
    const int valor2 = 10;
    printf("VALOR (define): %d\n", VALOR);
    printf("valor2 (const): %d\n", valor2);
}

void ejercicio5() {
    // 5. Intentar modificar una constante
    const int numero = 5;
    // numero = 10; // Error: no se puede modificar una constante
    printf("Constante no modificable: %d\n", numero);
}

void ejercicio6() {
    // 6. Declarar un puntero a constante
    int x = 10;
    const int *p = &x;
    printf("Valor apuntado: %d\n", *p);
    // *p = 20;  // ❌ No permitido
}

void ejercicio7() {
    // 7. Declarar una dirección constante (puntero constante)
    int x = 10;
    int *const p = &x;
    *p = 20;  // ✔️ permitido
    printf("Nuevo valor de x: %d\n", *p);
    // p = &otro; // ❌ No permitido
}

void ejercicio8() {
    // 8. Const en parámetros de función
    void imprimir(const char *mensaje) {
        // mensaje[0] = 'H'; // ❌ No permitido
        printf("%s\n", mensaje);
    }
    imprimir("Hola Mundo");
}

int main() {
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();
    ejercicio7();
    ejercicio8();
    return 0;
}
