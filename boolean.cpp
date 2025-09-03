#include "boolean.h"

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

void desplegar (boolean b)
{
    if (b)
    printf ("verdadero");
    else
    printf ("falso");
} 