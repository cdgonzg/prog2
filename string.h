#include <boolean.h>

const int MAX = 80;

typedef char string[MAX];

//Devuelve la longitud de la cadena.
int strlar (string s);

//Imprime la cadena por pantalla.
void print (string s);

//Carga la cadena por teclado.
void scan (string &s);

//Devuelve TRUE si s1 es menor que s2, FALSE en caso contrario.
boolean strmen (string s1, string s2);

//Devuelve TRUE si s1 es igual a s2, FALSE en caso contrario.
boolean streq (string s1, string s2); 

//Copia s1 en s2.
void strcop (string s1, string &s2);

//Concatena s1 y s2 en s3.
void strcon (string s1, string s2, string &s3);

//Intercambia s1 y s2.
void strswap (string &s1, string &s2);
