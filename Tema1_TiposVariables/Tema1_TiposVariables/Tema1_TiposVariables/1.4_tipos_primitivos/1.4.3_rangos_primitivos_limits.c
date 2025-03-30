// archivo: 1.4_rangos_primitivos_limits.c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Rangos de tipos enteros
    printf("char:     %d a %d\n", CHAR_MIN, CHAR_MAX);
    printf("short:    %d a %d\n", SHRT_MIN, SHRT_MAX);
    printf("int:      %d a %d\n", INT_MIN, INT_MAX);
    printf("long:     %ld a %ld\n", LONG_MIN, LONG_MAX);

    // Rangos de enteros sin signo
    printf("unsigned char:   0 a %u\n", UCHAR_MAX);
    printf("unsigned short:  0 a %u\n", USHRT_MAX);
    printf("unsigned int:    0 a %u\n", UINT_MAX);
    printf("unsigned long:   0 a %lu\n", ULONG_MAX);

    // Rangos de tipos flotantes
    printf("float:   %.10e a %.10e\n", FLT_MIN, FLT_MAX);
    printf("double:  %.10e a %.10e\n", DBL_MIN, DBL_MAX);

    return 0;
}
