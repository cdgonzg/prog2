#include "boolean.h"
#include "string.h"
#include <stdio.h>

int main () {
    //defino un string
    string s1, s2;
    scan(s1);
    print(s1);
    scan(s2);
    print(s2);
    strcop(s1, s2);
    print(s1);
    print(s2);

    return 0;
}
