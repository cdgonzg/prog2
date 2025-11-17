#include "archivo.h"


// Agrega el nuevo entero al final del archivo
void Agregar (string nomArch, int entero){
    FILE* archivo = fopen(nomArch.c_str(), "ab");
    fwrite(&entero, sizeof(int), 1, archivo);
    fclose(archivo);
}

// Determina si existe o no un archivo con el nombre recibido por parámetro
boolean Existe (string nomArch){
    FILE* archivo = fopen(nomArch, "rb");
    boolean existe = FALSE;
    if (archivo != NULL) {
        fclose(archivo);
        existe =  TRUE;
    }
    return existe;
}

// Determina si el archivo está vacío o no. Precondición: El archivo existe
boolean Vacio (string nomArch){
    FILE* arch = fopen(nomArch, "rb");
    boolean vacio = FALSE;
    if (arch == NULL)
        vacio = TRUE;
    else {
        fseek(arch, 0, SEEK_END);
        long bytes = ftell(arch);
        fclose(arch);
        if (bytes == 0)
            vacio = TRUE;
    }
    return (vacio);
}

// Determina si el entero recibido está en el archivo. Precondición: El archivo existe
boolean Pertenece (string nomArch, int entero){
    FILE* arch = fopen(nomArch, "rb");
    boolean pertenece = FALSE;
    if (arch == NULL)
        pertenece = FALSE;
    else {
        int valor;
        while (fread(&valor, sizeof(int), 1, arch) == 1) {
            if (valor == entero) {
                fclose(arch);
                return TRUE;
            }
        }
    }

    fclose(arch);
    return FALSE;
}

int Largo (string nomArch);
// Devuelve la cantidad de enteros almacenados en el archivo. Precondición: El archivo existe
int K-esimo (string nomArch, int k);
// Devuelve el k-ésimo entero almacenado en el archivo. Precondición: El archivo existe
// y su largo es  k.
void Desplegar (string nomArch);
// Despliega por pantalla los enteros almacenados en el archivo. Precondición: El archivo existe