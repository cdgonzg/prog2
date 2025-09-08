#ifndef tabla_periodica_H
#define tabla_periodica_H

#include "elemento.h"

typedef struct {
    elemento tabla[150];
    int tope;
} tabla_periodica;

//inicializa la tabla periodica
void inicializar_tabla(tabla_periodica &tp);

//agrega un elemento a la tabla periodica
boolean agregar_elemento(tabla_periodica &tp, elemento e);

#endif