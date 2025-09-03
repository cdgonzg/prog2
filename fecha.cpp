#include "fecha.h"
#include "boolean.h"

//carga la fecha por teclado
void CargaFecha (fecha &f){
    printf("Ingrese el dia: ");
    scanf("%d", &f.dia);
    printf("Ingrese el mes: ");
    scanf("%d", &f.mes);
    printf("Ingrese el anio: ");
    scanf("%d", &f.anio);
}

//devuelve si la fecha es valida o no
boolean EsFechaValida (fecha f){
    if(f.anio < 0) return FALSE;
    if(f.mes < 1 || f.mes > 12) return FALSE;
    if(f.dia < 1) return FALSE;

    int diasEnMes;
    switch(f.mes){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            diasEnMes = 31;
            break;
        case 4: case 6: case 9: case 11:
            diasEnMes = 30;
            break;
        case 2:
            if((f.anio % 4 == 0 && f.anio % 100 != 0) || (f.anio % 400 == 0)){
                diasEnMes = 29; // Año bisiesto
            } else {
                diasEnMes = 28;
            }
            break;
        default:
            return FALSE; // Mes inválido
    }

    if(f.dia > diasEnMes) return FALSE;

    return TRUE;
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
