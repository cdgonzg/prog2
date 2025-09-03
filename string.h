#ifndef _String_H
#define _String_H

#include "boolean.h"

const int MAX = 80;

typedef char String[MAX];

//Devuelve la longitud de la cadena.
int strlar(String s);

//Imprime la cadena por pantalla.
void print(String s);

//Carga la cadena por teclado.
void scan(String &s);

//Devuelve TRUE si s1 es menor que s2, FALSE en caso contrario.
boolean strmen(String s1, String s2);

//Devuelve TRUE si s1 es igual a s2, FALSE en caso contrario.
boolean streq(String s1, String s2); 

//Copia s1 en s2.
void strcop(String &s1, String s2);

//Concatena s1 y s2 en s3.
void strcon(String s1, String s2, String &s3);

//Intercambia s1 y s2.
void strswap(String &s1, String &s2);

#endif