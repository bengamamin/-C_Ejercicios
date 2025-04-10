#include <stdio.h>

// 1. Declarar una matriz y mostrar sus valores.
void ejercicio1() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// 2. Pedir datos al usuario y llenar la matriz.
void ejercicio2() {
    int m[2][2];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
}

// 3. Calcular la suma total de todos los elementos.
void ejercicio3() {
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}}, suma = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            suma += m[i][j];
    printf("Suma total: %d", suma);
}

// 4. Buscar un número dentro de la matriz.
void ejercicio4() {
    int m[2][3] = {{1, 5, 9}, {2, 4, 8}}, buscar = 4, encontrado = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            if (m[i][j] == buscar) encontrado = 1;
    printf(encontrado ? "Encontrado" : "No encontrado");
}

// 5. Mostrar la matriz transpuesta.
void ejercicio5() {
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 2; i++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

// 6. Mostrar el número mayor y su posición.
void ejercicio6() {
    int m[2][2] = {{3, 9}, {6, 4}}, mayor = m[0][0], fila = 0, col = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if (m[i][j] > mayor) {
                mayor = m[i][j];
                fila = i;
                col = j;
            }
    printf("Mayor: %d en [%d][%d]", mayor, fila, col);
}

// 7. Contar cuántos valores pares hay.
void ejercicio7() {
    int m[2][2] = {{1, 4}, {6, 3}}, pares = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if (m[i][j] % 2 == 0) pares++;
    printf("Cantidad pares: %d", pares);
}

// 8. Sumar los elementos de cada fila.
void ejercicio8() {
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        int suma = 0;
        for (int j = 0; j < 3; j++) suma += m[i][j];
        printf("Fila %d: %d\n", i, suma);
    }
}

// 9. Sumar los elementos de cada columna.
void ejercicio9() {
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int j = 0; j < 3; j++) {
        int suma = 0;
        for (int i = 0; i < 2; i++) suma += m[i][j];
        printf("Columna %d: %d\n", j, suma);
    }
}

// 10. Contar cuántos elementos son mayores que 10.
void ejercicio10() {
    int m[2][2] = {{8, 12}, {5, 15}}, cont = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if (m[i][j] > 10) cont++;
    printf("Mayores que 10: %d", cont);
}

// 11. Cambiar los valores negativos por 0.
void ejercicio11() {
    int m[2][2] = {{5, -3}, {-1, 4}};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if (m[i][j] < 0) m[i][j] = 0;
    for (int i = 0; i < 2; i++, printf("\n"))
        for (int j = 0; j < 2; j++) printf("%d ", m[i][j]);
}

// 12. Mostrar solo la diagonal principal.
void ejercicio12() {
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf(i == j ? "%d " : "  ", m[i][j]);
        printf("\n");
    }
}

// 13. Mostrar solo la diagonal secundaria.
void ejercicio13() {
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf((i + j == 2) ? "%d " : "  ", m[i][j]);
        printf("\n");
    }
}

// 14. Contar ceros en la matriz.
void ejercicio14() {
    int m[2][2] = {{0, 2}, {3, 0}}, ceros = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if (m[i][j] == 0) ceros++;
    printf("Cantidad de ceros: %d", ceros);
}

// 15. Copiar una matriz a otra.
void ejercicio15() {
    int m1[2][2] = {{1, 2}, {3, 4}}, m2[2][2];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            m2[i][j] = m1[i][j];
    for (int i = 0; i < 2; i++, printf("\n"))
        for (int j = 0; j < 2; j++) printf("%d ", m2[i][j]);
}

int main() {
    ejercicio15();
    return 0;
}
