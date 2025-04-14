BÚSQUEDA EN FASE 3 – Qué cambia según el subtema

Esta tabla resume cómo cambia la búsqueda (estructura + comparación) entre los subtemas del módulo **3.x (Estructuras de Datos)**.

---

| Subtema 3.x   | ¿Qué estructura uso?     | ¿Cómo se hace la comparación?                | Ejemplo práctico                         |
|---------------|--------------------------|-----------------------------------------------|-------------------------------------------|
| **3.1 Arrays**            | `int[]`, `float[]`             | `if (arr[i] == valor)`                        | Buscar número específico en array         |
| **3.2 Matrices**          | `int m[f][c]`                  | `if (m[i][j] == valor)`                       | Buscar un valor específico en matriz      |
| **3.3 Strings**           | `char[]`, `char cadena[50]`    | `strcmp(a, b) == 0` o `strchr(cadena, 'x')`   | Ver si dos cadenas son iguales            |
| **3.4 Struct**            | `struct Persona p;`            | `strcmp(p.nombre, buscar) == 0`              | Comparar nombre de una persona            |
| **3.5 Array de structs**  | `struct Persona p[n];`         | `strcmp(p[i].nombre, buscar) == 0`           | Buscar una persona por su nombre          |
| **3.6 CRUD en structs**   | `struct[]` con contador        | `strcmp(p[i].campo, buscar) == 0`            | Buscar para modificar o eliminar          |

---

## Conclusión

> La estructura del `for + if` se mantiene, pero lo que cambia es:
> - El tipo de datos (int, char, struct)
> - La forma de comparar (==, strcmp, etc.)

