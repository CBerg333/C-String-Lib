#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Returns a new string consisting of the characters in s repeated x times, with the character sep in between. For
example, if s is the string all right, x is 3, and sep is , the function returns the new string all right,all
right,all right. If s is NULL, the function returns NULL. It is up to the caller to free any memory allocated by
the function.
*/

char *repeat(char *s, int x, char sep) {
    int count = 0;
    while(*s != '\0') {
        count++;
        s++;
    }
    char *t = (char*) malloc(count*x+(sep*x));
    s -= count;
    int i;
    int j;
    int count2 = 0;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < count; j++) {
            *t = *s;
            s++;
            t++;
            count2++;
        }
        s -= count;
        *t = sep;
        t++;
        count2++;
    }
    *t = '\0';
    t -= count2;
    return t;
    free(t);
}