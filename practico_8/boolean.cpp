#include "boolean.h"

/*
    verificado que funciona
*/

void cargar (boolean & b)
{
    int valor;
    printf ("ingrese 0 si es falso y 1 si es verdadero: ");
    scanf ("%d",& valor);
    if (valor == 0)
    b = FALSE;
    else
    b = TRUE;
}

void mostrar(boolean b)
{
    if (b)
        printf ("verdadero");
    else
        printf ("falso");
}
