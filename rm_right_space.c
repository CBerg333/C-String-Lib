#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Removes whitespace characters from the end of s
*/

void rm_right_space(char *s) {
    int count = 0;
    while(*s != ' ') {
        count++;
        s++;
    }
    *s = '\0';
}