#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Returns 1 if s is NULL, consists of only the null character ('') or only whitespace. returns 0 otherwise.
*/

int isEmpty(char *s) {
    if(!(*s)) {
        return 1;
    }
    while(*s != '\0') {
        if(*s != ' ') {
            return 0;
        }
        s++;
    }
    return 1;
}