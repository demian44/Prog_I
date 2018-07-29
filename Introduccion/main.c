#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 50 /// ESTO ES UNA CONSTANTE, ES DECIR QUE SU VALOR ES FIJO.

int main()
{
    int entero =8;
    long longInt = 2147483647;
    float flotante = 45.45;
    char caracter = '45';

    /// %d(decimal) y %i(integer) sirven para imprimir variables del tipo int.
    printf("Entero con mascara  d: %d",entero);
    printf("\n");

    printf("Entero con mascara i: %i",entero);
    printf("\n");

    printf("Entero en hexadecimal con mascara x: %x",entero);
    printf("\n");

    printf("Entero en octal con mascara o: %o",entero);
    printf("\n");

    printf("Long con mascara ld: %ld",longInt);
    printf("\n");

    printf("%d",MAXIMO);
    printf("\n");

    printf("Flotante f: %f",flotante);
    printf("\n");

    printf("Flotante con dos decimales.2f: %.2f",flotante);
    printf("\n");
    printf("Caracter: %c",caracter);




    return 0;
}
