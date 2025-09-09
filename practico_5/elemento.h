#ifndef ELEMENTO_H
#define ELEMENTO_H

#include "clasificacion.h"
#include "estado.h"
#include "string.h"

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

//mostrar un elemento
void imprimirElemento(elemento e);

//obtener numero atomico
int obtener_numero_atomico(elemento e);

//obtener simbolo
void obtener_simbolo(elemento e, String &s);

//obtener nombre
void obtener_nombre(elemento e, String &s);

//obtener estado de oxidacion
int obtener_estado_oxidacion(elemento e);

//obtener si existe
boolean existe(elemento e);

//obtener el tipo de un elemento
clasificacion obtener_clasificacion(elemento e);

//obtener radiactividad si es un gas noble
int obtener_radiactividad(elemento e);

//obtener conductividad si es un metal
float obtener_conductividad_metal(elemento e);

//obtener estado del no metal
estado obtener_estado(elemento e);

#endif