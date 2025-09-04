#include "boolean.h"
#include "string.h"
#include "fecha.h"
#include "producto.h"
#include "arreglo_productos.h"
#include <stdio.h>

int main () {
    
    //defino las variables necesarias
    arreglo_productos ap;
    
    //creo un menu para probar las funciones
    int opcion;
    do {
        printf("\nMenu de opciones:\n");
        printf("1. Cargar arreglo de productos\n");
        printf("2. Imprimir arreglo de productos\n");
        printf("3. Verificar si existe un producto por numero\n");
        printf("4. Buscar producto por numero\n");
        printf("5. Calcular promedio de precios\n");
        printf("6. Contar productos por nombre\n");
        printf("7. Contar productos en stock y no en stock\n");
        printf("0. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
    
        switch(opcion) {
            case 1:
                CargaArregloProductos(ap);
                break;
            case 2:
                ImprimeArregloProductos(ap, MAX_P);
                break;
            case 3: {
                long int numero;
                printf("Ingrese el numero del producto a buscar: ");
                scanf("%ld", &numero);
                if (ExisteProducto(ap, numero)) {
                    printf("El producto con numero %ld existe en el arreglo.\n", numero);
                } else {
                    printf("El producto con numero %ld no existe en el arreglo.\n", numero);
                }
                break;
            }
            case 4: {
                long int numero;
                printf("Ingrese el numero del producto a buscar: ");
                scanf("%ld", &numero);
                int posicion = BuscaProductoPorNumero(ap, numero);
                if (posicion != -1) {
                    printf("El producto con numero %ld se encuentra en la posicion %d del arreglo.\n", numero, posicion);
                } else {
                    printf("El producto con numero %ld no se encuentra en el arreglo.\n", numero);
                }
                break;
            }
            case 5: {
                float promedio = PromedioPrecios(ap);
                printf("El promedio de los precios de los productos es: %.2f\n", promedio);
                break;
            }
            case 6: {
                String nombre;
                printf("Ingrese el nombre del producto a buscar: ");
                scanf("%s", nombre);
                int cantidad = CuentaProductosPorNombre(ap, nombre);
                printf("Hay %d productos con el nombre '%s' en el arreglo.\n", cantidad, nombre);
                break;
            }
            case 7: {
                int en_stock = 0, no_en_stock = 0;
                CuentaProductosEnStock(ap, en_stock, no_en_stock);
                printf("Hay %d productos en stock y %d productos no en stock.\n", en_stock, no_en_stock);
                break;
            }
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while (opcion != 0);
    
    return 0;
}
