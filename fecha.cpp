#include <stdio.h>
#include <fecha.h>

typedef struct fecha
{
        int dia;
        int mes;
        int anio;
};

//carga la fecha por teclado
void CargaFecha (fecha &f){
    printf("Ingrese el dia: ");
    scanf("%d", &f.dia);
    printf("Ingrese el mes: ");
    scanf("%d", &f.mes);
    printf("Ingrese el anio: ");
    scanf("%d", &f.anio);
}

//devuelve el dia de la fecha
int DiaFecha (fecha f){
    return f.dia;
}

//devuelve el mes de la fecha
int MesFecha (fecha f){
    return f.mes;
}

//devuelve el anio de la fecha
int AnioFecha (fecha f){
    return f.anio;
}

//imprime la fecha por pantalla
void ImprimeFecha (fecha f){
    printf("%02d/%02d/%04d\n", f.dia, f.mes, f.anio);
}
