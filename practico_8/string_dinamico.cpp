#include "string_dinamico.h"

/* strcrear crea un string vacío (solo con el carácter ‘\0’) */
void strcrear(string_dinamico & s){
    s.tamanio = 1;
    s.str = new char[s.tamanio];
    s.str[0] = '\0';
}

/* strdestruir libera la memoria ocupada por el string y lo deja nulo. */
void strdestruir(string_dinamico & s){
    delete[] s.str;
    s.str = NULL;
    s.tamanio = 0;
}

/* strlar devuelve el largo de un string. Se entiende por largo, la cantidad de caracteres antes del carácter nulo. */
int strlar(string_dinamico s){
    int largo = 0;
    while (largo < s.tamanio && s.str[largo] != '\0')
    {
        largo++;
    }
    return largo;
}

/* strcop recibe dos strings y copia el segundo en el primero. */
void strcop(string_dinamico & destino, string_dinamico origen){
    destino.tamanio = origen.tamanio;
    destino.str = new char[destino.tamanio];
    for (int i = 0; i < destino.tamanio; i++)
    {
        destino.str[i] = origen.str[i];
    }
}

/* scan lee un string desde el teclado. Se tomarán en cuenta los primeros 79 caracteres
significativos en caso de que el largo del string sea mayor o igual a 80. Un string
finaliza cuando se lea un carácter ‘nueva línea’ el cual se sustituirá por uno nulo. */
void scan(string_dinamico & s){
    char c;
    int i = 0;
    s.tamanio = 80; // 79 caracteres + '\0'
    s.str = new char[s.tamanio];
    fflush(stdin);
    scanf(" %c", &c);
    while (c != '\n' && i < 79)
    {
        s.str[i] = c;
        i++;
        scanf("%c", &c);
    }
    s.str[i] = '\0';
    s.tamanio = i + 1; // ajustar el tamaño al largo real del string
}

/* strcon recibe dos strings y concatena el segundo string al final del primero, la concatenación
deberá quedar sobre el primero de los dos. En caso de que el largo de los strings
exceda los 79 caracteres, no se tomarán los caracteres excedentes del segundo string. */
void strcon(string_dinamico & destino, string_dinamico origen){
    int largo_destino = strlar(destino);
    int largo_origen = strlar(origen);
    int espacio_disponible = 79 - largo_destino;

    
}

/* strswp recibe dos strings y devuelve el primero en el segundo y viceversa. */
void strswp(string_dinamico & s1, string_dinamico & s2){
    string_dinamico temp;
    strcop(temp, s1);
    strdestruir(s1);
    strcop(s1, s2);
    strdestruir(s2);
    strcop(s2, temp);
    strdestruir(temp);
}

/* print despliega un string por pantalla. */
void print(string_dinamico s){
    for (int i = 0; i < s.tamanio; i++)
    {
        printf("%c", s.str[i]);
    }
    printf("\n");
}

/* strmen recibe dos strings y devuelve TRUE si el primero de ellos es menor (en orden
alfabético) que el segundo, o FALSE en caso contrario. */
boolean strmen(string_dinamico s1, string_dinamico s2){
    boolean menor = FALSE;
    boolean encontre = FALSE;
    int i = 0;
    while (!encontre && i < s1.tamanio && i < s2.tamanio)
    {
        if (s1.str[i] != s2.str[i])
        {
            encontre = TRUE;
            if (s1.str[i] < s2.str[i])
            {
                menor = TRUE;
            }
        }
        i++;
    }
    if (!encontre && s1.tamanio < s2.tamanio)
    {
        menor = TRUE;
    }
    return menor;

}

/*  j) streq reciba dos strings y devuelve TRUE si ambos strings son iguales o FALSE en caso contrario */
boolean streq(string_dinamico s1, string_dinamico s2){
    boolean iguales = TRUE;
    if (s1.tamanio != s2.tamanio)
    {
        iguales = FALSE;
    } else {
        for (int i = 0; i < s1.tamanio; i++)
        {
            if (s1.str[i] != s2.str[i])
            {
                iguales = FALSE;
            }
        }
    }
    return iguales;
}