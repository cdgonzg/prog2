#include "tabla_periodica.h"
#include "elemento.h"

int main() {
    tabla_periodica tp;
    inicializar_tabla(tp);

    // Aquí podrías agregar elementos, imprimir la tabla, etc.
    // Por ejemplo:
    elemento hidrogeno;
    crear_elemento(hidrogeno);
    agregar_elemento(tp, hidrogeno);
    imprimir_tabla(tp);

    return 0;
}