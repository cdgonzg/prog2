#include "clasificacion.h"

//cargar clasificacion
void cargar_clasificacion(clasificacion &c){
    String opcion;
    printf("Ingrese la clasificacion del elemento (Gas Noble, Metal, No Metal): ");
    scan(opcion);
    if (streq(opcion, "Gas Noble")){
        c = GAS_NOBLE;
    } else if (streq(opcion, "Metal")){
                c = METAL;
            } else if (streq(opcion, "No Metal")){
                c = NO_METAL;
    }
}

//imprimir clasificacion
void imprimir_clasificacion(clasificacion c){
    String clasificacion_str;
    ObtenerClasificacion(c, clasificacion_str);
    print(clasificacion_str);
}

//obtener clasificacion como string
void ObtenerClasificacion(clasificacion c, String &s){
    switch (c)
    {
    case GAS_NOBLE:
        strcop(s, "Gas Noble");
        break;
    case METAL:
        strcop(s, "Metal");
        break;
    case NO_METAL:
        strcop(s, "No Metal");
        break;
    }
}