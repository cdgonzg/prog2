#include "arreglo_dinamico.h"

//Crear: Dados un arreglo dinámico y un entero n  0, reservar dinámicamente n celdas en memoria para el arreglo.
void Crear(array_dinamico & a, int n){
    a.tamanio = n;
    a.arre = new int[n];
}

//Cargar: Dado un arreglo dinámico, cargarlo desde teclado.
void Cargar(array_dinamico & a){
    for (int i = 0; i < a.tamanio; i++)
    {
        printf("Ingrese el valor para la posicion %d: ", i);
        scanf("%d", &a.arre[i]);
    }
}

//Desplegar: Dado un arreglo dinámico, desplegarlo por pantalla.
void Desplegar(array_dinamico a){
    for (int i = 0; i < a.tamanio; i++)
    {
        printf("%d ", a.arre[i]);
    }
    printf("\n");
}

//Pertenece: Dados un arreglo dinámico y un valor entero, determinar si dicho valor
//pertenece al arreglo o no.
bool Pertenece(array_dinamico a, int valor){
    boolean pertenece = FALSE;
    for (int i = 0; i < a.tamanio; i++)
    {
        if (a.arre[i] == valor)
        {
            pertenece = TRUE;
        }
    }
    return pertenece;
}

//Promedio: Dado un arreglo dinámico, devolver el promedio de los valores
//almacenados en él.
float Promedio(array_dinamico a){
    float suma = 0;
    for (int i = 0; i < a.tamanio; i++)
    {
        suma += a.arre[i];
    }
    return suma / a.tamanio;
}

//MaxMin: Dado un arreglo dinámico, devolver el mayor y el menor entero almacenados en él.
void MaxMin(array_dinamico a, int & maximo, int & minimo){
    maximo = a.arre[0];
    minimo = a.arre[0];
    for (int i = 1; i < a.tamanio; i++)
    {
        if (a.arre[i] > maximo)
        {
            maximo = a.arre[i];
        }
        if (a.arre[i] < minimo)
        {
            minimo = a.arre[i];
        }
    }
}

//Iguales: Dados dos arreglos dinámicos, determina si son iguales o no (es decir, si
//tienen los mismos valores, y almacenados en las mismas posiciones).
boolean Iguales(array_dinamico a, array_dinamico b){
    boolean sonIguales = TRUE;
    if (a.tamanio != b.tamanio)
    {
        sonIguales = FALSE;
    } else {
        for (int i = 0; i < a.tamanio; i++)
        {
            if (a.arre[i] != b.arre[i])
            {
                sonIguales = FALSE;
            }
        }
    }
    return sonIguales;
}

//CuantosPertenecen: Dados dos arreglos dinámicos, cuenta cuántos valores del
//primer arreglo pertenecen también al segundo arreglo.
int CuantosPertenecen(array_dinamico a, array_dinamico b){
    int contador = 0;
    for (int i = 0; i < a.tamanio; i++)
    {
        if (Pertenece(b, a.arre[i]))
        {
            contador++;
        }
    }
    return contador;
}

//CopiarImpares: Dado un arreglo dinámico, construye y devuelve otro arreglo dinámico
//que contiene únicamente los valores impares del arreglo original.
void CopiarImpares(array_dinamico a, array_dinamico & impares){
    int contador = 0;
    for (int i = 0; i < a.tamanio; i++)
    {
        if (a.arre[i] % 2 != 0)
        {
            contador++;
        }
    }
    Crear(impares, contador);
    int j = 0;
    for (int i = 0; i < a.tamanio; i++)
    {
        if (a.arre[i] % 2 != 0)
        {
            impares.arre[j] = a.arre[i];
            j++;
        }
    }
}

//Destruir: Dado un arreglo dinámico, liberar la memoria ocupada por el mismo
void Destruir(array_dinamico & a){
    delete[] a.arre;
    a.arre = NULL;
    a.tamanio = 0;
}