# Tema 7 – Conversión entre bases usando C (`printf`, `scanf`, `strtol`)

---

## ¿Qué vas a aprender?

- Cómo mostrar un número en **diferentes bases** con `printf`
- Cómo leer entradas con bases usando `scanf`
- Cómo convertir cadenas (strings) a enteros con bases personalizadas (`strtol`)

---

## Formatos especiales en `printf`

| Formato | Descripción               | Ejemplo (`n = 255`) |
|---------|---------------------------|----------------------|
| `%d`    | Decimal                   | `255`               |
| `%o`    | Octal                     | `377`               |
| `%x`    | Hexadecimal (minúscula)  | `ff`                |
| `%X`    | Hexadecimal (mayúscula)  | `FF`                |
| `%#x`   | Hex con prefijo `0x`     | `0xff`              |
| `%#o`   | Octal con prefijo `0`    | `0377`              |

---

## Formatos en `scanf`

- `%i`: Detecta la base automáticamente si hay prefijo:
  - `0` → octal
  - `0x` → hexadecimal
  - `sin prefijo` → decimal

---

## Conversión con `strtol`

### ¿Qué hace?

Convierte una **cadena de texto (char[])** a un número entero  
y le podés indicar la base (**2 a 36**).

### Ejemplos:

- `"1010"` con base 2 → `10`
- `"A3"` con base 16 → `163`
- `"77"` con base 8 → `63`

---

## ¿Dónde se usa esto?

- En programas que aceptan **entradas binarias, octales o hexadecimales**
- Para escribir **calculadoras de conversión**
- En análisis de entradas personalizadas
- En herramientas CLI, parsers, scripts
- En CTFs y exploits (leer direcciones en hex, escribir bytes en binario)

---

## Ventajas de saber esto

- Controlás **cómo se imprime cada valor**
- Entendés cómo **C interpreta las bases**
- Podés leer y escribir como lo hace un hacker

---

## Frase para grabar

> **`%x` y `%o` te muestran el número como hexadecimal y octal.  
> `strtol()` te convierte cualquier string en el número que representa en su base.**

---
