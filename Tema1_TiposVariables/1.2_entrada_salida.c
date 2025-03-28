// Subtema 1.2 – Entrada y salida de datos (scanf y printf)

#include <stdio.h>

// Ejercicio 1 – Leer y mostrar un número entero
// Aprendés a usar scanf para capturar un int.
void ejercicio1() {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Edad ingresada: %d\n", edad);
}

// Ejercicio 2 – Leer y mostrar un número decimal
void ejercicio2() {
    float altura;
    printf("Ingrese su altura: ");
    scanf("%f", &altura);
    printf("Altura ingresada: %.2f\n", altura);
}

// Ejercicio 3 – Leer y mostrar un carácter
void ejercicio3() {
    char letra;
    printf("Ingrese una letra: ");
    scanf(" %c", &letra);
    printf("Letra ingresada: %c\n", letra);
}

// Ejercicio 4 – Leer y mostrar una palabra (sin espacios)
void ejercicio4() {
    char nombre[20];
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Nombre ingresado: %s\n", nombre);
}

// Ejercicio 5 – Leer nombre completo con espacios
void ejercicio5() {
    char nombreCompleto[50];
    printf("Ingrese su nombre completo: ");
    scanf(" %[^\n]", nombreCompleto);  // Lee hasta ENTER
    printf("Nombre completo: %s\n", nombreCompleto);
}

// Ejercicio 6 – Leer dos enteros y mostrarlos sumados
void ejercicio6() {
    int a, b;
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    printf("Suma: %d\n", a + b);
}

// Ejercicio 7 – Leer un carácter y mostrarlo como número ASCII
void ejercicio7() {
    char letra;
    printf("Ingrese un carácter: ");
    scanf(" %c", &letra);
    printf("Código ASCII: %d\n", letra);
}

// Ejercicio 8 – Mostrar un número en distintos formatos
void ejercicio8() {
    int num = 255;
    printf("Decimal: %d, Hex: %x, Octal: %o\n", num, num, num);
}

// Ejercicio 9 – Leer varios tipos de datos en una sola línea
void ejercicio9() {
    char nombre[20];
    int edad;
    float peso;
    printf("Ingrese nombre, edad y peso: ");
    scanf("%s %d %f", nombre, &edad, &peso);
    printf("Nombre: %s, Edad: %d, Peso: %.1f\n", nombre, edad, peso);
}

// Ejercicio 10 – Mostrar texto formateado con alineación
void ejercicio10() {
    printf("|%-10s|%5d|%8.2f|\n", "Juan", 25, 72.5);
}

// Ejercicio 11 – Mostrar caracteres especiales
void ejercicio11() {
    printf("Línea 1\nLínea 2\nTabulado\tAquí\n");
}

// Ejercicio 12 – Mostrar comillas, porcentaje y barra
void ejercicio12() {
    printf("Comillas: \"Texto\"\nPorcentaje: %%\nBarra: \\\n");
}

// Ejercicio 13 – Leer dos caracteres separados
void ejercicio13() {
    char a, b;
    printf("Ingrese dos letras: ");
    scanf(" %c %c", &a, &b);
    printf("Letras: %c y %c\n", a, b);
}

// Ejercicio 14 – Leer un número y mostrarlo con dos decimales
void ejercicio14() {
    float salario;
    printf("Ingrese su salario: ");
    scanf("%f", &salario);
    printf("Salario: %.2f\n", salario);
}

// Ejercicio 15 – Leer valores y calcular promedio
void ejercicio15() {
    float n1, n2, n3;
    printf("Ingrese 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    float promedio = (n1 + n2 + n3) / 3;
    printf("Promedio: %.2f\n", promedio);
}

// Función main
int main() {
    ejercicio1();
    // Activá los demás para probar uno por uno
    // ejercicio2();
    // ejercicio3();
    // ...
    return 0;
}
