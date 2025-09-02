#include <stdio.h>

typedef enum {FALSE, TRUE} boolean;


void CargaBooleano (boolean &b)
{
    char c;
    do
    {
        scanf ("%c", &c);
    } while ((c != '0') && (c != '1'));
    if (c == '0')
        b = FALSE;
    else
        b = TRUE;
}

void ImprimeBooleano (boolean b)
{
    if (b == FALSE)
        printf ("0");
    else
        printf ("1");
}