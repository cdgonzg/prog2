#ifndef FECHA_H
#define FECHA_H

typedef struct
{
        int dia;
        int mes;
        int anio;
} fecha;

//carga la fecha por teclado
void CargaFecha (fecha &f);

//devuelve el dia de la fecha
int DiaFecha (fecha f);

//devuelve el mes de la fecha
int MesFecha (fecha f);

//devuelve el anio de la fecha
int AnioFecha (fecha f);

//imprime la fecha por pantalla
void ImprimeFecha (fecha f);

#endif // FECHA_H