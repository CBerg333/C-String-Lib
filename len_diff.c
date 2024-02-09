#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Returns the length of s1 - the length of s2
*/

int len_diff(char *s1, char *s2) {
int l1 = 0;
int l2 = 0;
while(*s1 != '\0' && *s2 != '\0') {
    l1++;
    l2++;
    s1++;
    s2++;
}
if(*s1 == '\0') {
        while(*s2 != '\0') {
            l2++;
            s2++;
        }
    }
    if(*s2 == '\0') {
        while(*s1 != '\0') {
            l1++;
            s1++;
        }
    }
return l1-l2;
}