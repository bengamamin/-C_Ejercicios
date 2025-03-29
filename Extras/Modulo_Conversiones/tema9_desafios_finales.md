# Tema 9 – Desafíos Finales de Conversión entre Bases

Este módulo te permite consolidar lo aprendido con ejercicios resueltos y una lista de prácticas sugeridas para que entrenes sin ver las respuestas.

---

## Desafíos resueltos (conversión entre bases)

**1. Decimal 42 → Binario**
```
42 ÷ 2 = 21 resto 0
21 ÷ 2 = 10 resto 1
10 ÷ 2 = 5 resto 0
5 ÷ 2 = 2 resto 1
2 ÷ 2 = 1 resto 0
1 ÷ 2 = 0 resto 1
→ Binario: 101010
```

**2. Decimal 83 → Octal**
```
83 ÷ 8 = 10 resto 3
10 ÷ 8 = 1 resto 2
1 ÷ 8 = 0 resto 1
→ Octal: 123
```

**3. Decimal 255 → Hexadecimal**
```
255 ÷ 16 = 15 resto 15 → F
15 ÷ 16 = 0 resto 15 → F
→ Hex: FF
```

**4. Hexadecimal 2A → Decimal**
```
2 × 16¹ = 32
A = 10 × 16⁰ = 10
→ Total: 42
```

**5. Binario 1111 → Decimal**
```
1×8 + 1×4 + 1×2 + 1×1 = 15
```

**6. Octal 77 → Decimal**
```
7×8¹ = 56
7×8⁰ = 7
→ Total: 63
```

**7. Hexadecimal FF → Binario**
```
F = 1111
F = 1111
→ Binario: 11111111
```

---

## Ejercicios propuestos (práctica sin ver)

Convierte los siguientes valores a todas las bases posibles (binario, octal, decimal, hexadecimal):

1. Decimal: 100  
2. Decimal: 31  
3. Binario: 11010  
4. Octal: 144  
5. Hex: 3F  
6. Hex: A5  
7. Binario: 10000000  
8. Decimal: 255  
9. Octal: 77  
10. Hex: 1C

Sugerencia:
- Usá papel o consola para practicar la conversión manual.
- Luego validá con `strtol()` o `printf()` si lo hacés en C.

---

### Frase para grabar:

> **"Convertir entre bases no es un truco, es una herramienta real del día a día en sistemas."**
