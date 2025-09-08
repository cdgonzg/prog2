#ifndef EJERCICIO2_H
#define EJERCICIO2_H

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

typedef struct {
    elemento tabla[150];
    int tope;
} tabla_periodica;

#endif