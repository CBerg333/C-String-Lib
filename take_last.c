#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Modifies s so that it consists of only its last n characters. If n is ≥ the length of s, the original string is unmodified.
For example if we call take_last("Brubeck" 5), when the function finishes, the original string becomes "ubeck"
*/

void take_last(char *s, int n) {
    int c = 0;
    while(*s != '\0') {
        c++;
        s++;
    }
    s-=c;
    if(c > n) {
        int i;
        int j = c-n;
        for(int i = 0; i < n; i++) {
            *s = *(s+j);
            s++;
        }
    }
    *s = '\0';
}