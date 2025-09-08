#include "elemento.h"
#include <stdio.h>
//cargar un elemento
void cargar(elemento &e){
    e.existe == TRUE;
    print("Ingrese el numero atomico: ");
    scanf("%d", e.numero_atomico);
    print("Ingrese el simbolo: ");
    scan(e.simbolo);
    print("Ingrese el nombre: ");
    scan(e.nombre);
    print("Ingrese el estado de oxidacion: ");
    scanf("%d", e.estado_oxidacion);
    
    int clasificacion_int;
    do {
        print("Ingrese la clasificacion (0: Gas Noble, 1: Metal, 2: No Metal): ");
        scanf("%d", &clasificacion_int);
    } while (clasificacion_int < 0 || clasificacion_int > 2);
    
    if (clasificacion_int == 0) {
        e.clas = Gas_Noble;
        e.tipo.gn.es_gas_noble = TRUE;
    } else  {
                if (clasificacion_int == 1){
                    e.clas = Metal;
                    cargar_conductividad(e);
                } else {
                    e.clas = No_Metal;
                    cargar_estado(e); // Valor por defecto
                }
            }
    
    switch (e.clas) {
        case Gas_Noble:
            print("Es gas noble? (1: Si, 0: No): ");
            int es_gas_noble_int;
            scanf("%d", &es_gas_noble_int);
            e.tipo.gn.es_gas_noble = es_gas_noble_int ? true : false;
            break;
        case Metal:
            print("Ingrese la conductividad: ");
            scanf("%f", &e.tipo.m.conductividad);
            break;
        case No_Metal:
            int estado_int;
            do {
                print("Ingrese el estado (0: Solido, 1: Liquido, 2: Gaseoso): ");
                scanf("%d", &estado_int);
            } while (estado_int < 0 || estado_int > 2);
            e.tipo.nm.est = static_cast<estado>(estado_int);
            break;
    }
}

//carga la conductividad de un metal
void cargar_conductividad(elemento &e){
    if (e.clas == Metal) {
        print("Ingrese la conductividad del metal: ");
        scanf("%f", &e.tipo.m.conductividad);
    } else {
        print("Error: El elemento no es un metal.\n");
    }
}

//carga el estado de un no metal
void cargar_estado(elemento &e){
    if (e.clas == No_Metal) {
        String estado;
        do {
            print("Ingrese el estado (Solido, Liquido, Gaseoso): ");
            scan(estado);
        } while (estado != "Solido" && estado != "Liquido" && estado != "Gaseoso");
        if (estado == "Solido") {
            e.tipo.nm.est = Solido;
        } else if (estado == "Liquido") {
            e.tipo.nm.est = Liquido;
        } else if (estado == "Gaseoso") {
            e.tipo.nm.est = Gaseoso;
        }
    } else {
        printf("Error: El elemento no es un no metal.\n");
    }
}


//mostrar un elemento
void imprimirElemento(elemento e){
    if (e.existe == TRUE) {
        printf("Numero atomico: %d\n", e.numero_atomico);
        printf("Simbolo: %s\n", e.simbolo);
        printf("Nombre: %s\n", e.nombre);
        printf("Estado de oxidacion: %d\n", e.estado_oxidacion);
        printf("Clasificacion: ");
        switch (e.clas) {
            case Gas_Noble:
                printf("Gas Noble\n");
                printf("Es gas noble: %s\n", e.tipo.gn.es_gas_noble ? "Si" : "No");
                break;
            case Metal:
                printf("Metal\n");
                printf("Conductividad: %.2f\n", e.tipo.m.conductividad);
                break;
            case No_Metal:
                printf("No Metal\n");
                printf("Estado: ");
                switch (e.tipo.nm.est) {
                    case Solido:
                        printf("Solido\n");
                        break;
                    case Liquido:
                        printf("Liquido\n");
                        break;
                    case Gaseoso:
                        printf("Gaseoso\n");
                        break;
                }
                break;
        }
    } else {
        printf("El elemento no existe.\n");
    }
}

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