#include "string.h"

//const int MAX = 80;
typedef char string[MAX];

int strlar(string s)
{
    int i = 0;
    while (s[i] != '\0')
    i++;
    return i;
}

void print(string s)
{
    int i = 0;
    while (s[i]!= '\0')
    {
        printf ("%c", s[i]);
        i++;
    }
}

void scan(string &s)
{
    int i = 0;
    char c;
    fflush (stdin);
    scanf ("%c",&c);
    while ((c != '\n') && (i < MAX - 1))
    {
        s[i] = c;
        i++;
        scanf("%c",&c);
    }
    s[i] = '\0';
}

boolean strmen(string s1, string s2)
{
    int i = 0;
    boolean encontre = FALSE;
    boolean menor = FALSE;
    while ((!encontre) && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        if (s1[i] != s2[i])
        encontre = TRUE;
        if (s1[i] < s2[i])
        menor = TRUE;
        i++;
    }
    if ((!encontre) && (s2[i]!='\0'))
        menor = TRUE;
    return menor;
}

boolean streq(string s1, string s2)
{
    int i = 0;
    boolean iguales = TRUE;
    while (iguales && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        if (s1[i] != s2[i])
        iguales = FALSE;
        i++;
    }
    if ((s1[i] != '\0') || (s2[i] != '\0'))
        iguales = FALSE;
    return iguales;
}

//Copia s2 en s1.
void strcop(string &s1,string s2)
{
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

void strcon (string &s1, string s2)
{
    int i = strlar(s1);
    int j = 0;
    while ((i < MAX - 1) && (s2[j] != '\0'))
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

void strswp(string &s1, string &s2)
{
    string aux;
    // strcop(aux,s1);
    // strcop(s1,s2);
    // strcop(s2,aux);
}
