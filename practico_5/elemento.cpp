#include "elemento.h"

//cargar un elemento
void crear_elemento(elemento &e){
    printf("Ingrese el numero atomico: ");
    scanf("%d", &e.numero_atomico);
    printf("Ingrese el simbolo: ");
    scan(e.simbolo);
    printf("Ingrese el nombre: ");
    scan(e.nombre);
    printf("Ingrese el estado de oxidacion: ");
    scanf("%d", &e.estado_oxidacion);
    printf("Existe: ");
    cargar(e.existe);
    cargar_clasificacion(e.clas);
    if (e.clas == GAS_NOBLE){
        printf("Es radiactivo: ");
        cargar(e.tipo.es_radiactivo);
    } else if (e.clas == METAL){
        printf("Ingrese la conductividad: ");
        scanf("%f", &e.tipo.conductividad);
    } else if (e.clas == NO_METAL){
        cargar_estado(e.tipo.est);
    }


}

//mostrar un elemento
void imprimirElemento(elemento e){
    printf("Numero atomico: %d", e.numero_atomico);
    printf("\n");
    printf("Simbolo: ");
    print(e.simbolo);
    printf("\n");
    printf("Nombre: ");
    printf(e.nombre);
    printf("\n");
    printf("Estado de oxidacion: %d", e.estado_oxidacion);
    printf("\n");
    printf("Existe: ");
    mostrar(e.existe);
    printf("\n");
    printf("Clasificacion: ");
    imprimir_clasificacion(e.clas);
    printf("\n");
    if (e.clas == GAS_NOBLE){
        printf("Es radiactivo: ");
        mostrar(e.tipo.es_radiactivo);
    } else if (e.clas == METAL){
        printf("Conductividad: ");
        printf("%f \n", e.tipo.conductividad);
    } else if (e.clas == NO_METAL){
        printf("Estado: ");
        imprimir_estado(e.tipo.est);
    }
    printf("\n");
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
