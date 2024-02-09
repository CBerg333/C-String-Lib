#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Returns 1 if suff is a suffix of s ignoring case or 0 otherwise.
*/

int ends_with_ignore_case(char *s, char *suff) {
    int count = 0;
    int count2 = 0;
    while(*s != '\0') {
        count++;
        s++;
    }
    while(*suff != '\0') {
        count2++;
        *suff++;
    }
    if(count2 > count) {
        return 0;
    }
    else {
        int i;
        for(int i = count2; i > 0; i--) {
            if(*s != *suff) {
                return 0;
            }
            else {
                suff--;
                s--;
            }
        }
        return 1;
    }
}