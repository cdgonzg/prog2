#ifndef clasificacion_H
#define clasificacion_H 

#include "string.h"

typedef enum {GAS_NOBLE, METAL, NO_METAL} clasificacion;

//cargar clasificacion
void cargar_clasificacion(clasificacion &c);

//imprimir clasificacion
void imprimir_clasificacion(clasificacion c);

//obtener clasificacion como string
void ObtenerClasificacion(clasificacion c, String &s);

#endif // clasificacion_H