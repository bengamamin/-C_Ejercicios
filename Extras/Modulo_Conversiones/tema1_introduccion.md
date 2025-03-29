# Tema 1: Introducción a los Sistemas de Numeración

## ¿Qué es una base numérica?

Una base representa **cuántos símbolos se usan** para formar los números.

- **Base 10 (decimal)**: 0 1 2 3 4 5 6 7 8 9
- **Base 2 (binario)**: 0 1 → usado en bits, memoria, lógica digital
- **Base 8 (octal)**: 0–7 → usado en permisos de Unix
- **Base 16 (hexadecimal)**: 0–9 + A–F → usado en direcciones, RAM, punteros

---

## ¿Por qué usamos otras bases en computación?

- **Binario**: porque las computadoras trabajan con **2 estados** (encendido/apagado → 1/0)
- **Hexadecimal**: porque es una forma **más compacta y humana** de representar binario
- **Octal**: aún se usa en permisos de archivos como `chmod 755`

---

## Relación entre las bases

- **1 dígito hexadecimal = 4 bits** binarios
- **3 dígitos octales = 1 byte (8 bits)**
- **Decimal es la base que interpretamos naturalmente los humanos**

---

## Tabla resumen (del 0 al 15)

| Decimal | Binario | Octal | Hex |
|---------|---------|-------|-----|
| 0       | 0000    | 0     | 0   |
| 1       | 0001    | 1     | 1   |
| 2       | 0010    | 2     | 2   |
| 3       | 0011    | 3     | 3   |
| 4       | 0100    | 4     | 4   |
| 5       | 0101    | 5     | 5   |
| 6       | 0110    | 6     | 6   |
| 7       | 0111    | 7     | 7   |
| 8       | 1000    | 10    | 8   |
| 9       | 1001    | 11    | 9   |
| 10      | 1010    | 12    | A   |
| 11      | 1011    | 13    | B   |
| 12      | 1100    | 14    | C   |
| 13      | 1101    | 15    | D   |
| 14      | 1110    | 16    | E   |
| 15      | 1111    | 17    | F   |

---

## Próximo paso:

→ `tema2_decimal_a_binario.c`
