#ifndef tabla_periodica_H
#define tabla_periodica_H

#include "elemento.h"

const int MAX = 149;

typedef elemento tabla_periodica[MAX];

//inicializa la tabla periodica
void inicializar_tabla(tabla_periodica &tp);

//agrega un elemento a la tabla periodica
void agregar_elemento(tabla_periodica &tp, elemento e);

//imprimir tabla periodica en pantalla
void imprimir_tabla(tabla_periodica tp);

//imprimir elemento segun numero atomico
void imprimir_elemento(tabla_periodica tp, int numero_atomico);

/* Dado un estado de oxidación, desplegar por pantalla los números atómicos de los elementos
que tengan dicho estado de oxidación. */
void elementos_por_estado_oxidacion(tabla_periodica tp, int estado_oxidacion);

//Dado un número atómico, saber si existe en la tabla un elemento con dicho número atómico.
boolean existe_elemento(tabla_periodica tp, int numero_atomico);

//Dado el número atómico de un elemento saber si dicho elemento es un metal, no metal o gas noble.
clasificacion tipo_elemento(tabla_periodica tp, int numero_atomico);

//Dado un número atómico, obtener el elemento correspondiente.
elemento obtener_elemento(tabla_periodica tp, int numero_atomico);

#endif