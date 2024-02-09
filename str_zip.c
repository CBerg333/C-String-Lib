#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Returns a new string consisting of all of the characters of s1 and s2 interleaved with each other. For example, if
s1 is "Spongebob" and s2 is "Patrick", the function returns the string "SPpaotnrgiecbkob"
*/

char* str_zip(char *s1, char *s2) {
    int l1 = 0;
    int l2 = 0;
    while(*s1 != '\0') {
        l1++;
        s1++;
    }
    while(*s2 != '\0') {
        l2++;
        s2++;
    }
    s1 -= l1;
    s2 -= l2;
   static char ret[1000];
    int i;
    for(i = 0; i < (l1+l2); i++) {
        if(*s1 == '\0' && *s2 != '\0') {
             ret[i] = *s2;
             s2++;
        }
        if(*s1 != '\0' && *s2 == '\0') {
            ret[i] = *s1;
            s1++;
        }
        else {
            if(i % 2 == 0) {
            ret[i] = *s1;
            s1++;
            }
            else {
            ret[i] = *s2;
            s2++;
            }
        }
    }
    ret[l1+l2+1] = '\0';
    return &ret[0];
}