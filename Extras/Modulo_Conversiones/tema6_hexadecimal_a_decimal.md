# Tema 6 – Conversión de Hexadecimal a Decimal

---

## ¿Qué es el sistema hexadecimal?

Es un sistema numérico en **base 16**, lo que significa que usa 16 símbolos:
0 1 2 3 4 5 6 7 8 9 A B C D E F
Donde:

- A = 10  
- B = 11  
- C = 12  
- D = 13  
- E = 14  
- F = 15

---

## ¿Por qué se usa el sistema hexadecimal?

- Representa 1 byte (8 bits) con solo 2 dígitos hex
- Es más compacto y legible que binario
- Se usa en direcciones de memoria, colores, registros, redes, debugging, hacking

---

## Tabla de equivalencias

| Hex | Decimal |
|-----|---------|
| 0   | 0       |
| 1   | 1       |
| 2   | 2       |
| 3   | 3       |
| 4   | 4       |
| 5   | 5       |
| 6   | 6       |
| 7   | 7       |
| 8   | 8       |
| 9   | 9       |
| A   | 10      |
| B   | 11      |
| C   | 12      |
| D   | 13      |
| E   | 14      |
| F   | 15      |

---

## ¿Cómo convertir hexadecimal a decimal?

Se multiplica cada dígito hexadecimal por una **potencia de 16**, desde la derecha hacia la izquierda.

---

## Ejemplo 1: `2A` (hexadecimal)

Posiciones:  
- `2` está en la posición 1 (16¹)  
- `A` está en la posición 0 (16⁰) → A = 10

Cálculo:  
2 × 16¹ = 32  
10 × 16⁰ = 10  
→ Total = 32 + 10 = **42 decimal**

---

## Ejemplo 2: `FF` (hexadecimal)

F = 15

15 × 16¹ = 240  
15 × 16⁰ = 15  
→ Total = 240 + 15 = **255 decimal**

---

## ¿Dónde se usa?

- Direcciones de memoria (p. ej. `0x7FFEFA00`)
- Colores en web (`#FF0000`)
- Hex editors
- Análisis forense digital
- Ingeniería inversa y exploits

---

## Frase para grabar

**Cada dígito hexadecimal vale una potencia de 16. A = 10, F = 15. Sumá y obtenés el valor decimal.**

---
