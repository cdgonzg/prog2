#ifndef ELEMENTO_H
#define ELEMENTO_H

#include "boolean.h"
#include "string.h"

typedef enum {Solido, Liquido, Gaseoso} estado;

typedef enum {Gas_Noble, Metal, No_Metal} clasificacion;

// typedef struct { 
//     boolean es_radiactivo;
// } gas_noble;

// typedef struct { 
//     float conductividad;
// } metal;

// typedef struct { 
//     estado est;
// } no_metal; 

typedef struct {
    int numero_atomico;
    String simbolo;
    String nombre;
    int estado_oxidacion;
    boolean existe;
    clasificacion clas;
    union {
        boolean es_radiactivo;
        float conductividad;
        estado est;
    } tipo;
} elemento;

//cargar un elemento
void cargar(elemento &e);

//carga la conductividad de un metal
void cargar_conductividad(elemento &e);

//carga el estado de un no metal
void cargar_estado(elemento &e);

//mostrar un elemento
void imprimirElemento(elemento e);

//obtener numero atomico
int obtener_numero_atomico(elemento e);

//obtener el tipo de un elemento
clasificacion obtener_tipo(elemento e);

//obtener estado de oxidacion
int obtener_estado_oxidacion(elemento e);

//obtener estado de oxidacion
int obtener_estado_oxidacion(elemento e);

//obtener estado del no metal
//estado obtener_estado(no_metal nm);

#endif