# Tabla de Tipos de Datos en C

| Tipo de dato            | Tamaño (bytes) | Formato `printf` | Rango con signo                  | Rango sin signo                |
|-------------------------|----------------|-------------------|----------------------------------|-------------------------------|
| `char`                  | 1              | `%c`, `%d`        | -128 a 127                       | 0 a 255                       |
| `unsigned char`         | 1              | `%c`, `%u`        | —                                | 0 a 255                       |
| `short int`             | 2              | `%hd`             | -32,768 a 32,767                 | 0 a 65,535                    |
| `unsigned short int`    | 2              | `%hu`             | —                                | 0 a 65,535                    |
| `int`                   | 4              | `%d`, `%x`, `%o`  | -2,147,483,648 a 2,147,483,647   | 0 a 4,294,967,295             |
| `unsigned int`          | 4              | `%u`, `%x`, `%o`  | —                                | 0 a 4,294,967,295             |
| `long int`              | 4 u 8          | `%ld`             | -2,147,483,648 a 2,147,483,647   | 0 a 4,294,967,295             |
| `unsigned long int`     | 4 u 8          | `%lu`             | —                                | 0 a 4,294,967,295             |
| `long long int`         | 8              | `%lld`            | -9.2 cuatrillones a +9.2 cuatrillones | 0 a 18 cuatrillones       |
| `unsigned long long`    | 8              | `%llu`            | —                                | 0 a 18 cuatrillones           |
| `float`                 | 4              | `%f`, `%e`, `%g`  | ~ ±1.2×10⁻³⁸ a ±3.4×10³⁸        | —                             |
| `double`                | 8              | `%lf`, `%e`, `%g` | ~ ±2.2×10⁻³⁰⁸ a ±1.8×10³⁰⁸       | —                             |
| `long double`           | 12–16          | `%Lf`             | ±1.2×10⁻⁴⁹³² a ±1.1×10⁴⁹³²       | —                             |
| `char[]` (cadena)       | depende        | `%s`              | —                                | —                             |
| `void *` (puntero)      | 8 (x64)        | `%p`              | —                                | Dirección de memoria          |

---

> Esta tabla es referencia de formatos y tamaños para usar `printf`, tipos y rangos.
