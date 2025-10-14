#ifndef _boolean_H
#define _boolean_H

#include <stdio.h>

//definición de tipo de datos
 typedef enum {FALSE, TRUE} boolean;
//cabezales sintácticos de subprogramas
 void cargar (boolean & b);
 /* devuelve la variable cargada por el usuario */
 void mostrar (boolean b);
 /* muestra en pantalla el valor de la variable */

#endif