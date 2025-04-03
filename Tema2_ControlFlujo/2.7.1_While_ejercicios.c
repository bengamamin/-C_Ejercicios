// === CONTADORES ===
// Ejercicio 1: Contar del 1 al 10
int i = 1;
while (i <= 10) {
    printf("%d\n", i);
    i++;
}

// Ejercicio 2: Contar del 10 al 1 (decreciente)
int j = 10;
while (j >= 1) {
    printf("%d\n", j);
    j--;
}

// === ACUMULADORES ===
// Ejercicio 3: Sumar 5 números ingresados por el usuario
int k = 0, num, suma = 0;
while (k < 5) {
    printf("Número: ");
    scanf("%d", &num);
    suma += num;
    k++;
}
printf("Suma total: %d\n", suma);

// Ejercicio 4: Calcular el promedio de 4 números
int total = 0, count = 0, entrada;
while (count < 4) {
    printf("Número: ");
    scanf("%d", &entrada);
    total += entrada;
    count++;
}
printf("Promedio: %.2f\n", (float)total / 4);

// === VALIDACIÓN DE ENTRADA ===
// Ejercicio 5: Asegurar ingreso entre 1 y 100
int valor;
do {
    printf("Ingrese un número (1-100): ");
    scanf("%d", &valor);
} while (valor < 1 || valor > 100);
printf("Valor válido: %d\n", valor);

// === VALOR CENTINELA ===
// Ejercicio 6: Sumar números hasta que se ingrese 0
int dato, total2 = 0;
printf("Ingrese números (0 para salir): ");
scanf("%d", &dato);
while (dato != 0) {
    total2 += dato;
    scanf("%d", &dato);
}
printf("Suma final: %d\n", total2);

// === BANDERA ===
// Ejercicio 7: Buscar el número 7 en una secuencia
int encontrado = 0, n, x = 0;
while (x < 5 && !encontrado) {
    printf("Ingresa número: ");
    scanf("%d", &n);
    if (n == 7) {
        encontrado = 1;
        printf("¡Número encontrado!\n");
    }
    x++;
}

// === MENÚ INTERACTIVO ===
// Ejercicio 8: Menú de opciones
int op = 0;
while (op != 3) {
    printf("1. Saludo\n2. Ayuda\n3. Salir\nOpción: ");
    scanf("%d", &op);
    if (op == 1) printf("Hola\n");
    else if (op == 2) printf("¿Qué necesitas?\n");
}

// === OTROS ===
// Ejercicio 9: Contar pares en 5 números
int pares = 0, val, idx = 0;
while (idx < 5) {
    printf("Número: ");
    scanf("%d", &val);
    if (val % 2 == 0) pares++;
    idx++;
}
printf("Total pares: %d\n", pares);

// ========== CONTADOR Y ACUMULADOR COMBINADOS ==========
int i = 0, num, suma = 0;
while (i < 5) {
    printf("Número #%d: ", i+1);
    scanf("%d", &num);
    suma += num;
    i++;
}
printf("Suma total: %d\n", suma);
printf("Promedio: %.2f\n", (float)suma / 5);

// ========== MAYOR Y MENOR ==========
int mayor, menor, x = 0, entrada;
printf("Ingresa número: ");
scanf("%d", &entrada);
mayor = menor = entrada;

while (x < 4) {
    scanf("%d", &entrada);
    if (entrada > mayor) mayor = entrada;
    if (entrada < menor) menor = entrada;
    x++;
}
printf("Mayor: %d\n", mayor);
printf("Menor: %d\n", menor);

// ========== VALIDACIÓN DE ENTRADA ==========
int edad;
printf("Ingresa edad (1-120): ");
scanf("%d", &edad);
while (edad < 1 || edad > 120) {
    printf("Edad inválida. Intente otra vez: ");
    scanf("%d", &edad);
}
printf("Edad válida: %d\n", edad);

// ========== BANDERA AVANZADA ==========
int encontrado = 0, val, intentos = 0;
while (intentos < 6 && !encontrado) {
    printf("Número secreto (entre 1 y 10): ");
    scanf("%d", &val);
    if (val == 7) {
        printf("¡Correcto!\n");
        encontrado = 1;
    }
    intentos++;
}
if (!encontrado) printf("Número no encontrado.\n");

// ========== CENTINELA Y CONTEO ==========
int suma = 0, contador = 0, entrada;
printf("Ingrese números (0 para salir):\n");
scanf("%d", &entrada);
while (entrada != 0) {
    suma += entrada;
    contador++;
    scanf("%d", &entrada);
}
printf("Ingresaste %d números. Suma: %d\n", contador, suma);
