
Tema 8 – Usos Prácticos de Binario, Octal, Hexadecimal y strtol() en la vida real
----------------------------------------------------------------------------------

¿Por qué es importante entender las bases numéricas?
----------------------------------------------------
En programación de sistemas, ciberseguridad, redes y análisis de bajo nivel, los datos no se expresan en decimal.
Se representan en:
- Binario → control bit a bit
- Octal → permisos
- Hexadecimal → direcciones, datos crudos
- Y se manipulan con funciones como strtol()

1. Binario – Base 2
-------------------
Usos comunes:
- Flags y registros: se activan y desactivan con bits
- Máscaras de red: 255.255.255.0 = 11111111.11111111.11111111.00000000
- Puertos y protocolos: usan bits para estado ON/OFF
- Microcontroladores y sistemas embebidos
- Exploit development: se manipulan buffers bit a bit

2. Octal – Base 8
-----------------
Usado principalmente en sistemas Unix/Linux para:
- Permisos de archivos (lectura, escritura, ejecución)

Ejemplo: chmod 755 archivo

Equivalente:
7 = rwx = 111
5 = r-x = 101
5 = r-x = 101

Cada dígito octal representa 3 bits.
Por eso es ideal para representar permisos compactamente.

3. Hexadecimal – Base 16
------------------------
Usos típicos:
- Direcciones de memoria → 0x7FFFDEAD
- Colores web → #FF5733
- Hex editors → ver contenido real byte por byte
- Shellcode y exploits → \x90\xCC\xEB\xFE
- Debuggers (GDB, radare2, IDA) → instrucciones y valores en hex

Hex es preferido porque es más compacto que binario y más expresivo que decimal.

4. Conversión de texto con strtol()
-----------------------------------
strtol() convierte una cadena de texto a número entero en la base que vos elijas.

Sintaxis:
long strtol(const char *cadena, char **endptr, int base);

Ejemplos:
strtol("1010", NULL, 2) → 10
strtol("77", NULL, 8) → 63
strtol("2A", NULL, 16) → 42
strtol("0xFF", NULL, 0) → 255 (autodetecta por prefijo)

¿Dónde se usa?
- Conversión manual desde texto a número
- Lectura desde archivos o entrada de usuario
- Parsing de configuraciones o payloads
- CTFs y análisis forense

5. En Ciberseguridad
--------------------
Las bases lo son TODO:
- Hex = direcciones, payloads, offsets
- Binario = estados, registros, comparaciones lógicas
- Octal = permisos de archivo
- strtol() = para convertir cualquier cosa a lo que entiendas y manipules

Frase para grabar:
------------------
"Si ves números raros, están en otra base. Si sabés leerlos, podés controlarlos."
