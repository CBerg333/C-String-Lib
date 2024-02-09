#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Returns the number of characters c in s1 such that b<=c<=t
*/

int num_in_range(char *s1, char b, char t) {
    int re = 0;
    while(*s1 != '\0') {
        if(*s1 > b && *s1 < t) {
            re++;
            s1++;
        }
        else {
            s1++;
        }
    }
    return re;
}