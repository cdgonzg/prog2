#ifndef estado_H
#define estado_H

#include "string.h"

typedef enum {SOLIDO, LIQUIDO, GASEOSO} estado;

//cargar estado
void cargar_estado(estado &e);

//imprimir estado
void imprimir_estado(estado e);

//obtener estado como string
void ObtenerEstado(estado e, String &s);


#endif // estado_H