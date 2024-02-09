#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Removes whitespace characters from the beginning and the ending s
*/

void rm_space(char *s) {
    int len = 0;
    while(*s != '\0') {
        len++;
        s++;
    }
    s -= len;
    int i;
    int j = 0;
    for(int i = 0; i < len; i++) {
        if(s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
    }
    s[j]= '\0';
}