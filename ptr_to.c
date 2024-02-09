#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Returns a pointer to the first occurrence of n in the string h or NULL if it isn't found
*/

char *ptr_to(char *h, char *n) {
char *p = NULL;
int count = 0;
    while(*h != '\0') {
        count++;
        h++;
    }
    h -= count;

    for(int i = 0; i < count; i++) {
        if(h[i] == n[0]) {
            char *p = &h[i];
            return p;
        }
    }
    return p;
}