#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Compares s1 and s2 ignoring case. Returns a positive number if s1 would appear after s2 in the dictionary, a
negative number if it would appear before s2, or 0 if the two are equal.
*/

int strcmp_ign_case(char *s1, char *s2) {
    while(*s1 != '\0' && *s2 != '\0') {
        if(*s1 > 96 && *s1 < 123 && *s2 > 64 && *s2 < 90) {
            if((*s1)-32 > *s2) {
                return -1;
            }
            if((*s1)-32 < *s2) {
                return 1;
            }
            s1++;
            s2++;
        }
        else if(*s1 > 64 && *s1 < 91 && *s2 > 96 && *s2 < 123) {
            if(*s1 > (*s2)-32) {
                return -1;
            }
            if(*s1 < (*s2)-32) {
                return 1;
            }
            s1++;
            s2++;
        }
        else if((*s1 > 96 && *s1 < 123 && *s2 > 96 && *s2 < 123) || (*s1 > 64 && *s1 < 91 && *s2 > 64 && *s2 < 91)) {
            if(*s1 > *s2) {
                return -1;
            }
            if(*s1 < *s2) {
                return 1;
            }
            s1++;
            s2++;
        }
    }

return 0;
}