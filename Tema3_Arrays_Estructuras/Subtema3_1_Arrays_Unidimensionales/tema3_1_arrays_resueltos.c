#include <stdio.h>

void ejercicio1() {
    // Declarar un array de 5 enteros y asignarles valores manualmente. Mostrar todos.
    int numeros[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, numeros[i]);
    }
}

void ejercicio2() {
    // Llenar un array de 5 enteros desde teclado con un bucle for.
    int numeros[5];
    for (int i = 0; i < 5; i++) {
        printf("Ingrese valor %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: %d\n", i+1, numeros[i]);
    }
}

void ejercicio3() {
    // Pedir 5 números y mostrarlos uno por uno (scanf + printf separados).
    int numeros[5];
    for (int i = 0; i < 5; i++) {
        printf("Ingrese número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("Los números ingresados son:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

void ejercicio4() {
    // Mostrar el mayor número de un array.
    int numeros[5] = {12, 45, 7, 98, 21};
    int mayor = numeros[0];
    for (int i = 1; i < 5; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    printf("El mayor número es: %d\n", mayor);
}

void ejercicio5() {
    // Mostrar el menor número de un array.
    int numeros[5] = {12, 45, 7, 98, 21};
    int menor = numeros[0];
    for (int i = 1; i < 5; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    printf("El menor número es: %d\n", menor);
}


// 6. Sumar y calcular promedio
void ejercicio6() {
    int arr[5], suma = 0;
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &arr[i]);
        suma += arr[i];
    }
    printf("Suma: %d, Promedio: %.2f\n", suma, suma / 5.0);
}

// 7. Invertir un array
void ejercicio7() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Invertido: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 8. Copiar arrays
void ejercicio8() {
    int origen[5] = {1, 2, 3, 4, 5}, copia[5];
    for (int i = 0; i < 5; i++) {
        copia[i] = origen[i];
    }
    printf("Array copiado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", copia[i]);
    }
    printf("\n");
}

// 9. Contar pares e impares
void ejercicio9() {
    int arr[5], pares = 0, impares = 0;
    for (int i = 0; i < 5; i++) {
        printf("Num %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) pares++;
        else impares++;
    }
    printf("Pares: %d, Impares: %d\n", pares, impares);
}

// 10. Contar cuÃ¡ntos mayores que cierto nÃºmero
void ejercicio10() {
    int arr[5], contador = 0, limite;
    printf("LÃ­mite: ");
    scanf("%d", &limite);
    for (int i = 0; i < 5; i++) {
        printf("Num %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] > limite) contador++;
    }
    printf("Mayores que %d: %d\n", limite, contador);
}

// 11. Buscar un valor especÃ­fico
void ejercicio11() {
    int arr[5], buscar, encontrado = 0;
    printf("Buscar: ");
    scanf("%d", &buscar);
    for (int i = 0; i < 5; i++) {
        printf("Num %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] == buscar) encontrado = 1;
    }
    printf(encontrado ? "Encontrado\n" : "No encontrado\n");
}

// 12. Modificar un valor por Ã­ndice
void ejercicio12() {
    int arr[5] = {10, 20, 30, 40, 50}, indice, nuevo;
    printf("Ãndice a modificar (0-4): ");
    scanf("%d", &indice);
    printf("Nuevo valor: ");
    scanf("%d", &nuevo);
    arr[indice] = nuevo;
    printf("Array modificado: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 13. Insertar un nuevo valor al final
void ejercicio13() {
    int arr[6] = {1, 2, 3, 4, 5}, nuevo = 99;
    arr[5] = nuevo;
    printf("Nuevo array: ");
    for (int i = 0; i < 6; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 14. Eliminar por Ã­ndice (desplazar)
void ejercicio14() {
    int arr[5] = {10, 20, 30, 40, 50}, index;
    printf("Ãndice a eliminar (0-4): ");
    scanf("%d", &index);
    for (int i = index; i < 4; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Array modificado: ");
    for (int i = 0; i < 4; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 15. Detectar duplicados (bandera)
void ejercicio15() {
    int arr[5], duplicado = 0;
    for (int i = 0; i < 5; i++) {
        printf("Num %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                duplicado = 1;
                break;
            }
        }
    }
    printf(duplicado ? "Duplicado detectado\n" : "Sin duplicados\n");
}

int main() {
    // Llamar aquÃ­ a los ejercicios deseados para probar
    ejercicio6();
    return 0;
}
