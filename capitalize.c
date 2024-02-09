#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Changes s so that the first letter of every word is in upper case and each additional letter is in lower case.
*/

void capitalize(char *s) {
    int count = 0;
    while(*s != '\0') {
        count++;
        s++;
    }
    s -= count;
    if(*s > 96 && *s < 123) {
        s[0] = (*s)-32;
    }
    for(int i = 1; i < count; i ++) {
        if(s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i]+32;
        }
    }

}