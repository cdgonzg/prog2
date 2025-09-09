#include "elemento.h"

//cargar un elemento
void cargar(elemento &e){
    print("Ingrese el numero atomico: ");
    scanf("%d", e.numero_atomico);
    print("Ingrese el simbolo: ");
    scan(e.simbolo);
    print("Ingrese el nombre: ");
    scan(e.nombre);
    print("Ingrese el estado de oxidacion: ");
    scanf("%d", e.estado_oxidacion);
    print("Ingrese si existe (TRUE/FALSE): ");
    cargar(e.existe);
    cargar_clasificacion(e.clas);
    if (e.clas == GAS_NOBLE){
        print("Ingrese si es radiactivo (TRUE/FALSE): ");
        cargar(e.tipo.es_radiactivo);
    } else if (e.clas == METAL){
        print("Ingrese la conductividad: ");
        scanf("%f", e.tipo.conductividad);
    } else if (e.clas == NO_METAL){
        cargar_estado(e.tipo.est);
    }


}

//mostrar un elemento
void imprimirElemento(elemento e){
    print("Numero atomico: ");
    printf("%d", e.numero_atomico);
    print("Simbolo: ");
    print(e.simbolo);
    print("Nombre: ");
    print(e.nombre);
    print("Estado de oxidacion: ");
    printf("%d", e.estado_oxidacion);
    print("Existe: ");
    mostrar(e.existe);
    print("Clasificacion: ");
    imprimir_clasificacion(e.clas);
    if (e.clas == GAS_NOBLE){
        print("Es radiactivo: ");
        mostrar(e.tipo.es_radiactivo);
    } else if (e.clas == METAL){
        print("Conductividad: ");
        printf("%f", e.tipo.conductividad);
    } else if (e.clas == NO_METAL){
        print("Estado: ");
        imprimir_estado(e.tipo.est);
    }
}

//obtener numero atomico
int obtener_numero_atomico(elemento e){
    return e.numero_atomico;
}

//obtener simbolo
void obtener_simbolo(elemento e, String &s){
    strcop(s, e.simbolo);
}

//obtener nombre
void obtener_nombre(elemento e, String &s){
    strcop(s, e.nombre);
}

//obtener estado de oxidacion
int obtener_estado_oxidacion(elemento e){
    return e.estado_oxidacion;
}

//obtener si existe
boolean existe(elemento e){
    return e.existe;
}

//obtener el tipo de un elemento
clasificacion obtener_clasificacion(elemento e){
    return e.clas;
}

//obtener radiactividad si es un gas noble
int obtener_radiactividad(elemento e){
    if (e.clas == GAS_NOBLE){
        return e.tipo.es_radiactivo;
    }
}

//obtener conductividad si es un metal
float obtener_conductividad_metal(elemento e){
    if (e.clas == METAL){
        return e.tipo.conductividad;
    }
}

//obtener estado del no metal
estado obtener_estado(elemento e){
    if (e.clas == NO_METAL){
        return e.tipo.est;
    }
}
