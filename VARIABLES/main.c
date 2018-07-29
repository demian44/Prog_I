#include <stdio.h>
#include <stdlib.h>

int main()
{
     int maxEntero = 2147483647; ///Maximo numero de un entero con signo.

    printf("\nMaximo valor: %d",maxEntero);
    maxEntero = maxEntero + 1; ///Aumentamos en 1 al valor maximo.
    printf("\nMaximo valor + 1: %d",maxEntero);

    getchar();

    int minEntero = -2147483648;
    printf("\nMinimo valor para un entero: %d",maxEntero);
    maxEntero = maxEntero - 1; ///Disminuimos en 1 al valor minimo.
    printf("\ninimo valor - 1: %d",maxEntero);/// Imprimo el nuevo valor


    return 0;
}
