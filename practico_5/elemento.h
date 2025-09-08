#ifndef ELEMENTO_H
#define ELEMENTO_H

#include "boolean.h"
#include "string.h"

typedef enum {Solido, Liquido, Gaseoso} estado;
typedef enum {Gas_Noble, Metal, No_Metal} clasificacion;

typedef struct { 
    boolean es_gas_noble;
} gas_noble;

typedef struct { 
    float conductividad;
} metal;

typedef struct { 
    estado est;
} no_metal; 

typedef struct {
    int numero_atomico;
    String simbolo;
    String nombre;
    int estado_oxidacion;
    clasificacion clas;
    boolean existe;
    union {
        gas_noble gn;
        metal m;
        no_metal nm;
    } tipo;
} elemento;

//cargar un elemento
void cargar(elemento &e);

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
estado obtener_estado(no_metal nm);

#endif