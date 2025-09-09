#include "estado.h"

//cargar estado
void cargar_estado(estado &e){
    String opcion;
    print("Ingrese el estado del no metal (SOLIDO, LIQUIDO, GASEOSO): ");
    scan(opcion);
    if (streq(opcion, "SOLIDO") == 0){
        e = SOLIDO;
    } else if (streq(opcion, "LIQUIDO") == 0){
                e = LIQUIDO;
            } else if (streq(opcion, "GASEOSO") == 0){
                e = GASEOSO;
    }
}


//imprimir estado
void imprimir_estado(estado e){
    String estado_str;
    ObtenerEstado(e, estado_str);
    print(estado_str);
}

//obtener estado como string
void ObtenerEstado(estado e, String &s){
    switch (e)
    {
    case SOLIDO:
        strcop(s, "SOLIDO");
        break;
    case LIQUIDO:
        strcop(s, "LIQUIDO");
        break;
    case GASEOSO:
        strcop(s, "GASEOSO");
        break;
    }
}
