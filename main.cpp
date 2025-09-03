#include "boolean.h"
#include "string.h"
#include <stdio.h>

int main () {
    //defino un string
    String s1, s2;
    scan(s1);
    print(s1);
    printf("\n");
    scan(s2);
    print(s2);
    printf("\n");
    strcop(s1, s2);
    print(s1);
    print(s2);

    return 0;
}
