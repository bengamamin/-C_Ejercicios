# Tema 4 – Conversión de Decimal a Octal

---

## ¿Qué es el sistema octal?

- Es un sistema de numeración en **base 8**
- Usa **solo los dígitos del 0 al 7**
- Cada dígito octal equivale exactamente a **3 bits binarios**
- Muy utilizado en **sistemas Unix/Linux** (por ejemplo: permisos `chmod 755`)

---

## ¿Por qué en octal después del 7 viene el 10?

Porque en base 8 **no existe el dígito 8**.  
Al sumar 1 al valor máximo permitido (7), el sistema hace lo mismo que en decimal cuando pasás de 9 a 10:

- En decimal: `9 + 1 = 10` (porque no existe el dígito 10)
- En octal: `7 + 1 = 10 (octal)`  
  → Que significa: 1 × 8 + 0 = 8 decimal

---

## Regla del acarreo en octal

> **En base 8, cuando un dígito supera 7, se convierte en 0 y se acarrea 1 a la izquierda.**

Ejemplos:

| Suma (octal) | Resultado octal | Equivalente decimal |
|--------------|------------------|----------------------|
| 7 + 1        | 10               | 8                    |
| 17 + 1       | 20               | 16                   |
| 37 + 1       | 40               | 32                   |
| 77 + 1       | 100              | 64                   |

---

## Conversión Decimal → Octal (paso a paso)

### Ejemplo: Convertir 83 decimal a octal

1. Dividir el número entre 8 y guardar el residuo:
