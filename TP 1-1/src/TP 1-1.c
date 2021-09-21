/*============================================================================
 Name        : Trabajo practico 1
 Author      : Guggiana Rodrigo
 Description : Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
 ============================================================================*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

    char opcion;
    int n1, n2;
    int factorial = 1;
    int i;

    do
    {
        printf( "\n   >>> MENU CALCULADORA <<<" );
        printf( "\n   1. Sumar dos numeros.");
        printf( "\n   2. Restar dos numeros.");
        printf( "\n   3. Multiplicar dos numeros.");
        printf( "\n   4. Dividir dos numeros.");
        printf( "\n   5. Calcular el factorial.");
        printf( "\n   6. Salir.\n" );

        /* Filtramos la opción elegida por el usuario */
        do
        {
            printf( "\n   Introduzca opcion (1-6): ");
            fflush( stdin );
            scanf( "%c", &opcion);

        } while ( opcion < '1' || opcion > '6' );
        /* La opción sólo puede ser '1', '2', '3', '4', '5' o '6' */

        switch ( opcion )
        {
                      /* Opción 1: Sumar */
            case '1': printf( "\n   Introduzca primer sumando: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca segundo sumando: " );
                      scanf( "%d", &n2);
                      printf( "\n  El resultado de %d + %d es = %d\n", n1, n2, n1 + n2 );
                      break;

                      /* Opción 2: Restar */
            case '2': printf( "\n   Introduzca minuendo: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca sustraendo: " );
                      scanf( "%d", &n2);
                      printf( "\n   El resultado de %d - %d es = %d\n", n1, n2, n1 - n2 );
                      break;

                      /* Opción 3: Multiplicar */
            case '3': printf( "\n   Introduzca primer operando: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca segundo operando: " );
                      scanf( "%d", &n2);
                      printf( "\n   El resultado de %d * %d es = %d\n", n1, n2, n1 * n2 );
                      break;

                      /* Opción 4: División entera */
            case '4': printf( "\n   Introduzca dividendo: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca divisor: " );
                      scanf( "%d", &n2);
                      if ( n2 != 0 )
                          printf( "\n El resultado de %d div %d es = %d ( Resto = %d )\n", n1, n2, n1 / n2, n1 % n2 );
                      else
                          printf( "\n   ERROR: No se puede dividir entre cero.\n" );
                      break;

                      /* Opción 5: Factorial */
            case '5': printf( "\n   Introduzca un numero: " );
                      scanf( "%d", &n1);
                      for (i = n1; i > 1; i--){
                            factorial = factorial * i;
                      }
                      printf( "\n  El resultado del factorial %d es = %d\n", n1, factorial );
                      break;


        }

    } while ( opcion != '6' );

    return 0;
}
