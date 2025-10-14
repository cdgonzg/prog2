#include "arreglo_dinamico.h"
#include "boolean.h"
#include "string_dinamico.h"
#include <stdio.h>

int main() {
    // array_dinamico arr1, arr2, impares;
    // int n1, n2;

    // // Crear y cargar el primer arreglo dinámico
    // printf("Ingrese el tamaño del primer arreglo dinámico: ");
    // scanf("%d", &n1);
    // Crear(arr1, n1);
    // Cargar(arr1);

    // // Crear y cargar el segundo arreglo dinámico
    // printf("Ingrese el tamaño del segundo arreglo dinámico: ");
    // scanf("%d", &n2);
    // Crear(arr2, n2);
    // Cargar(arr2);

    // // Desplegar ambos arreglos
    // printf("Primer arreglo dinámico: ");
    // Desplegar(arr1);
    // printf("Segundo arreglo dinámico: ");
    // Desplegar(arr2);

    // // Verificar si los arreglos son iguales
    // boolean sonIguales = Iguales(arr1, arr2);
    // printf("Los arreglos son iguales: ");
    // mostrar(sonIguales);
    // printf("\n");

    // // Contar cuántos valores del primer arreglo pertenecen al segundo
    // int contador = CuantosPertenecen(arr1, arr2);
    // printf("Cantidad de valores del primer arreglo que pertenecen al segundo: %d\n", contador);

    // // Copiar los valores impares del primer arreglo a un nuevo arreglo
    // CopiarImpares(arr1, impares);
    // printf("Arreglo de valores impares del primer arreglo: ");
    // Desplegar(impares);

    // // Destruir los arreglos para liberar memoria
    // Destruir(arr1);
    // Destruir(arr2);
    // Destruir(impares);

    string_dinamico str1, str2;
    printf("Cargando primer string:\n");
    strcrear(str1);
    scan(str1);
    printf("El largo del string es: %d\n", strlar(str1));
    printf("Cargando segundo string:\n");
    strcrear(str2);
    scan(str2);
    printf("El largo del string es: %d\n", strlar(str2));
    printf("Primer string: ");
    print(str1);
    printf("Segundo string: ");
    print(str2);
    
    if (strmen(str1, str2)) {
        printf("El primer string es menor que el segundo.\n");
    } else {
        printf("El primer string no es menor que el segundo.\n");
    }

    if (streq(str1, str2)) {
        printf("Los strings son iguales.\n");
    } else {
        printf("Los strings no son iguales.\n");
    }

    strswp(str1, str2);
    printf("Después de intercambiar:\n");
    printf("Primer string: ");
    print(str1);
    printf("Segundo string: ");
    print(str2);

    strcop(str1, str2);
    printf("Después de copiar el segundo string al primero:\n");
    printf("Primer string: ");
    print(str1);
    printf("Segundo string: ");
    print(str2);

    
    return 0;
}