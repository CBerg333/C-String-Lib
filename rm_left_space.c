#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Removes whitespace characters from the beginning of s
*/

void rm_left_space(char *s) {
    int count = 0;
    while(*s == ' ') {
        count++;
        s++;
    }
    int count2 = 0;
    while(*s != '\0') {
        count2++;
        s++;
    }
    s-=(count+count2);
    int i;
    int j = 0;
    for(int i = count2+1; i > 1; i--) {
        *s = *(s+(count));
        s++;
    }
    *s = '\0';
}