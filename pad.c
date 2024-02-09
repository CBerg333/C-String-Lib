#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Returns a new string consisting of all of the letters of s, but padded with spaces at the end so that the total length
of the returned string is an even multiple of d. If the length of s is already an even multiple of d, the function
returns a copy of s. The function returns NULL on failure or if s is NULL. Otherwise, it returns the new string. It is
up to the caller to free any memory allocated by the function.
*/

char *pad(char *s, int d) {
    int len = 0;
    while(*s != '\0') {
        len++;
        s++;
    }
    s-=len;
    static char ret[1000];
    int i = 0;
    int j;
    while(*s != '\0') {
        ret[i] = *s;
        i++;
        s++;
        for(int j = 0; j < d; j++) {
            ret[i] = ' ';
            i++;
        }
    }
    ret[i] = '\0';
    return &ret[0];
}