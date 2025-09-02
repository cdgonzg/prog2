typedef struct fecha
{
        int dia;
        int mes;
        int anio;
};

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
