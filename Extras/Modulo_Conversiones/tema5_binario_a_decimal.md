# Tema 5 – Conversión de Binario a Decimal

---

## ¿Qué es el sistema binario?

Es un sistema numérico en **base 2**, donde solo se usan los dígitos:
0 y 1

Cada posición representa una **potencia de 2**, desde la derecha hacia la izquierda.

---

## Tabla de posiciones en binario

| Bit | Potencia | Valor |
|-----|----------|-------|
| 0   | 2⁰       | 1     |
| 1   | 2¹       | 2     |
| 2   | 2²       | 4     |
| 3   | 2³       | 8     |
| 4   | 2⁴       | 16    |
| 5   | 2⁵       | 32    |
| 6   | 2⁶       | 64    |
| 7   | 2⁷       | 128   |

---

## ¿Cómo convertir de binario a decimal?

Se suman las potencias de 2 correspondientes a los dígitos que son 1.  
Se ignoran los que son 0.

---

## Ejemplo 1: `1010` (binario)

Posiciones (potencias):   3   2   1   0  
Dígitos:                  1   0   1   0

Cálculo:  
1 × 2³ = 8  
0 × 2² = 0  
1 × 2¹ = 2  
0 × 2⁰ = 0  

→ Total = 8 + 0 + 2 + 0 = **10 decimal**

---

## Ejemplo 2: `11111111` (binario)

Todos los bits están en 1:  
2⁷ + 2⁶ + 2⁵ + 2⁴ + 2³ + 2² + 2¹ + 2⁰  
= 128 + 64 + 32 + 16 + 8 + 4 + 2 + 1 = **255 decimal**

---

## ¿Dónde se usa esta conversión?

- Lectura de registros y direcciones en memoria
- Análisis de datos en redes (máscaras, IPs)
- Hacking de bajo nivel (modificación directa de bits)
- Programación embebida y microcontroladores

---

## Frase para grabar

**Cada bit en 1 activa una potencia de 2. Sumalos y eso es el valor decimal.**

---
