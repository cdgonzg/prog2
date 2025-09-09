#include <stdio.h>
#include "tabla_periodica.h"

//inicializa la tabla periodica
void inicializar_tabla(tabla_periodica &tp){
    for (int i = 0; i < MAX; i++){
        tp.tabla[i].existe = FALSE;
    }
}

//agrega un elemento a la tabla periodica
void agregar_elemento(tabla_periodica &tp, elemento e){
    tp.tabla[obtener_numero_atomico(e)-1] = e;
}

//imprimir tabla periodica en pantalla
void imprimir_tabla(tabla_periodica tp){
    for (int i = 0; i < MAX; i++){
        if (tp.tabla[i].existe == TRUE){
            imprimirElemento(tp.tabla[i]);
        }
    }
}

//imprimir elemento segun numero atomico
void imprimir_elemento(tabla_periodica tp, int numero_atomico){
    if (tp.tabla[numero_atomico - 1].existe == TRUE)
    {
        imprimirElemento(tp.tabla[numero_atomico - 1]);
    }
    else
    {
        printf("El elemento con numero atomico %d no existe en la tabla periodica.\n", numero_atomico);
    }
}

/* Dado un estado de oxidación, desplegar por pantalla los números atómicos de los elementos
que tengan dicho estado de oxidación. */
void elementos_por_estado_oxidacion(tabla_periodica tp, int estado_oxidacion){
    for (int i = 0; i < MAX; i++)
    {
        if (tp.tabla[i].existe == TRUE && obtener_estado_oxidacion(tp.tabla[i]) == estado_oxidacion)
        {
            printf("%d ", obtener_numero_atomico(tp.tabla[i]));
        }
    }
    printf("\n");
}

//Dado un número atómico, saber si existe en la tabla un elemento con dicho número atómico.
boolean existe_elemento(tabla_periodica tp, int numero_atomico){
    return (tp.tabla[numero_atomico - 1].existe);
}

//Dado el número atómico de un elemento saber si dicho elemento es un metal, no metal o gas noble.
clasificacion tipo_elemento(tabla_periodica tp, int numero_atomico){
    return obtener_tipo(tp.tabla[numero_atomico - 1]);
}

//Dado un número atómico, obtener el elemento correspondiente.
elemento obtener_elemento(tabla_periodica tp, int numero_atomico){
    return tp.tabla[numero_atomico - 1];
}