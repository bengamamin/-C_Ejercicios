# Formatos de `printf` y `scanf` en C

Tabla de referencia rápida para mostrar (printf) o leer (scanf) distintos tipos de datos en C.

---

## Enteros

| Formato | Tipo de dato           | Uso                        | Ejemplo    |
|---------|------------------------|----------------------------|------------|
| `%d`    | `int`                  | Entero con signo           | 123, -45   |
| `%i`    | `int`                  | Igual que `%d`             | 99, -77    |
| `%u`    | `unsigned int`         | Entero sin signo           | 0 a +4294M |
| `%o`    | `int` / `unsigned`     | Octal (base 8)             | 077        |
| `%x`    | `int` / `unsigned`     | Hex (minúsculas)           | 0x1a       |
| `%X`    | `int` / `unsigned`     | Hex (MAYÚSCULAS)           | 0X1A       |

---

## Reales (decimales)

| Formato | Tipo de dato        | Uso                          | Ejemplo     |
|---------|---------------------|-------------------------------|-------------|
| `%f`    | `float`, `double`   | Decimal normal                | 3.14        |
| `%.2f`  | `float`, `double`   | Decimal con 2 decimales       | 3.14        |
| `%e`    | `float`, `double`   | Notación científica (e)       | 1.2e+03     |
| `%E`    | `float`, `double`   | Notación científica (E)       | 1.2E+03     |
| `%g`    | `float`, `double`   | Auto-formato `%f` o `%e`      | 123, 1.2e+5 |
| `%G`    | `float`, `double`   | Igual a `%g` pero con `E`     | 1.2E+5      |
| `%lf`   | `double` (en scanf) | Lectura de número decimal     |             |

---

## Caracteres y cadenas

| Formato | Tipo de dato      | Uso                    | Ejemplo  |
|---------|-------------------|-------------------------|----------|
| `%c`    | `char`            | Un carácter ASCII       | 'A'      |
| `%s`    | `char[]` (string) | Cadena sin espacios     | "Linux"  |
| `%[^\n]`| `char[]`          | Cadena con espacios     | "Juan Ríos" |

---

## Punteros

| Formato | Tipo de dato     | Uso                        | Ejemplo        |
|---------|------------------|-----------------------------|----------------|
| `%p`    | `void*`          | Dirección de memoria        | 0x7ffd6abc1234 |

---

## Modificadores de longitud (avanzado)

| Mod. | Tipo de dato         | Formato                   |
|------|----------------------|---------------------------|
| `h`  | `short`              | `%hd`, `%hu`              |
| `l`  | `long`               | `%ld`, `%lu`, `%lf`       |
| `ll` | `long long`          | `%lld`, `%llu`            |
| `L`  | `long double`        | `%Lf`                     |

---

## Ejemplo resumen:

```c
printf("Letra: %c, Edad: %d, Estatura: %.2f\n", letra, edad, estatura);
