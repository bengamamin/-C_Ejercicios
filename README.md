Patrón Universal de Pensamiento en C

Este archivo contiene la guía fundamental para razonar y programar en C de forma eficiente, aplicable en **todas las fases y temas**, desde arrays hasta punteros, structs, archivos, memoria, listas, etc.

---

## 1. Estructura Mental Base

Todo programa o ejercicio puede dividirse en tres grandes etapas:

```
1. Entrada    → Leer datos (teclado, archivo, memoria)
2. Proceso    → Lógica, recorridos, validaciones, cálculos
3. Salida     → Mostrar o retornar resultados
```

---

## 2. Preguntas Universales para Razonar

Aplicá este checklist en cualquier enunciado antes de programar:

| Pregunta clave                                | ¿Qué activa?                  |
|----------------------------------------------|-------------------------------|
| ¿Trabajo con varios datos?                   | for, array, struct[], listas  |
| ¿Ingreso datos desde teclado o archivo?      | scanf, fgets, fopen           |
| ¿Comparo o busco algo?                       | if, strcmp, switch            |
| ¿Modifico o elimino algo?                    | if, asignación, lógica extra  |
| ¿Calculo algo (suma, promedio, etc.)?        | acumuladores, divisiones      |

---

## 3. Elementos Universales (Siempre Repetidos)

Estos se usan en **todas las fases**:

| Componente     | Uso común                     |
|----------------|-------------------------------|
| `for`/`while`  | Recorrer arrays, estructuras  |
| `if`/`switch`  | Tomar decisiones              |
| `scanf`/`fgets`| Leer datos                    |
| `printf`       | Mostrar resultados            |
| `char[]`       | Manejar texto                 |
| `int`, `float` | Datos primitivos              |
| `struct`       | Agrupar campos relacionados   |
| `*puntero`     | Acceder y modificar memoria   |
| `functions`    | Modularizar y reutilizar      |

---

## 4. Guía para Razonar el Proceso

Preguntate:

1. ¿Qué tengo que hacer con los datos?
   - buscar, contar, calcular, modificar, mostrar...

2. ¿Qué tipo de datos manejo?
   - 1 solo (int, string), muchos (array), estructurados (struct)

3. ¿Cómo se recorren?
   - con `for`, `while`, o con punteros

4. ¿Cómo tomo decisiones?
   - `if`, `switch`, funciones de comparación

5. ¿Dónde están mis datos?
   - Teclado (scanf), archivo (fopen), memoria (malloc)

6. ¿Dónde van mis resultados?
   - Pantalla (`printf`), archivo (`fprintf`), retorno de función

7. ¿Qué librerías o funciones me sirven?
   - `<string.h>`, `<stdio.h>`, `<stdlib.h>`, `<math.h>`

---

## 5. Lo que cambia entre fases

| Cambia esto...            | Porque...                              |
|---------------------------|----------------------------------------|
| Tipo de estructura        | Nuevas herramientas (`struct`, `list`) |
| Nivel de abstracción      | Vas de variables simples a complejas   |
| Librerías específicas     | `string.h`, `math.h`, `ctype.h`        |
| Tipos de datos            | Usás más punteros, archivos, structs   |

---

## 6. Cómo usar este patrón

1. Leé el enunciado.
2. Pasalo por las preguntas clave.
3. Elegí el patrón base adecuado.
4. Escribí el esqueleto del programa.
5. Completá solo lo necesario.

**Nunca memorices código. Razoná siempre.**
